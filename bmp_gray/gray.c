#include<stdio.h>
#define z(a,i)fread(a,i,1,s),fwrite(a,i,1,d);
main(c,v)char**v;{FILE*s=fopen(v[1],"rb"),*d=fopen("g.bmp","wb");unsigned char y[28];int w,h;z(y,18)z(&w,4)z(&h,4)z(y,28)int b=((24*w+31)/32)*4;for(int j=0;j<h;j++){for(c=0;c<w;c++)fread(y,3,1,s),y[0]=y[1]=y[2]=(y[0]+y[1]+y[2])/3,fwrite(y,3,1,d);if(b-c*3>0)z(y,b-c*3)}}