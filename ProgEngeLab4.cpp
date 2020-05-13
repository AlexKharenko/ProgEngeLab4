﻿#include <iostream>
#include "func.h"


int main(int argc, char* argv[])
{
    archive ARCH;
    ARCH.set_work(argc);
    if (!ARCH.get_work()) {
        return 0;
    }
    ARCH.set_name_func(argv[1]);
    if (ARCH.get_name_func() == "--compress") {
        ARCH.set_name_in(argv[3]);
        ARCH.set_name_out(argv[2]);
    }
    else {
        ARCH.set_name_out(argv[2]);
    }
    ARCH.out_f_in_out();
    ARCH.init_dict();
    //ARCH.out_dict();
    ARCH.read_data();
    ARCH.compress();
}
