#include <iostream>

using namespace std;


/*

1.变量名区分大小写

2.关键词

3.

*/


/* typedef 声明 */
typedef int INT;

/* enum 枚举 */
enum PersonType
{
	white = 0,
	yellow = 1,
	brown = 2,
	black = 3,
};


#define HEIGHT 100
#define WIDTH 50

//const 类型的对象在程序执行期间不能被修改改变。
//volatile	告诉编译器，变量的值可能以程序未明确指定的方式被改变。
//restrict	修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
const int COUNT = 20;


//////////////// 存储类 ////////////////
/* 
	register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量
*/

/* 
	static 指示编译器在程序的生命周期内保持局部变量的存在
        使用 static 修饰局部变量可以在函数调用之间保持局部变量的值 
*/
static int number = 7;

/*
 	extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
 	extern 是用来在另一个文件中声明一个全局变量或函数
 	extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候
*/

/*
	mutable 说明符仅适用于类的对象，它允许对象的成员替代常量。
*/

/*
	thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。
	可以将 thread_local 仅应用于数据声明和定义，thread_local 不能用于函数声明或定义。
*/

//////////////// 运算符 ////////////////
void arithmeticOperation(){
	int a = 21;int b = 10;

   cout << a + b << endl;
   cout << a - b << endl;
   cout << a * b << endl;
   cout << a / b << endl;
   cout << a % b << endl;
   cout << a++ << endl;
   cout << a-- << endl;
   cout << ++b << endl;
   cout << --b << endl;
}

void relationalOperation(){

}

void logicalOperation(){

}

void anOperation(){

}

void assignmentOperation(){

}

void miscellaneousOperation(){

}



// 函数
void num(int num){
	static int i = 7;
	i++;
	cout << i  << endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	// #include "a_type_size.cpp"

	arithmeticOperation();

	return 0;
}



