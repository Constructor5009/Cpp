// Program to demonstrate operator overloading of == operator for comparing 2 strings.
#include <iostream>
using namespace std;

class string1
{
    public:
        char n[10];
        void input()
        {
            cout<<"Enter sstring ";
            cin>>n;

        }
        void output()
        {
            cout<<"String is "<<n;
        }
        string1 operator ==(string1 s2)
        {
            string1 temp;
            for(int i=0;i<4;i++)
            {
                if(n[i]==s2.n[i])
                {
                    cout<<"WOW "<<i<<endl;
                }
            }
            return temp;
        }
};
int main()
{
    string1 s1,s2,s3;
    s1.input();
    s2.input();
    s3 = s1==s2;
    s3.output();
    return 0;
}
