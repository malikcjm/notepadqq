/*
 *
 * This file is part of the Notepadqq text editor.
 *
 * Copyright(c) 2010 Notepadqq team.
 * http://notepadqq.sourceforge.net/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef QTABWIDGETQQ_H
#define QTABWIDGETQQ_H

#include <QTabWidget>

class QTabWidgetqq : public QTabWidget
{
    Q_OBJECT
public:
    explicit QTabWidgetqq(QWidget *parent = 0);
    int getTabIndexAt(const QPoint &pos);

    void addNewDocument();
signals:

public slots:

private:
    int _showAllChars;
    int addEditorTab(bool setFocus, QString title);

};

#endif // QTABWIDGETQQ_H
