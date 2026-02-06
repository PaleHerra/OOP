#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "notif konst" << endl;
}

void Notifikaattori::lisaa(Seuraaja * lisSeuraajaPtr)
{
    cout << "lisaa seuraaja" << endl;
    if(lisSeuraajaPtr == nullptr) return;
    if(seuraajat == nullptr)
    {
        seuraajat = lisSeuraajaPtr;
        return;
    }
    lisSeuraajaPtr->next = seuraajat;
    seuraajat = lisSeuraajaPtr;
}

void Notifikaattori::poista(Seuraaja * poistSeuraajaPtr)
{
    cout << "poista seurj" << endl;
    if(poistSeuraajaPtr == nullptr) return;
    if(seuraajat == nullptr) return;
    if(seuraajat == poistSeuraajaPtr)
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* seurTempNext = seuraajat->next;
    Seuraaja* seurTempPrev = seuraajat;
    while(seurTempNext -> next != nullptr)
    {
        if(seurTempNext == poistSeuraajaPtr)
        {
            seurTempPrev->next = seurTempNext;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext ->next;
    }
    if(seurTempNext == poistSeuraajaPtr)
    {
        seurTempPrev->next = nullptr;
    }
}

void Notifikaattori::tulosta()
{
    cout << "notif" << endl;
    if(seuraajat == nullptr)
    {
        cout << "Ei seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout <<  seurTempNext -> getNimi() << endl;
        seurTempNext = seurTempNext -> next;
    }
    cout <<  seurTempNext -> getNimi() << endl;
}

void Notifikaattori::postita(string viesti)
{
    cout << "post" << endl;
    if(seuraajat == nullptr)
    {
        cout << "Ei seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext -> next;
    }
    seurTempNext->paivitys(viesti);
}
