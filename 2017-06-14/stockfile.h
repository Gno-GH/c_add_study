#ifndef STOCKFILE_H_
#define STOCKFILE_H_
class Stock
{
	private :
		int sex;
	public :
		int age;
		int number;
		Stock();
		~Stock();
        Stock(int sex_,int age_,int number);
		void show();
};
#endif
