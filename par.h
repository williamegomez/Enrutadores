#ifndef PAR_H
#define PAR_H
#include "enrutador.h"

class Par
{
private:
    Enrutador nodo;
    int costo;
public:
    Par();
    Par(Enrutador node, int cost);

    Enrutador getNodo() const;
    void setNodo(const Enrutador &value);
    int getCosto() const;
    void setCosto(int value);
};

#endif // PAR_H
