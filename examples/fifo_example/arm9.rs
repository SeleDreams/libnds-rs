use libc_print::libc_println;
use libnds_sys::arm9_bindings::*;
extern crate alloc;
#[start]
fn main(_argc: isize, _argv: *const *const u8) -> isize 
{
    let mut frame = 0;
    unsafe
    {
        consoleDemoInit();
        loop 
        {
            //ask the custom arm7 program for the temperature
		    fifoSendValue32(FIFO_USER_01 as i32,0);

            let mut values : [u32;3] = [0;3];
            let mut ctr = 0;
            while ctr < 3 {
                if fifoCheckValue32(FIFO_USER_01 as i32)
                {
                    values[ctr] = fifoGetValue32(FIFO_USER_01 as i32);
                    ctr += 1;
                }
            }
            libc_println!("{} : {} {} {}",frame,values[0],values[1],values[2]);
            scanKeys();
            if (keysDown() & KEY_START) > 0
            {
                libc_println!("{}",keysHeld() & KEY_START);
                swiWaitForVBlank();
                break;
            }
            frame += 1;
            swiWaitForVBlank();
        }
    }
    return 0;
}
