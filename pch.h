// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

#ifndef _PCH_H
#define _PCH_H

#define _CRT_SECURE_NO_WARNINGS // for fwrite, printf etc...
#define _CRT_NONSTDC_NO_WARNINGS	// for posix fucs for zlib

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdbool.h>
#include <assert.h>
#include <math.h>
#include <stdarg.h>
#include <stdint.h>

#include "array_macro.h"

enum { NOCHANGE = -1 };

#define ENOTVGM 43
#define EBADALLOC 44
#define EVGMNOTSUPPORTED 45
#define NOTES_IN_OCT 12

#define SIGN(x) ((x > 0) - (x < 0))

#endif