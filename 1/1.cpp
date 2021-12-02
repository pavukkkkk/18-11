#include <iostream>
using namespace std;
double eps = 1e-9;
int ng=0,nn=0,nv=0,nt=0;
double middle(double x1, double x2)
{
return (x1 + x2) / 2.;
}

void f(int x1, int y1, int x2, int y2) {
    if (abs(y1 -y2)<eps && abs(x1-x2)<eps) {
        cout <<"tochka"<<endl;
        nt++;
    }
    else if (abs(y1 -y2)<eps) {
        cout <<"gorizontalno"<<endl;
        ng++;
    }
    else if (abs(x1-x2)<eps) {
       cout<<"vertikalno"<<endl;
        nv++;
    }
    else {
        double mx= middle (x1,x2);
        double my =middle (x1,x2);
        cout<< "naklonno"<<" "<<"seredina: "<<mx<<" "<<my<<endl;
        nn++;
    }
}


int main()
{
    
    int n;
    int x1, x2, y1, y2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        f(x1, y1, x2, y2);
        

    }
    cout<<"tochka: "<<nt<<endl;
    cout<<"vertikalno: "<<nv<<endl;
    cout<<"gorizontalno: "<<ng<<endl;
    cout<<"naklonno: "<<nn<<endl;
}

//исправленныйивариант, старый в предыдщем в коммите
