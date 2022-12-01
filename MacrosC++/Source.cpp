#include <iostream>


#define mAGE 20
#define mTOSTRING(x) (#x)
#define mPRINT(a,b,c) printf("%d", a##b##c)
#define mFLAG
#define mLENGHT_CIRCLE(r) (2 * mPI * (r)) 
#define mPI 3.14 

using namespace std;

int main()
{
	//«амена макроса mAGE на его значение
	cout << "mAGE " << mAGE << endl;
	// ƒиректива #undef mAGE, после которой макрос mAGE перестанет существовать
//#undef mAGE
	cout << "mAGE " << mAGE << endl;
	//ћакрос mLENGHT_CIRCLE, в котором продемонстрировано важность обрамлени€ параметров в скобки (r).
	cout << "mLENGHT_CIRCLE " << mLENGHT_CIRCLE(3 + 2) << endl;
	//ћакрос, в котором происходит превращение параметра макроса в строку
	cout << "mTOSTRING " << mTOSTRING(1 + 2) << endl;
	//ћакрос, где происходит конкатенаци€ параметров макроса
	cout << "mPRINT ";
	mPRINT(12, 22, 18);
	cout << endl;
	// –абота с условными директивами
#ifdef mFLAG
	cout << "macros mFLAG define!" << endl;
#else
	cout << "macros mFLAG don't define" << endl;
#endif

#if mAGE == 20
	cout << "AGE is " << mAGE << endl;
#elif mAGE < 20
	cout << "AGE is smaller of 20" << endl;
#else 
	cout << "AGE is bigger of 20" << endl;
#endif


	// «аранее заготовленные макросы
	cout << "__DATE__ " << __DATE__ << endl;
	cout << "__TIME__ " << __TIME__ << endl;
	cout << "__FILE__ " << __FILE__ << endl;
	cout << "__LINE__ " << __LINE__ << endl;
	cout << "__TIMESTAMP__ " << __TIMESTAMP__ << endl;
	cout << "__COUNTER__ " << __COUNTER__ << endl;
	cout << "__COUNTER__ " << __COUNTER__ << endl;
	cout << "__cplusplus " << __cplusplus << endl;






	return 0;
}