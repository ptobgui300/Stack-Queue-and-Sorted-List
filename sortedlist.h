#ifndef SORTEDLIST_H
#define SORTEDLIST_H


#include"../../../includes/list_class/list.h"


template<typename T>
class SortedList
{
public:
    SortedList();
    void Insert(T item);
    void PrintSortedList(const SortedList<T> &MyList);

    template<typename TT>
    friend ostream & operator <<(ostream & outs, const SortedList<TT> & PrintMe);

private:
    List<T> Mine;

};
template<typename T>
SortedList<T>::SortedList()
{

}
template<typename TT>
ostream & operator <<(ostream & outs, const SortedList<TT> & PrintMe ){
    SortedList<TT> temp=PrintMe;
    temp.Mine.PrintL(temp.Mine);
    return outs;
}
template<typename T>
void SortedList<T> ::Insert(T item){

    Mine.insert_sorted( item);

}
template<typename T>
void SortedList<T>::PrintSortedList(const SortedList<T> & MyList ){

    SortedList<T> temp=MyList;
    temp.Mine.PrintL(temp.Mine);
}

#endif // SORTEDLIST_H
