#include<iostream>
using namespace std;
class student
{
	int roll;
	public:
	
		void getroll()
		{
			cout<<"Enter roll no"<<endl;
			cin>>roll;
		}
		void putroll()
		{
		cout<<roll<<"\t";}
	
};

class marks: public virtual student
{	protected:
	float s1,s2;
	public: 
	void getmarks()
		{
			cout<<"Enter marks s1,s2"<<endl;
		cin>>s1>>s2;}
	void putmarks()
	{
		cout<<s1<<"\t"<<s2<<"\t";
	}
};

class sport: public virtual student
{	protected:
	int score;
	public:
		void getscore()
		{
			cout<<"Enter the score"<<endl;
		cin>>score;
		}
			
		void putscore()
		{
		cout<<score<<"\t";
		}
};

class result:public marks,public sport
{
	float total;
	public: 
	void display()
	{
		total=s1+s2+score;
	putroll();
	putmarks();
	putscore();
	}
};

main()
{
	result R;
	R.getroll();
	R.getmarks();
	R.getscore();
	R.display();
}
