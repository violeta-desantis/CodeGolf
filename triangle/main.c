#define p printf
main(c,v)char**v;{c=*v[1]-48;int n=0;for(;++n<c;)p("%*s/%*s\\\n",c-n,"",2*n-2,"");p("/");for(n=2*c-2;n--;)p("_");p("\\\n");}