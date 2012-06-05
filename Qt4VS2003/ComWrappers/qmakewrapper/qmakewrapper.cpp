/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt VS Add-in.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia. For licensing terms and
** conditions see http://qt.digia.com/licensing. For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights. These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmakewrapper.h"
#include "qmakedataprovider.h"

QMakeWrapper::QMakeWrapper(QWidget *parent)
    : QWidget(parent)
{
    m_qmakeDataProvider = new QMakeDataProvider();
}

bool QMakeWrapper::readFile(const QString &fileName)
{
    return m_qmakeDataProvider->readFile(fileName);
}

void QMakeWrapper::setQtDir(const QString& qtdir)
{
    m_qmakeDataProvider->setQtDir(qtdir);
}

QStringList QMakeWrapper::sourceFiles() const
{
    return m_qmakeDataProvider->getSourceFiles();
}

QStringList QMakeWrapper::headerFiles() const
{
    return m_qmakeDataProvider->getHeaderFiles();
}

QStringList QMakeWrapper::formFiles() const
{
    return m_qmakeDataProvider->getFormFiles();
}

QStringList QMakeWrapper::resourceFiles() const
{
    return m_qmakeDataProvider->getResourceFiles();
}

bool QMakeWrapper::isValid() const
{
    return m_qmakeDataProvider->isValid();
}

bool QMakeWrapper::isFlat() const
{
    return m_qmakeDataProvider->isFlat();
}

