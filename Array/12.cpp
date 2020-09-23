//Minimum distance between the array 

int mindist(int arr[] , int x , int y)
{
    int i=0 ;
    int min_dist = INT_MAX:
    int prev;
    for(i=0 ; i< n ; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            prev=i;
            break;
        }
    }

    for( ; i<n ; i++)
    {
        if(arr[i]==x|| arr[i]==y)
        {
            if(arr[prev]!=arr[i] && (i-prev) <min_dist)
            {
                min_dist = i-prev;
                prev=i;
            }
            else{
                prev=i;
            }
        }
    }
    return min_dist;
}