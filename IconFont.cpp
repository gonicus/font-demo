#include <QFontDatabase>
#include <QHash>
#include "IconFont.h"

IconFontResolver::IconFontResolver(QObject* parent) : QObject(parent) {
    static bool initialized = false;

    if (!initialized) {
        initialized = true;
        QFontDatabase::addApplicationFont(":/IconFont.ttf");
    }
}

quint16 IconFontResolver::indexOfPath(const QString& iconPath) {
    static QHash<const QString, quint16> lookup_table {
               { "tired", 61000 },
               { "thumbs-down", 61001 },
               { "gem", 61002 },
               { "file-video", 61003 },
               { "sticky-note", 61004 },
               { "dizzy", 61005 },
               { "arrow-alt-circle-right", 61006 },
               { "lightbulb", 61007 },
               { "heart", 61008 },
               { "paper-plane", 61009 },
               { "window-maximize", 61010 },
               { "file-alt", 61011 },
               { "hand-lizard", 61012 },
               { "trash-alt", 61013 },
               { "hand-peace", 61014 },
               { "comments", 61015 },
               { "calendar-plus", 61016 },
               { "calendar-check", 61017 },
               { "hand-rock", 61018 },
               { "map", 61019 },
               { "font-awesome-logo-full", 61020 },
               { "folder-open", 61021 },
               { "address-book", 61022 },
               { "eye", 61023 },
               { "meh", 61024 },
               { "kiss-beam", 61025 },
               { "bell", 61026 },
               { "play-circle", 61027 },
               { "arrow-alt-circle-left", 61028 },
               { "compass", 61029 },
               { "newspaper", 61030 },
               { "comment-alt", 61031 },
               { "keyboard", 61032 },
               { "surprise", 61033 },
               { "building", 61034 },
               { "calendar-minus", 61035 },
               { "laugh-wink", 61036 },
               { "grin-alt", 61037 },
               { "copy", 61038 },
               { "smile", 61039 },
               { "angry", 61040 },
               { "clipboard", 61041 },
               { "grin-beam-sweat", 61042 },
               { "caret-square-right", 61043 },
               { "sun", 61044 },
               { "file-pdf", 61045 },
               { "chart-bar", 61046 },
               { "plus-square", 61047 },
               { "stop-circle", 61048 },
               { "minus-square", 61049 },
               { "clock", 61050 },
               { "grin-tongue", 61051 },
               { "pause-circle", 61052 },
               { "frown-open", 61053 },
               { "folder", 61054 },
               { "window-close", 61055 },
               { "kiss", 61056 },
               { "eye-slash", 61057 },
               { "star-half", 61058 },
               { "envelope", 61059 },
               { "check-square", 61060 },
               { "times-circle", 61061 },
               { "arrow-alt-circle-down", 61062 },
               { "user-circle", 61063 },
               { "hourglass", 61064 },
               { "square", 61065 },
               { "window-restore", 61066 },
               { "id-badge", 61067 },
               { "grimace", 61068 },
               { "moon", 61069 },
               { "registered", 61070 },
               { "smile-wink", 61071 },
               { "sad-cry", 61072 },
               { "comment-dots", 61073 },
               { "file-archive", 61074 },
               { "closed-captioning", 61075 },
               { "file", 61076 },
               { "question-circle", 61077 },
               { "envelope-open", 61078 },
               { "kiss-wink-heart", 61079 },
               { "credit-card", 61080 },
               { "meh-rolling-eyes", 61081 },
               { "file-powerpoint", 61082 },
               { "clone", 61083 },
               { "hospital", 61084 },
               { "laugh-squint", 61085 },
               { "dot-circle", 61086 },
               { "grin-tongue-squint", 61087 },
               { "circle", 61088 },
               { "hand-paper", 61089 },
               { "lemon", 61090 },
               { "grin-hearts", 61091 },
               { "hand-point-right", 61092 },
               { "images", 61093 },
               { "flushed", 61094 },
               { "thumbs-up", 61095 },
               { "hand-point-up", 61096 },
               { "snowflake", 61097 },
               { "file-excel", 61098 },
               { "image", 61099 },
               { "hdd", 61100 },
               { "star", 61101 },
               { "address-card", 61102 },
               { "file-word", 61103 },
               { "caret-square-up", 61104 },
               { "hand-scissors", 61105 },
               { "grin-squint-tears", 61106 },
               { "grin", 61107 },
               { "check-circle", 61108 },
               { "laugh", 61109 },
               { "hand-spock", 61110 },
               { "arrow-alt-circle-up", 61111 },
               { "grin-stars", 61112 },
               { "laugh-beam", 61113 },
               { "grin-squint", 61114 },
               { "file-audio", 61115 },
               { "flag", 61116 },
               { "grin-wink", 61117 },
               { "caret-square-down", 61118 },
               { "calendar-alt", 61119 },
               { "calendar-times", 61120 },
               { "caret-square-left", 61121 },
               { "list-alt", 61122 },
               { "user", 61123 },
               { "sad-tear", 61124 },
               { "bookmark", 61125 },
               { "id-card", 61126 },
               { "save", 61127 },
               { "hand-point-left", 61128 },
               { "object-ungroup", 61129 },
               { "edit", 61130 },
               { "life-ring", 61131 },
               { "futbol", 61132 },
               { "hand-point-down", 61133 },
               { "grin-tongue-wink", 61134 },
               { "object-group", 61135 },
               { "grin-tears", 61136 },
               { "money-bill-alt", 61137 },
               { "window-minimize", 61138 },
               { "handshake", 61139 },
               { "hand-pointer", 61140 },
               { "comment", 61141 },
               { "grin-beam", 61142 },
               { "file-image", 61143 },
               { "smile-beam", 61144 },
               { "share-square", 61145 },
               { "frown", 61146 },
               { "bell-slash", 61147 },
               { "copyright", 61148 },
               { "meh-blank", 61149 },
               { "file-code", 61150 },
               { "calendar", 61151 },
    };

    return lookup_table.value(iconPath, 0);
}
