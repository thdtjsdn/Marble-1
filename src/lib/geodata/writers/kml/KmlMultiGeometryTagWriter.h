//
// This file is part of the Marble Virtual Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2010      Dennis Nienhüser <earthwings@gentoo.org>
//

#ifndef MARBLE_KMLMULTIGEOMETRYTAGWRITER_H
#define MARBLE_KMLMULTIGEOMETRYTAGWRITER_H

#include "GeoTagWriter.h"

namespace Marble
{

class KmlMultiGeometryTagWriter : public GeoTagWriter
{
public:
    virtual bool write( const GeoNode *node, GeoWriter& writer ) const;
};

}

#endif
