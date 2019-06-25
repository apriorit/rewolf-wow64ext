/**
 *
 * WOW64Ext Library
 *
 * Copyright (c) 2014 ReWolf
 * http://blog.rewolf.pl/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "wow64ext.h"

int _wcsicmp(const wchar_t *string1, const wchar_t *string2)
{
    wchar_t c1;
    wchar_t c2;
    int i = 0;
    do
    {
        c1 = string1[i];
        if (c1 >= 'A' && c1 <= 'Z')
            c1 += 0x20;

        c2 = string2[i];
        if (c2 >= 'A' && c2 <= 'Z')
            c2 += 0x20;

        i++;
    } while (c1 && c1 == c2);
    return c1 - c2;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    return TRUE;
}
