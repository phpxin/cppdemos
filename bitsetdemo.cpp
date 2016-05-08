#include <iostream>
#include <cstdio>
#include <bitset>

using namespace std;

void test1() ;
int bigEndTest() ;

int main(int argc, char *args[])
{
    bigEndTest();

    return 1;
}

void test1(){
    const int bitset_int = sizeof(int) * 8 ;

    bitset<bitset_int> bitvec(8) ;

    cout << bitvec << endl;

    size_t bitlen = bitvec.size() , bitptr = 0 ;

    for(bitptr=0; bitptr<bitlen; bitptr++)
    {
        cout << bitvec[bitptr] << endl;
    }
}

int bigEndTest(){
    union{
        char a[2] ;
        unsigned short i ;
    }tester ;

    tester.i = 1 ;

    printf("%d \n", tester.a[0]);   // 低地址
    printf("%d \n", tester.a[1]);   // 高地址

    // 数据                  高位字节            低位字节
    // unsigned short 1       0000 0000 0000 0001
    // 也就是以我们的角度 左侧高位，右侧低位

    // 内存              低地址             高地址
    // 结果内存中字节序为    0000 0001 0000 0000     小端字节序   数据低位字节保存在内存的低地址端，称为小端字节序    Little-Endian
    // 如果内存中字节序为    0000 0000 0000 0001     大端字节序   数据高位字节保存在内存的低地址段，称为大端字节序    Big-Endian

    // 该数据输出位 0x01 0x00 明显是小端字节序

    return 0 ;
}
