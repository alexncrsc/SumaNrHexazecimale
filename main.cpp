#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


class Hexadecimal{
    char *sir;
    long long numar;
    public:
    Hexadecimal( ){}

    Hexadecimal(const long long numar_){
         numar=numar_;
    }

    Hexadecimal(const char* sir_) {
        size_t len = strlen(sir_);
        sir = new char[len + 1];
        strcpy(sir, sir_);
    }
    long long decimal(){
        int i,nr=0;
        for(i=0; i<strlen(sir); i++)
            if(sir[i]=='1')
                nr=nr+pow(16,i)*1;
            else
            if(sir[i]=='2')
                nr=nr+pow(16,i)*2;
            else
            if(sir[i]=='3')
                nr=nr+pow(16,i)*3;
            else
            if(sir[i]=='4')
                nr=nr+pow(16,i)*4;
            else
            if(sir[i]=='5')
                nr=nr+pow(16,i)*5;
            else
            if(sir[i]=='6')
                nr=nr+pow(16,i)*6;
            else
            if(sir[i]=='7')
                nr=nr+pow(16,i)*7;
            else
            if(sir[i]=='8')
                nr=nr+pow(16,i)*8;
            else
            if(sir[i]=='9')
                nr=nr+pow(16,i)*9;
            else
            if(sir[i]=='A')
                nr=nr+pow(16,i)*10;
            else
            if(sir[i]=='B')
                nr=nr+pow(16,i)*11;
            else
            if(sir[i]=='C')
                nr=nr+pow(16,i)*12;
            else
            if(sir[i]=='D')
                nr=nr+pow(16,i)*13;
            else
            if(sir[i]=='E')
                nr=nr+pow(16,i)*14;
            else
            if(sir[i]=='F')
                nr=nr+pow(16,i)*15;
        return nr;
    }



    void setName(const char* sir_){

        size_t len = strlen(sir_);
        sir = new char[len + 1];
        strcpy(sir, sir_);
    }
    void setNumar(const long long numar_){
                numar=numar_;
    }
    long long  getNumar() {
        return numar;
    }
    char *getSir() {
        return sir;
    }
    ~Hexadecimal() {
        delete[] sir;
    }



    int operator+=(const int numar_) const {
        return this->numar+numar_;
    }
    int operator-=(const int numar_) const {
        return this->numar-numar_;
    }
    long long operator+=(const char sir[])const{
        int i,nr=0;
        for(i=0; i<strlen(sir); i++)
            if(sir[i]=='1')
                nr=nr+pow(16,i)*1;
            else
                if(sir[i]=='2')
                    nr=nr+pow(16,i)*2;
                else
                    if(sir[i]=='3')
                        nr=nr+pow(16,i)*3;
                    else
                        if(sir[i]=='4')
                            nr=nr+pow(16,i)*4;
                        else
                            if(sir[i]=='5')
                                nr=nr+pow(16,i)*5;
                                else
                                    if(sir[i]=='6')
                                        nr=nr+pow(16,i)*6;
                                    else
                                        if(sir[i]=='7')
                                            nr=nr+pow(16,i)*7;
                                        else
                                            if(sir[i]=='8')
                                                nr=nr+pow(16,i)*8;
                                            else
                                                if(sir[i]=='9')
                                                    nr=nr+pow(16,i)*9;
                                                else
                                                    if(sir[i]=='A')
                                                        nr=nr+pow(16,i)*10;
                                                    else
                                                        if(sir[i]=='B')
                                                            nr=nr+pow(16,i)*11;
                                                        else
                                                            if(sir[i]=='C')
                                                                nr=nr+pow(16,i)*12;
                                                            else
                                                                if(sir[i]=='D')
                                                                    nr=nr+pow(16,i)*13;
                                                                else
                                                                    if(sir[i]=='E')
                                                                        nr=nr+pow(16,i)*14;
                                                                    else
                                                                        if(sir[i]=='F')
                                                                        nr=nr+pow(16,i)*15;
        return this->numar+nr;
}
    long long operator-=(const char sir[])const{
        int i,nr=0;
        for(i=0; i<strlen(sir); i++)
            if(sir[i]=='1')
                nr=nr+pow(16,i)*1;
            else
            if(sir[i]=='2')
                nr=nr+pow(16,i)*2;
            else
            if(sir[i]=='3')
                nr=nr+pow(16,i)*3;
            else
            if(sir[i]=='4')
                nr=nr+pow(16,i)*4;
            else
            if(sir[i]=='5')
                nr=nr+pow(16,i)*5;
            else
            if(sir[i]=='6')
                nr=nr+pow(16,i)*6;
            else
            if(sir[i]=='7')
                nr=nr+pow(16,i)*7;
            else
            if(sir[i]=='8')
                nr=nr+pow(16,i)*8;
            else
            if(sir[i]=='9')
                nr=nr+pow(16,i)*9;
            else
            if(sir[i]=='A')
                nr=nr+pow(16,i)*10;
            else
            if(sir[i]=='B')
                nr=nr+pow(16,i)*11;
            else
            if(sir[i]=='C')
                nr=nr+pow(16,i)*12;
            else
            if(sir[i]=='D')
                nr=nr+pow(16,i)*13;
            else
            if(sir[i]=='E')
                nr=nr+pow(16,i)*14;
            else
            if(sir[i]=='F')
                nr=nr+pow(16,i)*15;
        return this->numar-nr;
    }
};

int main() {
    char sir[10],sir2[10];
    int numar1,numar2,numar3;
    Hexadecimal s1;
    cout<<"Introduceti un numar hexadecimal de la tastatura "<<endl;
    cout<<"sir=";
    cin.getline(sir,10);
    cout<<"Introduceti alt numar hexadecimal de la tastatura "<<endl;
    cout<<"sir2=";
    cin.getline(sir2,10);
    cout<<endl<<"Introduceti un nr intreg de la tastatura"<<endl<<"n1=";
    cin>>numar2;
    s1.setName(sir);
    numar1=s1.decimal();
    s1.setNumar(numar1);
    if (numar1 >9999999999 || numar2 > 9999999999) {
        cout << "Addition Overflow" << endl;
    }
    else {

        numar3 = s1 += numar2;
        cout << numar3 << " ";
        numar3 = s1 -= numar2;
        cout << numar3<<" ";
        numar3 = s1 += sir2;
        cout << numar3<<" ";
        numar3 = s1 -= sir2;
        cout << numar3<<" ";
    }

    return 0;

}
