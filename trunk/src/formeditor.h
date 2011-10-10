// HEXplorer is an Asap and HEX file editor
// Copyright (C) 2011  <Christophe Ho�l>
//
// This file is part of HEXplorer.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// please contact the author at : christophe.hoel@gmail.com

#ifndef FORMEDITOR_H
#define FORMEDITOR_H

#include <QtGui/QWidget>

namespace Ui {
    class FormEditor;
}

class FormEditor : public QWidget {
    Q_OBJECT
public:
    FormEditor(QWidget *parent = 0);
    ~FormEditor();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::FormEditor *m_ui;
};

#endif // FORMEDITOR_H