#!/bin/sh
/usr/bin/doxygen /home/lzm/Wayland/weston/builddir/doc/sphinx/doxygen.ini && /home/lzm/.local/bin/sphinx-build -E -W -q -j auto -d /home/lzm/Wayland/weston/builddir/doc/sphinx/doctrees /home/lzm/Wayland/weston/builddir/doc/sphinx /home/lzm/Wayland/weston/builddir/doc/sphinx/doc
