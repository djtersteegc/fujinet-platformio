#ifndef FILE_PRINTER_H
#define FILE_PRINTER_H
//#include <Arduino.h>

#include "printer_emulator.h"

class filePrinter : public printer_emu
{
public:
    filePrinter(paper_t ty = RAW) : printer_emu{ty} {};
    virtual void initPrinter(FS *filesystem);
    virtual void pageEject();
    virtual bool process(byte n);

    virtual const char * modelname() { return "file printer"; };

    ~filePrinter();

    void setPaper(paper_t ty) { paperType = ty; };
};

#endif