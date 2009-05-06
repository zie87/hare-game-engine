//***************************************************************
//  File:    UVRCWizard.h
//  Data:    05/06/2009
//  Author:  littlesome (littlesome@live.cn)
//-------------------------------------------------------------
//  
//-------------------------------------------------------------
//  This file is part of Hare2D Game Engine.
//  Copyright (C) All Rights Reserved
//***************************************************************
// 
//***************************************************************
#ifndef UVRCWIZARD_H
#define UVRCWIZARD_H

class UVRCWizard : public WizardPlugin
{
public:
    UVRCWizard();

    virtual wxString getFolder() const;
    virtual const wxBitmap& getBitmap(int index) const;
    virtual wxString getTitle(int index) const;
    virtual wxString getDesc(int index) const;
    virtual int getCount() const;
    virtual Object* wizard(int index);

private:
    wxBitmap bitmap;
};

#endif