/*  This file was part of the KDE libraries

    SPDX-FileCopyrightText: 2019 Tomaz Canabrava <tcanabrava@kde.org>
    SPDX-FileCopyrightText: 2019 Martin Sandsmark <martin.sandsmark@kde.org>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "IKonsolePlugin.h"

K_PLUGIN_FACTORY(KonsolePluginFactory, registerPlugin<Konsole::IKonsolePlugin>(QStringLiteral("konsoleplugin"));)

namespace Konsole {
struct IKonsolePlugin::Private {

};

IKonsolePlugin::IKonsolePlugin(QObject *parent, const QVariantList &args) :
    d(std::make_unique<IKonsolePlugin::Private>())
{

}

IKonsolePlugin::~IKonsolePlugin() = default;

Konsole::TerminalDisplay * Konsole::IKonsolePlugin::currentTerminalDisplay()
{
    return nullptr;
}

}

#include "IKonsolePlugin.moc"