void show(int *map,int rows,int cols)   //打印地图
{   
    int i,j;
    for(i = 0;i<rows;i++)
    {
        for(j = 0;j<cols;j++)
        {
            printf("%d ",*(map+i*cols+j));

        }
        putchar('\n');
    }
}
