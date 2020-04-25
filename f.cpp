#include"f.h"
void Add(Derevo **u, int &a)
{
   Derevo *p = *u;
   if(p == 0)
   {
      p = new Derevo;
      p->x = a;
      p->left = 0;
      p->right = 0;
      *u = p;
      cout<<"Введите вес элемента "<<p->x<<" ";
      cin>>p->ves;
      cout<<endl;

      return;
   }
   Derevo *p1;
   bool priznak = false;
   while(p && !priznak)
   {
      p1 = p;
      if(a==p->x)
         priznak = true;
      else
         if(a< p->x)
            p = p->left;
         else
            if (a>p->x)
            p = p->right;
   }
   if(priznak) return;
   Derevo *pnew = new Derevo;
   pnew->x = a;
   pnew->left = 0;
   pnew->right = 0;
   if(a< p1->x)
      p1->left = pnew;
   else
    if (a>p1->x)
   p1->right = pnew;
   cout<<"Введите вес элемента "<<pnew->x<<" ";
      cin>> pnew->ves;
      cout<<endl;
}


Derevo* ves2(Derevo *root,int&d) {
 if(root!=NULL){
if ((root->x % 2==0)) {
        if((root->ves!=0)&&d!=0) d=1;
if(root->ves==0) {d=0; }
    }
         if (!root->left && !root->right && (root->x % 2==1)&&d!=0&&d!=1)
             {
                 d=2;

             }
    ves2(root->left,d);
    ves2(root->right,d);
 }


    }
Derevo* Find(Derevo *u, int &a, Derevo **prev)
{
   Derevo *p = u;
   *prev = 0;
   if(p == 0)
      return 0;
   while(p)
   {
      if(p->x == a)
         return p;
      if(p->x > a)
      {
         *prev = p;
         p = p->left;
      }
      else
      {
         *prev = p;
         p = p->right;
      }
   }

   *prev = 0;
   return 0;
}
void Delete(Derevo **u, int &a)
{
Derevo*p0 = 0;
   Derevo *p = Find(*u, a, &p0);
   if(p == 0)
      return;

   if(p0 == 0 && (p->left == 0 || p->right == 0))
   {
      if(p->left == 0 && p->right == 0)
         *u = 0;
      else if(p->left == 0)
         *u = p->right;
      else
         *u = p->left;
      delete p;
      return;
   }
   if(p->left == 0 && p->right == 0)
   {
      if(p0)
      {
         if(p0->left == p)
            p0->left = 0;
         else
            p0->right = 0;
      }
      else
         u = 0;
      delete p;
      return;
   }


   if(p->left != 0 && p->right == 0)
   {
      if(p0->left == p)
         p0->left = p->left;
      else
         p0->right = p->left;
      delete p;
      return;
   }

   if(p->left == 0 && p->right != 0)
   {
      if(p0->left == p)
         p0->left = p->right;
      else
         p0->right = p->right;
      delete p;
      return;
   }


   if(p->left != 0 && p->right != 0)
   {
      p0 = p;
      Derevo *t = p->left;
      while(t->right)
      {
         p0 = t;
         t = t->right;
      }
      p->x = t->x;
      if(p0->left == t)
         p0->left = 0;
      else
         p0->right = 0;
      delete t;
   }
}


void show(Derevo *t, int n) {
  if (t != NULL) {
    show(t->left, n + 1);
    cout << setw(n * 3)<< t->x <<" ("<<t->ves<<")"<< endl;
    show(t->right, n + 1);
  }
}
