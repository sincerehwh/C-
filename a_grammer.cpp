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
	int a = 21;int b = 10;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a == b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
}

void logicalOperation(){
	int a = true;int b = false;
	cout << "\r\na = " << a << "  b = " << b << endl;
	cout << "a && b: " << (a && b) << endl;
	cout << "a || b: " <<  (a || b) << endl;
	cout << "!a: " <<  (!a) << endl;
 }

void anOperation(){
	unsigned int a = 1;
	unsigned int b = 15;
	cout << "\r\na = " << a << "  b = " << b << endl;
	cout << "a&b:" << (a & b) << endl;
	cout << "a|b:" << (a | b) << endl;
	cout << "a^b:" << (a ^ b) << endl;
	cout << "~a:" << (~a) << endl;
	cout << "a>>2:" << (a >> 2) << endl;
	cout << "a<<2:" << (a << 2) << endl;
	cout << "a<<3:" << (a << 3) << endl;
}

void assignmentOperation(){
	unsigned int a = 20;
	unsigned int b = 15;
	cout << "\r\na = " << a << "  b = " << b << endl;
	cout << "a+=b :" << (a += b) << endl;	
	cout << "a-=b :" << (a -= b) << endl;	
	cout << "a*=b :" << (a *= b) << endl;	
	cout << "a/=b :" << (a /= b) << endl;	
	cout << "a%=b :" << (a %= b) << endl;	
	cout << "a<<=b :" << (a <<= b) << endl;	
	cout << "a>>=b :" << (a >>= b) << endl;	
	cout << "a&=b :" << (a &= b) << endl;	
	cout << "a^=b :" << (a ^= b) << endl;	
	cout << "a|=b :" << (a |= b) << endl;	

}

void miscellaneousOperation(){
	int a = 10;int b = 11;
	cout << "sizeof(1)" << sizeof(1) << endl;
	cout << "(a > b ? 100:110)" << (a > b ? 100:110) << endl;
	cout << "&a" << &a << endl;
}

/*
运算符 	结合性 
后缀 	() [] -> . ++ - -  	从左到右 
一元 	+ - ! ~ ++ - - (type)* & sizeof 	从右到左 
乘除 	* / % 	从左到右 
加减 	+ - 	从左到右 
移位 	<< >> 	从左到右 
关系 	< <= > >= 	从左到右 
相等 	== != 	从左到右 
位与   	& 	从左到右 
位异或  	^ 	从左到右 
位或 	| 	从左到右 
逻辑与  	&& 	从左到右 
逻辑或  	|| 	从左到右 
条件 		?: 	从右到左 
赋值 	= += -= *= /= %=>>= <<= &= ^= |= 	从右到左 
逗号 	, 	从左到右 

*/


/////////// 循环 ////////////

void whileLooop(){
	int a = 1;
	while(a < 100){
		++a;
		cout << a << endl; 
	}
}

void forLoop(){
	for(int i=0;i<100;i++){
		cout << i << endl;
	}
}

/////////// 判断 ////////////

/* if switch */

////////// 函数 ////////////

/* 函数声明 */
void dataCount(double timestamp);

/* 函数实现 */

/* 函数调用 */

/* 函数参数：
	
	传值参数：该方法把参数的实际值复制给函数的形式参数。
			在这种情况下，修改函数内的形式参数对实际参数没有影响。

	指针调用：该方法把参数的地址复制给形式参数。
			在函数内，该地址用于访问调用中要用到的实际参数。
			这意味着，修改形式参数会影响实际参数。

	引用调用：该方法把参数的引用复制给形式参数。
			在函数内，该引用用于访问调用中要用到的实际参数。
			这意味着，修改形式参数会影响实际参数。

*/

void exchangeVlue(int a,int b){
	int t = a;
	a = b;
	b = t;
}

void exchangePrinter(int *a,int *b){
	int t = *a;
	*a = *b ;
	*b = t;
	return;
}

void exchangeQuote(int &a,int &b){
	int t = a;
	a = b;
	b = t;
	return;
}


////////// 数字 ////////////

void numbers(){

   short  s = 10;      
   int    i = 1000;    
   long   l = 1000000; 
   float  f = 230.47;  
   double d = 30949.374;
  
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;
 
}

void calculate(double num){

	// cout << "sin(1):" << sin(num) << endl;
	// cout << "cos(1):" << cos(num) << endl;
	// cout << "tan(1):" << tan(num) << endl;
	// cout << "log(1):" << log(num) << endl;
	// cout << "pow(20,20):" << pow(num,2) << endl;
	// cout << "hypot(30,20):" << hypot(num,20) << endl;
	// cout << "sqrt(102):" << sqrt(num) << endl;
	// cout << "abs(-111):" << abs(num): << endl;
	// cout << "fabs(num):" << fabs(num): << endl;
	// cout << "floor(111):" << floor(num): << endl;
}

void randomNumber(){
	int i,j;
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++){
		j = rand();
		cout << "随机数：" << j << endl;
	}
}

////////// 数组 ////////////

void arrayArray(){
	/*声明*/
	double time[100] = {1,2,4};
	int number[] = {1,2,3,4,5,6,7,8};
	

	/* 多维数组*/
	int mArray[5][10] = {
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
		{1,2,3,4,5,6,7,8,9,10},
	};

	int mA[2][4] = {1,2,3,4,5,6,7,8};

	a(&time);


}

/* 传递*/
void a(int *){

};

void b(int pa[10]){

};

void c(int pa[]){

};



int main(int argc, char const *argv[])
{
	/* code */
	// #include "a_type_size.cpp"

	// arithmeticOperation();
	// relationalOperation();
	// logicalOperation();
	// anOperation();
	// assignmentOperation();
	// miscellaneousOperation();


	// whileLooop();
	// forLoop();

	// int a = 100;int b = 1;int c = 100;int d = 1;int e = 100;int f = 1;
	// exchangeVlue(a,b);
	// cout << "a=" << a << " b=" << b << endl;
	// exchangePrinter(&c,&d);
	// cout << "c=" <<c  << " d=" << d << endl;
	// exchangeQuote(e,f);
	// cout << "e=" << e << " f=" << f << endl;

	numbers();
	//calculate();
	randomNumber();

	arrayArray();

	return 0;
}



