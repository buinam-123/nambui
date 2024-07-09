#include <iostream>

using namespace std;
void Nhap(double a[], int n)
{

    for (int i=0; i<n; i++)
    {
        cout << "\nNhap vao a[" << i << "]: ";
        cin>>a[i];
    }
}
void XepTang(double a[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>=a[j])
            {
                double tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}
int TongChan(double a[], int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        if ((int)a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    return sum;
}
void Xuat(double a[], int n)
{
    cout << "\nMang vua nhap la: ";
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
void Max(double a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (i=n-2)
            cout << "\nGia tri lon nhat cua mang la: " << a[i];
        if (i=n-1)
        cout << "\nGia tri lon thu hai cua mang la: " << a[i];
    }
}
void CheckD(double a[], int n)
{
    for (int i=0; i<n-2; i++)
    {
        if (a[i]>0 && a[i+1]>0 && a[i+2]>0)
            cout << "\nMang co 3 so duong len tiep";
        else cout << "\nMang khong co 3 so duong lien tiep";
    }
}
void Xoa(double a[], int &n, int vt)
{
    for (int i=vt; i<=n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}
void Xoa5(double a[], int &n)
{
    for (int i=0; i<n; i++)
    {
        if(a[i]==5)
        {
            Xoa(a,n,a[i+1]);
        }
    }
}
int main()
{
    double a[100];
    int n;
    int vt;
    cout << "\nNhap vao so luong phan tu n: ";
    cin>>n;
    Nhap(a,n);
    //XepTang(a,n);
    Xuat(a,n);
    cout << "\nNhap vao vi tri xoa: ";
    cin>>vt;
    Xoa(a,n,vt);
    Xuat(a,n);
    Xoa5(a,n);
    Xuat(a,n);
    cout << "\nTong phan tu chan la: " << TongChan(a,n);
    Max(a,n);
    CheckD(a,n);

}
