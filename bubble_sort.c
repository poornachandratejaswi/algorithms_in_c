void bubble_sort( void* array, const int numberOfItems )
{
int firstItem = 0;
int lastItem = numberOfItems - 1;
for( int pass = 0; pass < numberOfItems; ++pass )
{
for( int i = firstItem; i 0 )
swap( array, i, i+1 );
}
--lastItem;
}
}
