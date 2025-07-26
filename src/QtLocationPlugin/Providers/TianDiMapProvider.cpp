/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "TianDiMapProvider.h"

QString TianDiMapProvider::_getURL(int x, int y, int zoom) const
{
    //"https://t%1.tianditu.gov.cn/DataServer?tk=%2&T=%3&x=%4&y=%5&l=%6"
    return _mapUrl
        .arg(_getServerNum(x, y, 8))
        .arg(_apiKey)
        .arg(_mapType)
        .arg(x)
        .arg(y)
        .arg(zoom)
        ;
}
