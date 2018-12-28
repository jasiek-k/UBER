//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_REPOSITORY_H
#define OOPPROJECT_REPOSITORY_H

#include <list>
#include <string>

using namespace std;
template <class  T>
class Repository {
protected:
list<T> lista;
public:
    Repository();
virtual void add(T t)=0;
virtual bool remove(T t)=0;
virtual list<T> getAll()=0;
virtual string showInfo()=0;
virtual string showInfo(T t)=0;
virtual ~Repository();
};


#endif //OOPPROJECT_REPOSITORY_H
