// OBJECT AS ARGUMENT AND OBJECT AS RETURN 
#include<iostream>
using namespace std;
class example
{
        public:
        int a,b;
        example(){}
        example(int a,int b)
        {
                this->a=a;
                this->b=b;
        }
        example add(example e1,example e2)
        {
                example e;
                e.a=e1.a+e2.a;
                e.b=e1.b+e2.b;
                return e;
        }
        void print()
        {
                cout<<"\t A :"<<a;
                cout<<"\t B :"<<b;
        }
};
int main()
{
        example e1(10,20),e2(20,30),e3;

        cout<<"\nE1:";
        e1.print();
        cout<<"\nE2:";
        e2.print();

        e3=e3.add(e1,e2);
        cout<<"\nE3:";
        e3.print();
}