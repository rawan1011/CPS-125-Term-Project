// opening and readinf files

FILE *pt;
pt = fopen("all_year_glsea_avg_s_C.csv", "r");

if(fopen



//setting array and array size, sortinf in ascending order

void sort(int array, int size)
{
for(in i = 0; i < size; i++)
{
for(int j = 0; j < size; j+=)
{
if(array[j] > array[j+1])
{
int temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
}
}
}
}
int main ()
{
int array[];
int size = sizeof(array)/sizeof(array[0]);
