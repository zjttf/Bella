// testShift.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a1 = 0x1;
	unsigned int a2 = 0x1;
	
	for (int idx = 0; idx <= 33; ++idx)
	{
		printf("a1 = %d, %x\n", a1 << idx, a1 << idx);
		printf("a2 = %u, %x\n", a2 << idx, a2 << idx);
	}

	//a1 = 1, 1
	//a2 = 1, 1
	//a1 = 2, 2
	//a2 = 2, 2
	//a1 = 4, 4
	//a2 = 4, 4
	//a1 = 8, 8
	//a2 = 8, 8
	//a1 = 16, 10
	//a2 = 16, 10
	//a1 = 32, 20
	//a2 = 32, 20
	//a1 = 64, 40
	//a2 = 64, 40
	//a1 = 128, 80
	//a2 = 128, 80
	//a1 = 256, 100
	//a2 = 256, 100
	//a1 = 512, 200
	//a2 = 512, 200
	//a1 = 1024, 400
	//a2 = 1024, 400
	//a1 = 2048, 800
	//a2 = 2048, 800
	//a1 = 4096, 1000
	//a2 = 4096, 1000
	//a1 = 8192, 2000
	//a2 = 8192, 2000
	//a1 = 16384, 4000
	//a2 = 16384, 4000
	//a1 = 32768, 8000
	//a2 = 32768, 8000
	//a1 = 65536, 10000
	//a2 = 65536, 10000
	//a1 = 131072, 20000
	//a2 = 131072, 20000
	//a1 = 262144, 40000
	//a2 = 262144, 40000
	//a1 = 524288, 80000
	//a2 = 524288, 80000
	//a1 = 1048576, 100000
	//a2 = 1048576, 100000
	//a1 = 2097152, 200000
	//a2 = 2097152, 200000
	//a1 = 4194304, 400000
	//a2 = 4194304, 400000
	//a1 = 8388608, 800000
	//a2 = 8388608, 800000
	//a1 = 16777216, 1000000
	//a2 = 16777216, 1000000
	//a1 = 33554432, 2000000
	//a2 = 33554432, 2000000
	//a1 = 67108864, 4000000
	//a2 = 67108864, 4000000
	//a1 = 134217728, 8000000
	//a2 = 134217728, 8000000
	//a1 = 268435456, 10000000
	//a2 = 268435456, 10000000
	//a1 = 536870912, 20000000
	//a2 = 536870912, 20000000
	//a1 = 1073741824, 40000000
	//a2 = 1073741824, 40000000
	//a1 = -2147483648, 80000000
	//a2 = 2147483648, 80000000
	//a1 = 1, 1
	//a2 = 1, 1
	//a1 = 2, 2
	//a2 = 2, 2

	int b1 = 0x80000000;
	unsigned int b2 = 0x80000000;

	for (int idx = 0; idx <= 33; ++idx)
	{
		printf("b1 = %d, %x\n", b1 >> idx, b1 >> idx);
		printf("b2 = %u, %x\n", b2 >> idx, b2 >> idx);
	}

	//b1 = -2147483648, 80000000
	//b2 = 2147483648, 80000000
	//b1 = -1073741824, c0000000
	//b2 = 1073741824, 40000000
	//b1 = -536870912, e0000000
	//b2 = 536870912, 20000000
	//b1 = -268435456, f0000000
	//b2 = 268435456, 10000000
	//b1 = -134217728, f8000000
	//b2 = 134217728, 8000000
	//b1 = -67108864, fc000000
	//b2 = 67108864, 4000000
	//b1 = -33554432, fe000000
	//b2 = 33554432, 2000000
	//b1 = -16777216, ff000000
	//b2 = 16777216, 1000000
	//b1 = -8388608, ff800000
	//b2 = 8388608, 800000
	//b1 = -4194304, ffc00000
	//b2 = 4194304, 400000
	//b1 = -2097152, ffe00000
	//b2 = 2097152, 200000
	//b1 = -1048576, fff00000
	//b2 = 1048576, 100000
	//b1 = -524288, fff80000
	//b2 = 524288, 80000
	//b1 = -262144, fffc0000
	//b2 = 262144, 40000
	//b1 = -131072, fffe0000
	//b2 = 131072, 20000
	//b1 = -65536, ffff0000
	//b2 = 65536, 10000
	//b1 = -32768, ffff8000
	//b2 = 32768, 8000
	//b1 = -16384, ffffc000
	//b2 = 16384, 4000
	//b1 = -8192, ffffe000
	//b2 = 8192, 2000
	//b1 = -4096, fffff000
	//b2 = 4096, 1000
	//b1 = -2048, fffff800
	//b2 = 2048, 800
	//b1 = -1024, fffffc00
	//b2 = 1024, 400
	//b1 = -512, fffffe00
	//b2 = 512, 200
	//b1 = -256, ffffff00
	//b2 = 256, 100
	//b1 = -128, ffffff80
	//b2 = 128, 80
	//b1 = -64, ffffffc0
	//b2 = 64, 40
	//b1 = -32, ffffffe0
	//b2 = 32, 20
	//b1 = -16, fffffff0
	//b2 = 16, 10
	//b1 = -8, fffffff8
	//b2 = 8, 8
	//b1 = -4, fffffffc
	//b2 = 4, 4
	//b1 = -2, fffffffe
	//b2 = 2, 2
	//b1 = -1, ffffffff
	//b2 = 1, 1
	//b1 = -2147483648, 80000000
	//b2 = 2147483648, 80000000
	//b1 = -1073741824, c0000000
	//b2 = 1073741824, 40000000

	int c1 = 0xffffffff;
	printf("c1 = %d, %x\n", c1, c1);
	printf("special value = %d, %x\n", c1 >> 1, c1 >> 1);

	int c2 = 0x80000000;
	printf("c2 = %d, %x\n", c2, c2);
	printf("special value = %d, %x\n", c2 >> 1, c2 >> 1);
	printf("special value = %d, %x\n", c2 >> 31, c2 >> 31);
	printf("special value = %d, %x\n", c2 >> 32, c2 >> 32);

	printf("special value = %d, %x\n", c2 >> -1, c2 >> -1);

	//c1 = -1, ffffffff
	//special value = -1, ffffffff
	//c2 = -2147483648, 80000000
	//special value = -1073741824, c0000000
	//special value = -1, ffffffff
	//special value = -2147483648, 80000000
	//special value = -1, ffffffff


	return 0;
}

