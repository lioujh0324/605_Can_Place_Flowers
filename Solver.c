

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n)
{
    int count=0,flower=0;
    bool start=1;
    if(!n)
        return 1;
    while(flowerbedSize)
    {
        if(*flowerbed==1)
        {
            start=0;
            count=0;
        }
        else if(start==1)
        {
            count++;
            if(count==2)
            {
                flower++;
                count=0;
                if(flower==n)
                    return 1;
            }
        }
        else
        {
            start=1;
        }
        flowerbed++;
        flowerbedSize--;
    }
    if(count==1)
    {
        flower++;
        if(flower==n)
            return 1;
    }
    return 0;
}
