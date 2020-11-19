/*
    SPDX-FileCopyrightText: 2020-2020 Gustavo Carneiro <gcarneiroa@hotmail.com>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#ifndef COLORFILTERHOTSPOT_H
#define COLORFILTERHOTSPOT_H

#include "RegExpFilterHotspot.h"

#include <QPoint>
#include <QPointer>

class QAction;

namespace Konsole
{
    class ColorFilterHotSpot : public RegExpFilterHotSpot
    {
    public:
        ColorFilterHotSpot(int startLine, int startColumn, int endLine, int endColumn, const QStringList &capturedTexts, const QString &colorName);
        ~ColorFilterHotSpot() = default;

        void mouseEnterEvent(TerminalDisplay *td, QMouseEvent *ev) override;
        void mouseLeaveEvent(TerminalDisplay *td, QMouseEvent *ev) override;
    
    private:
        void tooltipRequested();

        QString _colorName;
        QPoint _toolPos;
        static bool _canGenerateTooltip;
    };
}

#endif
