

    int pascalTriangleI(int r, int c) {


        if(c==0||c==r)return 1;
        return pascalTriangleI(r-1,c)+pascalTriangleI(r-1,c-1);
    }
