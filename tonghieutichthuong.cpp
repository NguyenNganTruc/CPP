
#include<iostream>
#include<math.h>
using namespace std;
class DonThuc{
    private:
       int bac,heso;
    public:
       void nhap();
       void xuat();
       void giatri();
       void sosanh(DonThuc p);
       void daoham();
       void nguyenham();
       void cong( DonThuc p);
       void tru( DonThuc p);
       void nhan(DonThuc p);
       void chia(DonThuc p);  
};
void DonThuc::nhap(){
    cout<<"Nhap bac :";
    cin >> bac;
    cout <<"Nhap he so:";
    cin>> heso;
}
void DonThuc::xuat(){
    cout<<"Don thuc la:" ;
	cout<<heso<<"x^"<<bac;
}

void DonThuc::giatri(){
    int x;
    cout<<" Nhap gia tri x: ";
    cin >> x;
    cout<<" Gia tri don thuc la: "
	<<heso*pow(x,bac)<<endl;;
}
void DonThuc::sosanh(DonThuc p){
    if( this->bac== p.bac){
        if(this->heso > p.heso)
			cout<< "Don thuc 1 lon hon don thuc 2" << endl;
        else if(this->heso < p.heso) 
			cout<< "Don thuc 1 nho hon don thuc 2" << endl;
        else cout << "Hai da thuc bang nhau" << endl;
    }
    else 
      cout << "Don thuc khac bac nhau" << endl;
}
void DonThuc::daoham(){
    cout<<"Dao ham don thuc la: "
	<<heso*bac<<"x^"<<bac-1<<endl;
}
void DonThuc::nguyenham(){
    cout<<"Nguyen ham don thuc la: "
	<<float(heso)/(bac+1)<<"x^"<<bac+1<<endl;;
}
void DonThuc::cong( DonThuc p){
    if( this->bac== p.bac){
        cout<<"Cong 2 don thuc la: "
		<<this->heso+p.heso<<"x^"<<bac;
    }
    else
       cout <<"Hai da thuc khong cung bac" << endl;
}
void DonThuc::tru( DonThuc p){
    if( this->bac== p.bac){
        cout<<"Tru 2 don thuc la: " << this->heso-p.heso 
		<< "x^" << bac << endl;
    }
    else
       cout <<"Hai da thuc khong cung bac" << endl;
}
void DonThuc::nhan(DonThuc p){
    cout<<"Nhan 2 don thuc la: "
	<<this->heso*p.heso<<"x^"<<this->bac+p.bac << endl;
}
void DonThuc::chia(DonThuc p){
    cout<<"Chia 2 don thuc la: "
	<<float(this->heso)/p.heso<<"x^"<<this->bac-p.bac << endl;
}
int main(){
    DonThuc p1,p2;
    p1.nhap();
    p1.xuat();
    cout<<endl; 
    p2.nhap();
    p2.xuat();
    cout<<endl; 
    p1.giatri();
    p2.giatri();
    cout<<endl; 
    p1.daoham();
    p2.daoham();
    cout<<endl; 
    p1.nguyenham();
    p2.nguyenham();
    cout<<endl; 
   p1.sosanh(p2);
   p1.cong(p2);
   p1.tru(p2);
   p1.nhan(p2);
   p1.chia(p2);

}