"Ddd*appDefaultsVersion: 3.3.12",
"Ddd*debugger: gdb",
"Ddd*autoDebugger: on",
"Ddd*debuggerCommand:",
"Ddd*Separate: off",
"Ddd*openDebuggerConsole: on",
"Ddd*openSourceWindow: on",
"Ddd*openDataWindow: off",
"Ddd*separateExecWindow: off",
"Ddd*groupIconify: off",
"Ddd*uniconifyWhenReady: on",
"Ddd*globalTabCompletion: on",
"Ddd*cutCopyPasteBindings: Motif",
"Ddd*selectAllBindings: KDE",
"Ddd*lineBufferedConsole: on",
"Ddd*consoleHasFocus: on",
"Ddd*openSelection: off",
"Ddd*termCommand: xterm -bg \'grey96\' -fg \'black\' \
-cr \'DarkGreen\' -fn \'@FONT@\' -title \'DDD: Execution Window\' -e /bin/sh -c",
"Ddd*fontSelectCommand: xfontsel -bg \'grey\' -fg \'black\' -fn \'@FONT@\' \
-title \'DDD: @TYPE@ selector\' -print",
"Ddd*termType: xterm",
"Ddd*useTTYCommand: off",
"Ddd*blockTTYInput: auto",
"Ddd*bufferGDBOutput: auto",
"Ddd*questionTimeout: 10",
"Ddd*positionTimeout: 500",
"Ddd*displayTimeout: 2000",
"Ddd*stopAndContinue: on",
"Ddd*runInterruptDelay: 2000",
"Ddd*contInterruptDelay: 200",
"Ddd*rshCommand: ",
"Ddd*rHostInitCommands: stty -echo -onlcr",
"Ddd*psCommand: ps x 2> /dev/null || ps -ef 2> /dev/null || ps",
"Ddd*printCommand: lp -c",
"Ddd*paperSize: 210mm x 297mm",
"Ddd*editCommand: \
${XEDITOR-false} +@LINE@ @FILE@ \
|| xterm -e ${EDITOR-vi} +@LINE@ @FILE@",
"Ddd*getCoreCommand: gcore -o @FILE@ @PID@",
"Ddd*listExecCommand: \
\tfile @MASK@ | grep \'.*:.*exec.*\' | grep -v  \'.*:.*script.*\' \
\t| cut -d: -f1 | grep -v \'.*\\\\.o$\'",
"Ddd*listSourceCommand: \
\tfile @MASK@ | grep \'.*:.*text.*\' | cut -d: -f1",
"Ddd*listCoreCommand: \
\tfile @MASK@ | grep \'.*:.*core.*\' | cut -d: -f1",
"Ddd*listDirCommand: \
\tfile @MASK@ | grep \'.*:.*directory.*\' | cut -d: -f1",
"Ddd*uncompressCommand: gzip -d -c",
"Ddd*wwwPage: http://www.gnu.org/software/ddd/",
"Ddd*wwwCommand: \
   firefox -remote \'openURL(@URL@)\' \
|| mozilla -remote \'openURL(@URL@)\' \
|| opera -remote \'openURL(@URL@)\' \
|| ${WWWBROWSER-false} \'@URL@\' \
|| konqueror \'openURL(@URL@)\' \
|| galeon \'openURL(@URL@)\' \
|| skipstone \'openURL(@URL@)\' \
|| light \'openURL(@URL@)\' \
|| netscape -remote \'openURL(@URL@)\' \
|| mozilla \'@URL@\' \
|| kfmbrowser \'@URL@\' \
|| netscape \'@URL@\' \
|| gnudoit \'(w3-fetch \\042@URL@\\042)\' \
|| mosaic \'@URL@\' \
|| Mosaic \'@URL@\' \
|| xterm -e lynx \'@URL@\'",
"Ddd*plotCommand: \
gnuplot -bg \'grey96\' -font \'@FONT@\' -name \'@NAME@\' \
-geometry +5000+5000",
"Ddd*plotWindow: Gnuplot",
"Ddd*plotInitCommands: \
set parametric\\n\
set urange \\1330:1\\135\\n\
set vrange \\1330:1\\135\\n\
set trange \\1330:1\\135\\n",
"Ddd*plot2dSettings: set noborder",
"Ddd*plot3dSettings: set border",
"Ddd*plotTermType: xlib",
"Ddd*plotWindowDelay: 2000",
"Ddd*commonToolBar: on",
"Ddd*toolbarsAtBottom: off",
"Ddd*buttonImages: on",
"Ddd*buttonCaptions: on",
"Ddd*buttonImageGeometry: 21x17+4+0",
"Ddd*buttonCaptionGeometry: 29x7+0-0",
"Ddd*FlatButtons: on",
"Ddd*buttonColorKey: g",
"Ddd*activeButtonColorKey: c",
"Ddd*verifyButtons: on",
"Ddd*consoleButtons:",
"Ddd*sourceButtons:",
"Ddd*dataButtons:",
"Ddd*toolButtons: \
run\\nbreak^C\\nstep\\nstepi\\nnext\\nnexti\\nuntil\\nfinish\\ncont\\n\\kill\\n\
up\\ndown\\nUndo\\nRedo\\nEdit\\nMake",
"Ddd*break.labelString: Interrupt",
"Ddd*stickyTool: on",
"Ddd*decorateTool: auto",
"Ddd*autoRaiseTool: on",
"Ddd*commandToolBar: off",
"Ddd*toolRightOffset: 8",
"Ddd*toolTopOffset: 8",
"Ddd*autoRaiseMenu: on",
"Ddd*autoRaiseMenuDelay: 100",
"Ddd*gdbDisplayShortcuts: \
/t ()\t// Convert to Bin\\n\
/d ()\t// Convert to Dec\\n\
/x ()\t// Convert to Hex\\n\
/o ()\t// Convert to Oct",
"Ddd*dbxDisplayShortcuts: ",
"Ddd*xdbDisplayShortcuts:",
"Ddd*jdbDisplayShortcuts:",
"Ddd*pydbDisplayShortcuts: \
/t ()\t// Convert to Bin\\n\
/d ()\t// Convert to Dec\\n\
/x ()\t// Convert to Hex\\n\
/o ()\t// Convert to Oct",
"Ddd*perlDisplayShortcuts: \
sprintf(\"%#x\", ())\t// Convert to Hex\\n\
sprintf(\"%#o\", ())\t// Convert to Oct",
"Ddd*tabWidth: 8",
"Ddd*indentSource: 0",
"Ddd*indentCode: 4",
"Ddd*lineNumberWidth: 5",
"Ddd*linesAboveCursor: 2",
"Ddd*linesBelowCursor: 3",
"Ddd*gdbInitCommands: \
set prompt (gdb) \\n\
set height 0\\n\
set width 0\\n\
set annotate 1\\n\
 set verbose off\\n",
"Ddd*gdbSettings: \
set print asm-demangle on\\n",
"Ddd*dbxInitCommands: \
sh stty -echo -onlcr\\n\
set $page = 1\\n",
"Ddd*dbxSettings:",
"Ddd*xdbInitCommands: \
sm\\n\
def run r\\n\
def cont c\\n\
def next S\\n\
def step s\\n\
def quit q\\n\
def finish { bu \\\\1t ; c ; L }\\n",
"Ddd*bashInitCommands: \
  set prompt bashdb$_Dbg_less$_Dbg_greater$_Dbg_space \\n",
"Ddd*bashSettings:",
"Ddd*dbgInitCommands:",
"Ddd*dbgSettings:",
"Ddd*jdbInitCommands:",
"Ddd*jdbSettings:",
"Ddd*makeInitCommands:",
"Ddd*makeSettings:",
"Ddd*perlInitCommands: \
o CommandSet=580\\n",
"Ddd*perlSettings:",
"Ddd*pydbInitCommands:",
"Ddd*pydbSettings:",
"Ddd*xdbSettings:",
"Ddd*sourceInitCommands: on",
"Ddd*initSymbols: \
main\\n\
MAIN\\n\
main_\\n\
MAIN_\\n\
main__\\n\
MAIN__\\n\
_main\\n\
_MAIN\\n\
__main\\n\
__MAIN\\n\
my_main\\n\
the_main\\n\
vxworks_main\\n\
main_vxworks",
"Ddd*autoCommands: on",
"Ddd*autoCommandPrefix:",
"Ddd*detectAliases: on",
"Ddd*typedAliases: on",
"Ddd*deleteAliasDisplays: on",
"Ddd*align2dArrays: on",
"Ddd*bumpDisplays: on",
"Ddd*expandRepeatedValues: off",
"Ddd*hideInactiveDisplays: on",
"Ddd*showBaseDisplayTitles: on",
"Ddd*showDependentDisplayTitles: off",
"Ddd*vslLibrary: builtin",
"Ddd*vslPath: user_themes:ddd_themes:.",
"Ddd*pannedGraphEditor: off",
"Ddd*graph_edit.moveDelta: 4",
"Ddd*graph_edit.opaqueMove: off",
"Ddd*graph_edit.rubberEdges: on",
"Ddd*graph_edit.rubberArrows: on",
"Ddd*graph_edit.rubberAnnotations: off",
"Ddd*graph_edit.showGrid: on",
"Ddd*graph_edit.snapToGrid: on",
"Ddd*graph_edit.showHints: on",
"Ddd*graph_edit.showAnnotations: on",
"Ddd*graph_edit.layoutMode: regular",
"Ddd*graph_edit.autoLayout: off",
"Ddd*graph_edit.GridSize: 16",
"Ddd*findWordsOnly: on",
"Ddd*findCaseSensitive: on",
"Ddd*disassemble: off",
"Ddd*maxDisassemble: 256",
"Ddd*displayGlyphs: on",
"Ddd*maxGlyphs: 10",
"Ddd*glyphUpdateDelay: 5",
"Ddd*displayLineNumbers: off",
"Ddd*cacheSourceFiles: on",
"Ddd*cacheMachineCode: on",
"Ddd*useSourcePath: off",
"Ddd*saveHistoryOnExit: on",
"Ddd*saveOptionsOnExit: on",
"Ddd*allRegisters: off",
"Ddd*buttonTips: on",
"Ddd*valueTips: on",
"Ddd*buttonDocs: on",
"Ddd*valueDocs: on",
"Ddd*buttonTipDelay: 750",
"Ddd*valueTipDelay: 750",
"Ddd*buttonDocDelay: 100",
"Ddd*valueDocDelay: 100",
"Ddd*clearDocDelay: 1000",
"Ddd*clearTipDelay: 50",
"Ddd*pushMenuPopupTime: 400",
"Ddd*popdownHistorySize: 0",
"Ddd*sortPopdownHistory: on",
"Ddd*statusAtBottom: on",
"Ddd*statusHistorySize: 20",
"Ddd*blinkWhileBusy: on",
"Ddd*busyBlinkRate: 500",
"Ddd*maxDisplayTitleLength: 20",
"Ddd*maxPopupExprLength: 20",
"Ddd*maxValueTipLength: 60",
"Ddd*maxValueDocLength: 80",
"Ddd*maxUndoDepth: -1",
"Ddd*maxUndoSize: 2000000",
"Ddd*keyboardFocusPolicy: POINTER",
"Ddd*suppressWarnings: off",
"Ddd*warnIfLocked: off",
"Ddd*checkOptions: 30",
"Ddd*checkGrabs: on",
"Ddd*checkGrabDelay: 5000",
"Ddd*grabActionDelay: 10000",
"Ddd*grabAction: cont",
"Ddd*defaultFont: helvetica-medium",
"Ddd*variableWidthFont: helvetica-medium",
"Ddd*fixedWidthFont: lucidatypewriter-medium",
"Ddd*dataFont: lucidatypewriter-medium",
"Ddd*FontSize: 120",
"Ddd*highlightThickness: 1",
"Ddd*graph_edit.height: 100",
"Ddd*source_text_w.columns: 80",
"Ddd*source_text_w.rows: 31",
"Ddd*code_text_w.columns: 80",
"Ddd*code_text_w.rows: 4",
"Ddd*gdb_w.columns: 80",
"Ddd*gdb_w.rows: 5",
"Ddd*menubar*tearOffModel: XmTEAR_OFF_ENABLED",
"Ddd*splashScreen: on",
"Ddd*splashScreenColorKey: c",
"Ddd*colorWMIcons: on",
"Ddd*maxBreakpointNumber: 99",
"Ddd*maxDisplayNumber: 99",
"Ddd*suppressTheme: suppress.vsl",
"Ddd*startupTips: on",
"Ddd*startupTipCount: 1",
"Ddd*enableBtn1Transfer: False",
"Ddd*foreground: black",
"Ddd*background: grey",
"Ddd*XmText.background: grey96",
"Ddd*XmTextField.background: grey96",
"Ddd*GraphEdit.background: grey96",
"Ddd*XmList.background: grey96",
"Ddd*graph_edit_panner.background: grey",
"Ddd*graph_edit_panner.foreground: grey",
"Ddd*graph_edit_panner.shadowColor: black",
"Ddd*break.foreground: red4",
"Ddd*quit.foreground: red4",
"Ddd*send.foreground: red4",
"Ddd*run.foreground: DarkGreen",
"Ddd*run_again.foreground: DarkGreen",
"Ddd*maintenance.foreground: red4",
"Ddd*fatal_dialog*foreground: red4",
"Ddd*terminated_dialog*foreground: red4",
"Ddd*exception_dialog*foreground: red4",
"Ddd*exited_dialog*foreground: red4",
"Ddd*no_debugger_dialog*foreground: red4",
"Ddd*plain_arrow.foreground: DarkGreen",
"Ddd*grey_arrow.foreground: DarkGreen",
"Ddd*past_arrow.foreground: DarkGreen",
"Ddd*signal_arrow.foreground: red4",
"Ddd*plain_stop.foreground: red4",
"Ddd*plain_cond.foreground: red4",
"Ddd*plain_temp.foreground: red4",
"Ddd*grey_stop.foreground: grey50",
"Ddd*grey_cond.foreground: grey50",
"Ddd*grey_temp.foreground: grey50",
"Ddd*drag_arrow.foreground: DarkGreen",
"Ddd*drag_stop.foreground: red4",
"Ddd*drag_cond.foreground: red4",
"Ddd*drag_temp.foreground: red4",
"Ddd*graph_edit.nodeColor: black",
"Ddd*graph_edit.nodePrintColor: black",
"Ddd*graph_edit.edgeColor: blue4",
"Ddd*graph_edit.edgePrintColor: blue4",
"Ddd*graph_edit.selectColor: black",
"Ddd*graph_edit.gridColor: black",
"Ddd*graph_edit.frameColor: grey50",
"Ddd*graph_edit.outlineColor: grey50",
"Ddd*plain_arrow.labelPixmap: plain_arrow",
"Ddd*grey_arrow.labelPixmap: grey_arrow",
"Ddd*past_arrow.labelPixmap: past_arrow",
"Ddd*temp_arrow.labelPixmap: temp_arrow",
"Ddd*signal_arrow.labelPixmap: signal_arrow",
"Ddd*plain_stop.labelPixmap: plain_stop",
"Ddd*plain_cond.labelPixmap: plain_cond",
"Ddd*plain_temp.labelPixmap: plain_temp",
"Ddd*drag_stop.labelPixmap: drag_stop",
"Ddd*drag_cond.labelPixmap: drag_cond",
"Ddd*drag_temp.labelPixmap: drag_temp",
"Ddd*grey_stop.labelPixmap: grey_stop",
"Ddd*grey_cond.labelPixmap: grey_cond",
"Ddd*grey_temp.labelPixmap: grey_temp",
"Ddd*defaultVirtualBindings: \
osfBackSpace: <Key>BackSpace\\n\
osfCancel: <Key>Escape\\n\
osfRight: <Key>Right\\n\
osfLeft: <Key>Left\\n\
osfUp: <Key>Up\\n\
osfHelp: <Key>F1\\n\
osfDown: <Key>Down\\n\
osfPageUp: <Key>Prior\\n\
osfPageDown: <Key>Next\\n\
osfBeginLine: <Key>Home\\n\
osfEndLine: <Key>End\\n",
"Ddd*gdb_w.baseTranslations: #override\\n\
\
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
<Btn3Down>: gdb-popup-menu()\\n\
~Ctrl ~Shift<Btn1Up>: source-set-arg() extend-end()\\n\
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-isearch-prev()\\n\
Ctrl<Key>C: gdb-control(^C)\\n\
Ctrl<Key>D: gdb-delete-or-control(^D)\\n\
~Ctrl ~Shift<Key>Delete: delete-next-character()\\n\
~Shift Ctrl<Key>E: gdb-end-of-line()\\n\
Ctrl<Key>F: gdb-isearch-next()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Ctrl<Key>U: gdb-set-line(\"\")\\n\
Ctrl<Key>V: next-page()\\n\
Meta<Key>V: previous-page()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
Ctrl<Key>Y: unkill()\\n\
Ctrl<Key>backslash: gdb-control(^\\\\)\\n\
Ctrl<Key>R: gdb-isearch-prev()\\n\
Ctrl<Key>S: gdb-isearch-next()\\n\
~Shift<Key>osfPageUp: previous-page()\\n\
~Shift<Key>osfPageDown: next-page()\\n\
~Shift<Key>Prior: previous-page()\\n\
~Shift<Key>Next: next-page()\\n\
Shift<Key>osfPageUp: previous-page(extend)\\n\
Shift<Key>osfPageDown: next-page(extend)\\n\
Shift<Key>Prior: previous-page(extend)\\n\
Shift<Key>Next: next-page(extend)\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n\
~Ctrl ~Shift ~Meta<Key>Escape: gdb-interrupt()\\n\
~Ctrl ~Shift ~Meta<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift ~Meta<Key>osfUp: gdb-previous-history()\\n\
~Ctrl ~Shift ~Meta<Key>osfDown: gdb-next-history()\\n\
~Ctrl ~Shift ~Meta<Key>osfLeft: gdb-backward-character()\\n\
~Ctrl ~Shift ~Meta<Key>osfRight: gdb-forward-character()\\n\
~Ctrl ~Shift ~Meta<Key>osfBeginLine: gdb-beginning-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>osfEndLine: gdb-end-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>osfBeginData: gdb-beginning-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>osfEndData: gdb-end-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>Home: gdb-beginning-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>End: gdb-end-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>R7: gdb-beginning-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>R13: gdb-end-of-line()\\n\
~Ctrl ~Shift ~Meta<Key>Tab: gdb-complete-command() ",
"Ddd*XmText.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift Ctrl<Btn4Down>,<Btn4Up>: previous-page()\\n\
~Ctrl Shift<Btn4Down>,<Btn4Up>: previous-line()\\n\
~Shift ~Ctrl<Btn4Down>,<Btn4Up>: previous-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\\n\
~Shift Ctrl<Btn5Down>,<Btn5Up>: next-page()\\n\
~Ctrl Shift<Btn5Down>,<Btn5Up>: next-line()\\n\
~Shift ~Ctrl<Btn5Down>,<Btn5Up>: next-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\\n \
Ctrl<Key>M: newline()\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Meta<Key>V: previous-page()\\n\
Ctrl<Key>V: next-page()\\n\
~Shift <Key>Prior: previous-page()\\n\
~Shift <Key>Next: next-page()\\n\
Shift<Key>osfPageUp: previous-page(extend)\\n\
Shift<Key>osfPageDown: next-page(extend)\\n\
Shift<Key>Prior: previous-page(extend)\\n\
Shift<Key>Next: next-page(extend)\\n \
~Shift <Key>Tab: gdb-complete-tab(print) ",
"Ddd*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(print) ",
"Ddd*new_breakpoint_dialog*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(break)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*new_watchpoint_dialog*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(print)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*XmFileSelectionBox*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(file)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*print*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(file)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*make_dialog*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(file)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*cd_dialog*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(file)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*XmSelectionBox*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(shell)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*XmDialogShell*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(shell)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*edit_buttons*XmText.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift Ctrl<Btn4Down>,<Btn4Up>: previous-page()\\n\
~Ctrl Shift<Btn4Down>,<Btn4Up>: previous-line()\\n\
~Shift ~Ctrl<Btn4Down>,<Btn4Up>: previous-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\\n\
~Shift Ctrl<Btn5Down>,<Btn5Up>: next-page()\\n\
~Ctrl Shift<Btn5Down>,<Btn5Up>: next-line()\\n\
~Shift ~Ctrl<Btn5Down>,<Btn5Up>: next-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\\n \
Ctrl<Key>M: newline()\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Meta<Key>V: previous-page()\\n\
Ctrl<Key>V: next-page()\\n\
~Shift <Key>Prior: previous-page()\\n\
~Shift <Key>Next: next-page()\\n\
Shift<Key>osfPageUp: previous-page(extend)\\n\
Shift<Key>osfPageDown: next-page(extend)\\n\
Shift<Key>Prior: previous-page(extend)\\n\
Shift<Key>Next: next-page(extend)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*themes*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*breakpoint_properties*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(print)\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*define_command*XmTextField.baseTranslations: \
#override\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift <Key>Tab: gdb-complete-tab(\" \")\\n \
~Shift Ctrl<Key>X: cut-clipboard()\\n\
~Shift Ctrl<Key>C: copy-clipboard()\\n\
~Shift Ctrl<Key>V: paste-clipboard() ",
"Ddd*source_text_w.baseTranslations: \
#override\\n \
<Btn3Down>: source-popup-menu()\\n\
~Shift<Btn1Down>: source-start-select-word()\\n\
~Shift<Btn1Up>: source-end-select-word() source-double-click()\\n\
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-isearch-prev()\\n\
Ctrl<Key>C: gdb-control(^C)\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-isearch-next()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Ctrl<Key>R: gdb-isearch-prev()\\n\
Ctrl<Key>S: gdb-isearch-next()\\n\
Ctrl<Key>V: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Meta<Key>V: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Tab: PrimitiveNextTabGroup()\\n\
~Shift <Key>osfPageUp: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>osfPageDown: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>osfPageUp: previous-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>osfPageDown: next-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Prior: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Next: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>Prior: previous-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>Next: next-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n \
~Meta<Key>osfBackSpace: gdb-process(delete-previous-character)\\n\
~Ctrl ~Meta<Key>BackSpace: gdb-process(delete-previous-character)\\n\
~Meta<Key>Tab: gdb-process(process-tab)\\n\
~Ctrl ~Meta<Key>Return: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Linefeed: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Escape: gdb-interrupt()\\n\
~Meta<Key>osfCancel: gdb-interrupt()\\n\
~Meta<Key>Delete: gdb-process(delete-next-character)\\n\
~Ctrl ~Meta<Key>space: gdb-process()\\n\
~Ctrl ~Meta<Key>exclam: gdb-process()\\n\
~Ctrl ~Meta<Key>quotedbl: gdb-process()\\n\
~Ctrl ~Meta<Key>numbersign: gdb-process()\\n\
~Ctrl ~Meta<Key>dollar: gdb-process()\\n\
~Ctrl ~Meta<Key>percent: gdb-process()\\n\
~Ctrl ~Meta<Key>ampersand: gdb-process()\\n\
~Ctrl ~Meta<Key>apostrophe: gdb-process()\\n\
~Ctrl ~Meta<Key>parenleft: gdb-process()\\n\
~Ctrl ~Meta<Key>parenright: gdb-process()\\n\
~Ctrl ~Meta<Key>asterisk: gdb-process()\\n\
~Ctrl ~Meta<Key>plus: gdb-process()\\n\
~Ctrl ~Meta<Key>comma: gdb-process()\\n\
~Ctrl ~Meta<Key>minus: gdb-process()\\n\
~Ctrl ~Meta<Key>period: gdb-process()\\n\
~Ctrl ~Meta<Key>slash: gdb-process()\\n\
~Ctrl ~Meta<Key>0: gdb-process()\\n\
~Ctrl ~Meta<Key>1: gdb-process()\\n\
~Ctrl ~Meta<Key>2: gdb-process()\\n\
~Ctrl ~Meta<Key>3: gdb-process()\\n\
~Ctrl ~Meta<Key>4: gdb-process()\\n\
~Ctrl ~Meta<Key>5: gdb-process()\\n\
~Ctrl ~Meta<Key>6: gdb-process()\\n\
~Ctrl ~Meta<Key>7: gdb-process()\\n\
~Ctrl ~Meta<Key>8: gdb-process()\\n\
~Ctrl ~Meta<Key>9: gdb-process()\\n\
~Ctrl ~Meta<Key>colon: gdb-process()\\n\
~Ctrl ~Meta<Key>semicolon: gdb-process()\\n\
~Ctrl ~Meta<Key>less: gdb-process()\\n\
~Ctrl ~Meta<Key>equal: gdb-process()\\n\
~Ctrl ~Meta<Key>greater: gdb-process()\\n\
~Ctrl ~Meta<Key>question: gdb-process()\\n\
~Ctrl ~Meta<Key>at: gdb-process()\\n\
~Ctrl ~Meta<Key>A: gdb-process()\\n\
~Ctrl ~Meta<Key>B: gdb-process()\\n\
~Ctrl ~Meta<Key>C: gdb-process()\\n\
~Ctrl ~Meta<Key>D: gdb-process()\\n\
~Ctrl ~Meta<Key>E: gdb-process()\\n\
~Ctrl ~Meta<Key>F: gdb-process()\\n\
~Ctrl ~Meta<Key>G: gdb-process()\\n\
~Ctrl ~Meta<Key>H: gdb-process()\\n\
~Ctrl ~Meta<Key>I: gdb-process()\\n\
~Ctrl ~Meta<Key>J: gdb-process()\\n\
~Ctrl ~Meta<Key>K: gdb-process()\\n\
~Ctrl ~Meta<Key>L: gdb-process()\\n\
~Ctrl ~Meta<Key>M: gdb-process()\\n\
~Ctrl ~Meta<Key>N: gdb-process()\\n\
~Ctrl ~Meta<Key>O: gdb-process()\\n\
~Ctrl ~Meta<Key>P: gdb-process()\\n\
~Ctrl ~Meta<Key>Q: gdb-process()\\n\
~Ctrl ~Meta<Key>R: gdb-process()\\n\
~Ctrl ~Meta<Key>S: gdb-process()\\n\
~Ctrl ~Meta<Key>T: gdb-process()\\n\
~Ctrl ~Meta<Key>U: gdb-process()\\n\
~Ctrl ~Meta<Key>V: gdb-process()\\n\
~Ctrl ~Meta<Key>W: gdb-process()\\n\
~Ctrl ~Meta<Key>X: gdb-process()\\n\
~Ctrl ~Meta<Key>Y: gdb-process()\\n\
~Ctrl ~Meta<Key>Z: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketleft: gdb-process()\\n\
~Ctrl ~Meta<Key>backslash: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciicircum: gdb-process()\\n\
~Ctrl ~Meta<Key>underscore: gdb-process()\\n\
~Ctrl ~Meta<Key>grave: gdb-process()\\n\
~Ctrl ~Meta<Key>a: gdb-process()\\n\
~Ctrl ~Meta<Key>b: gdb-process()\\n\
~Ctrl ~Meta<Key>c: gdb-process()\\n\
~Ctrl ~Meta<Key>d: gdb-process()\\n\
~Ctrl ~Meta<Key>e: gdb-process()\\n\
~Ctrl ~Meta<Key>f: gdb-process()\\n\
~Ctrl ~Meta<Key>g: gdb-process()\\n\
~Ctrl ~Meta<Key>h: gdb-process()\\n\
~Ctrl ~Meta<Key>i: gdb-process()\\n\
~Ctrl ~Meta<Key>j: gdb-process()\\n\
~Ctrl ~Meta<Key>k: gdb-process()\\n\
~Ctrl ~Meta<Key>l: gdb-process()\\n\
~Ctrl ~Meta<Key>m: gdb-process()\\n\
~Ctrl ~Meta<Key>n: gdb-process()\\n\
~Ctrl ~Meta<Key>o: gdb-process()\\n\
~Ctrl ~Meta<Key>p: gdb-process()\\n\
~Ctrl ~Meta<Key>q: gdb-process()\\n\
~Ctrl ~Meta<Key>r: gdb-process()\\n\
~Ctrl ~Meta<Key>s: gdb-process()\\n\
~Ctrl ~Meta<Key>t: gdb-process()\\n\
~Ctrl ~Meta<Key>u: gdb-process()\\n\
~Ctrl ~Meta<Key>v: gdb-process()\\n\
~Ctrl ~Meta<Key>w: gdb-process()\\n\
~Ctrl ~Meta<Key>x: gdb-process()\\n\
~Ctrl ~Meta<Key>y: gdb-process()\\n\
~Ctrl ~Meta<Key>z: gdb-process()\\n\
~Ctrl ~Meta<Key>braceleft: gdb-process()\\n\
~Ctrl ~Meta<Key>bar: gdb-process()\\n\
~Ctrl ~Meta<Key>braceright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciitilde: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_0: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_1: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_2: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_3: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_4: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_5: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_6: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_7: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_8: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_9: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Space: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Tab: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Enter: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Equal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Multiply: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Add: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Separator: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Subtract: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Decimal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Divide: gdb-process()\\n\
~Meta Ctrl<Key>C: gdb-process()\\n\
~Meta Ctrl<Key>D: gdb-process(process-delete)\\n\
~Meta Ctrl<Key>G: gdb-process()\\n\
~Meta Ctrl ~Shift<Key>K: gdb-process(delete-to-end-of-line)\\n\
~Meta Ctrl<Key>W: gdb-process(delete-previous-word)\\n\
~Meta Ctrl<Key>U: gdb-process()\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift Ctrl<Btn4Down>,<Btn4Up>: previous-page()\\n\
~Ctrl Shift<Btn4Down>,<Btn4Up>: previous-line()\\n\
~Shift ~Ctrl<Btn4Down>,<Btn4Up>: previous-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\\n\
~Shift Ctrl<Btn5Down>,<Btn5Up>: next-page()\\n\
~Ctrl Shift<Btn5Down>,<Btn5Up>: next-line()\\n\
~Shift ~Ctrl<Btn5Down>,<Btn5Up>: next-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\\n \
Ctrl<Key>M: newline()\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Meta<Key>V: previous-page()\\n\
Ctrl<Key>V: next-page()\\n\
~Shift <Key>Prior: previous-page()\\n\
~Shift <Key>Next: next-page()\\n\
Shift<Key>osfPageUp: previous-page(extend)\\n\
Shift<Key>osfPageDown: next-page(extend)\\n\
Shift<Key>Prior: previous-page(extend)\\n\
Shift<Key>Next: next-page(extend) ",
"Ddd*code_text_w.baseTranslations: \
#override\\n \
<Btn3Down>: source-popup-menu()\\n\
~Shift<Btn1Down>: source-start-select-word()\\n\
~Shift<Btn1Up>: source-end-select-word() source-double-click()\\n\
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-isearch-prev()\\n\
Ctrl<Key>C: gdb-control(^C)\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-isearch-next()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Ctrl<Key>R: gdb-isearch-prev()\\n\
Ctrl<Key>S: gdb-isearch-next()\\n\
Ctrl<Key>V: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Meta<Key>V: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Tab: PrimitiveNextTabGroup()\\n\
~Shift <Key>osfPageUp: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>osfPageDown: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>osfPageUp: previous-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>osfPageDown: next-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Prior: previous-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Next: next-page()\t\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>Prior: previous-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
Shift<Key>Next: next-page(extend)\t    \
\t\t\tsource-update-glyphs()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n \
~Meta<Key>osfBackSpace: gdb-process(delete-previous-character)\\n\
~Ctrl ~Meta<Key>BackSpace: gdb-process(delete-previous-character)\\n\
~Meta<Key>Tab: gdb-process(process-tab)\\n\
~Ctrl ~Meta<Key>Return: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Linefeed: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Escape: gdb-interrupt()\\n\
~Meta<Key>osfCancel: gdb-interrupt()\\n\
~Meta<Key>Delete: gdb-process(delete-next-character)\\n\
~Ctrl ~Meta<Key>space: gdb-process()\\n\
~Ctrl ~Meta<Key>exclam: gdb-process()\\n\
~Ctrl ~Meta<Key>quotedbl: gdb-process()\\n\
~Ctrl ~Meta<Key>numbersign: gdb-process()\\n\
~Ctrl ~Meta<Key>dollar: gdb-process()\\n\
~Ctrl ~Meta<Key>percent: gdb-process()\\n\
~Ctrl ~Meta<Key>ampersand: gdb-process()\\n\
~Ctrl ~Meta<Key>apostrophe: gdb-process()\\n\
~Ctrl ~Meta<Key>parenleft: gdb-process()\\n\
~Ctrl ~Meta<Key>parenright: gdb-process()\\n\
~Ctrl ~Meta<Key>asterisk: gdb-process()\\n\
~Ctrl ~Meta<Key>plus: gdb-process()\\n\
~Ctrl ~Meta<Key>comma: gdb-process()\\n\
~Ctrl ~Meta<Key>minus: gdb-process()\\n\
~Ctrl ~Meta<Key>period: gdb-process()\\n\
~Ctrl ~Meta<Key>slash: gdb-process()\\n\
~Ctrl ~Meta<Key>0: gdb-process()\\n\
~Ctrl ~Meta<Key>1: gdb-process()\\n\
~Ctrl ~Meta<Key>2: gdb-process()\\n\
~Ctrl ~Meta<Key>3: gdb-process()\\n\
~Ctrl ~Meta<Key>4: gdb-process()\\n\
~Ctrl ~Meta<Key>5: gdb-process()\\n\
~Ctrl ~Meta<Key>6: gdb-process()\\n\
~Ctrl ~Meta<Key>7: gdb-process()\\n\
~Ctrl ~Meta<Key>8: gdb-process()\\n\
~Ctrl ~Meta<Key>9: gdb-process()\\n\
~Ctrl ~Meta<Key>colon: gdb-process()\\n\
~Ctrl ~Meta<Key>semicolon: gdb-process()\\n\
~Ctrl ~Meta<Key>less: gdb-process()\\n\
~Ctrl ~Meta<Key>equal: gdb-process()\\n\
~Ctrl ~Meta<Key>greater: gdb-process()\\n\
~Ctrl ~Meta<Key>question: gdb-process()\\n\
~Ctrl ~Meta<Key>at: gdb-process()\\n\
~Ctrl ~Meta<Key>A: gdb-process()\\n\
~Ctrl ~Meta<Key>B: gdb-process()\\n\
~Ctrl ~Meta<Key>C: gdb-process()\\n\
~Ctrl ~Meta<Key>D: gdb-process()\\n\
~Ctrl ~Meta<Key>E: gdb-process()\\n\
~Ctrl ~Meta<Key>F: gdb-process()\\n\
~Ctrl ~Meta<Key>G: gdb-process()\\n\
~Ctrl ~Meta<Key>H: gdb-process()\\n\
~Ctrl ~Meta<Key>I: gdb-process()\\n\
~Ctrl ~Meta<Key>J: gdb-process()\\n\
~Ctrl ~Meta<Key>K: gdb-process()\\n\
~Ctrl ~Meta<Key>L: gdb-process()\\n\
~Ctrl ~Meta<Key>M: gdb-process()\\n\
~Ctrl ~Meta<Key>N: gdb-process()\\n\
~Ctrl ~Meta<Key>O: gdb-process()\\n\
~Ctrl ~Meta<Key>P: gdb-process()\\n\
~Ctrl ~Meta<Key>Q: gdb-process()\\n\
~Ctrl ~Meta<Key>R: gdb-process()\\n\
~Ctrl ~Meta<Key>S: gdb-process()\\n\
~Ctrl ~Meta<Key>T: gdb-process()\\n\
~Ctrl ~Meta<Key>U: gdb-process()\\n\
~Ctrl ~Meta<Key>V: gdb-process()\\n\
~Ctrl ~Meta<Key>W: gdb-process()\\n\
~Ctrl ~Meta<Key>X: gdb-process()\\n\
~Ctrl ~Meta<Key>Y: gdb-process()\\n\
~Ctrl ~Meta<Key>Z: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketleft: gdb-process()\\n\
~Ctrl ~Meta<Key>backslash: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciicircum: gdb-process()\\n\
~Ctrl ~Meta<Key>underscore: gdb-process()\\n\
~Ctrl ~Meta<Key>grave: gdb-process()\\n\
~Ctrl ~Meta<Key>a: gdb-process()\\n\
~Ctrl ~Meta<Key>b: gdb-process()\\n\
~Ctrl ~Meta<Key>c: gdb-process()\\n\
~Ctrl ~Meta<Key>d: gdb-process()\\n\
~Ctrl ~Meta<Key>e: gdb-process()\\n\
~Ctrl ~Meta<Key>f: gdb-process()\\n\
~Ctrl ~Meta<Key>g: gdb-process()\\n\
~Ctrl ~Meta<Key>h: gdb-process()\\n\
~Ctrl ~Meta<Key>i: gdb-process()\\n\
~Ctrl ~Meta<Key>j: gdb-process()\\n\
~Ctrl ~Meta<Key>k: gdb-process()\\n\
~Ctrl ~Meta<Key>l: gdb-process()\\n\
~Ctrl ~Meta<Key>m: gdb-process()\\n\
~Ctrl ~Meta<Key>n: gdb-process()\\n\
~Ctrl ~Meta<Key>o: gdb-process()\\n\
~Ctrl ~Meta<Key>p: gdb-process()\\n\
~Ctrl ~Meta<Key>q: gdb-process()\\n\
~Ctrl ~Meta<Key>r: gdb-process()\\n\
~Ctrl ~Meta<Key>s: gdb-process()\\n\
~Ctrl ~Meta<Key>t: gdb-process()\\n\
~Ctrl ~Meta<Key>u: gdb-process()\\n\
~Ctrl ~Meta<Key>v: gdb-process()\\n\
~Ctrl ~Meta<Key>w: gdb-process()\\n\
~Ctrl ~Meta<Key>x: gdb-process()\\n\
~Ctrl ~Meta<Key>y: gdb-process()\\n\
~Ctrl ~Meta<Key>z: gdb-process()\\n\
~Ctrl ~Meta<Key>braceleft: gdb-process()\\n\
~Ctrl ~Meta<Key>bar: gdb-process()\\n\
~Ctrl ~Meta<Key>braceright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciitilde: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_0: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_1: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_2: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_3: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_4: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_5: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_6: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_7: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_8: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_9: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Space: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Tab: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Enter: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Equal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Multiply: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Add: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Separator: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Subtract: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Decimal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Divide: gdb-process()\\n\
~Meta Ctrl<Key>C: gdb-process()\\n\
~Meta Ctrl<Key>D: gdb-process(process-delete)\\n\
~Meta Ctrl<Key>G: gdb-process()\\n\
~Meta Ctrl ~Shift<Key>K: gdb-process(delete-to-end-of-line)\\n\
~Meta Ctrl<Key>W: gdb-process(delete-previous-word)\\n\
~Meta Ctrl<Key>U: gdb-process()\\n \
Shift Ctrl<Key>E: gdb-command(run)\\n\
Shift Ctrl<Key>K: gdb-command(kill)\\n\
Ctrl<Key>bracketleft: gdb-command(until)\\n\
Ctrl<Key>bracketright: gdb-command(finish)\\n\
~Shift Ctrl<Key>I: gdb-command(step)\\n\
Shift Ctrl<Key>I: gdb-command(stepi)\\n\
~Shift Ctrl<Key>J: gdb-command(next)\\n\
Shift Ctrl<Key>J: gdb-command(nexti)\\n\
~Shift Ctrl<Key>T: gdb-command(cont)\\n\
Shift Ctrl<Key>T: gdb-command(signal 0)\\n \
~Shift Ctrl<Key>A: ddd-select-all()\\n\
Shift Ctrl<Key>A: select-all()\\n\
Ctrl<Key>B: gdb-backward-character()\\n\
Ctrl<Key>D: delete-next-character()\\n\
~Ctrl ~Shift<Key>Delete:delete-next-character()\\n\
Ctrl<Key>E: end-of-line()\\n\
Ctrl<Key>F: gdb-forward-character()\\n\
Ctrl<Key>G: gdb-control(^C)\\n\
<Key>Break: gdb-interrupt()\\n\
Ctrl<Key>H: delete-previous-character()\\n\
~Shift Ctrl<Key>K: delete-to-end-of-line()\\n\
Ctrl<Key>U: beginning-of-line()\t    \
\t\t\tdelete-to-end-of-line()\\n\
Ctrl<Key>W: delete-previous-word()\\n\
Ctrl<Key>osfBackSpace: delete-previous-word()\\n\
~Shift <Key>R7: beginning-of-line()\\n\
~Shift <Key>R13: end-of-line()\\n\
~Shift <Key>Home: beginning-of-line()\\n\
~Shift <Key>End: end-of-line()\\n\
<Key>Escape: gdb-interrupt()\\n\
<Key>osfCancel: gdb-interrupt()\\n\
~Ctrl ~Shift<Key>osfBeginLine: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndLine: end-of-line()\\n\
~Ctrl ~Shift<Key>osfBeginData: beginning-of-line()\\n\
~Ctrl ~Shift<Key>osfEndData: end-of-line()\\n\
~Ctrl Shift<Key>Delete: cut-clipboard()\\n\
~Shift Ctrl<Key>Insert: copy-clipboard()\\n\
~Ctrl Shift<Key>Insert: paste-clipboard()\\n\
~Ctrl ~Shift<Key>Insert: toggle-overstrike()\\n \
~Shift Ctrl<Btn4Down>,<Btn4Up>: previous-page()\\n\
~Ctrl Shift<Btn4Down>,<Btn4Up>: previous-line()\\n\
~Shift ~Ctrl<Btn4Down>,<Btn4Up>: previous-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\
\t\t\t\t\tprevious-line()\\n\
~Shift Ctrl<Btn5Down>,<Btn5Up>: next-page()\\n\
~Ctrl Shift<Btn5Down>,<Btn5Up>: next-line()\\n\
~Shift ~Ctrl<Btn5Down>,<Btn5Up>: next-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\
\t\t\t\t\tnext-line()\\n \
Ctrl<Key>M: newline()\\n\
Ctrl<Key>N: gdb-next-history()\\n\
Ctrl<Key>P: gdb-previous-history()\\n\
Meta<Key>V: previous-page()\\n\
Ctrl<Key>V: next-page()\\n\
~Shift <Key>Prior: previous-page()\\n\
~Shift <Key>Next: next-page()\\n\
Shift<Key>osfPageUp: previous-page(extend)\\n\
Shift<Key>osfPageDown: next-page(extend)\\n\
Shift<Key>Prior: previous-page(extend)\\n\
Shift<Key>Next: next-page(extend) ",
"Ddd*source_form_w.XmPushButton.baseTranslations: #override\\n \
<Btn1Down>: ArmAndActivate() source-drag-glyph()\\n\
<Btn1Motion>: source-follow-glyph()\\n\
~Shift <Btn1Up>: source-drop-glyph(move)\\n\
Shift <Btn1Up>: source-drop-glyph(copy)\\n\
<Btn2Down>: source-drag-glyph()\\n\
<Btn2Motion>: source-follow-glyph()\\n\
~Shift <Btn2Up>: source-drop-glyph(move)\\n\
Shift <Btn2Up>: source-drop-glyph(copy)\\n\
<Btn3Down>: source-popup-menu() ",
"Ddd*code_form_w.XmPushButton.baseTranslations: #override\\n \
<Btn1Down>: ArmAndActivate() source-drag-glyph()\\n\
<Btn1Motion>: source-follow-glyph()\\n\
~Shift <Btn1Up>: source-drop-glyph(move)\\n\
Shift <Btn1Up>: source-drop-glyph(copy)\\n\
<Btn2Down>: source-drag-glyph()\\n\
<Btn2Motion>: source-follow-glyph()\\n\
~Shift <Btn2Up>: source-drop-glyph(move)\\n\
Shift <Btn2Up>: source-drop-glyph(copy)\\n\
<Btn3Down>: source-popup-menu() ",
"Ddd*graph_edit.baseTranslations: #override\\n \
~Shift<Btn1Down>: graph-select-or-move()\\n\
Shift<Btn1Down>: graph-toggle-or-move()\\n\
<Btn2Down>: graph-toggle-or-move()\\n\
<Btn3Down>: graph-select() graph-popup-menu()\\n \
~Meta<Key>osfBackSpace: gdb-process(delete-previous-character)\\n\
~Ctrl ~Meta<Key>BackSpace: gdb-process(delete-previous-character)\\n\
~Meta<Key>Tab: gdb-process(process-tab)\\n\
~Ctrl ~Meta<Key>Return: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Linefeed: gdb-process(process-return)\\n\
~Ctrl ~Meta<Key>Escape: gdb-interrupt()\\n\
~Meta<Key>osfCancel: gdb-interrupt()\\n\
~Meta<Key>Delete: gdb-process(delete-next-character)\\n\
~Ctrl ~Meta<Key>space: gdb-process()\\n\
~Ctrl ~Meta<Key>exclam: gdb-process()\\n\
~Ctrl ~Meta<Key>quotedbl: gdb-process()\\n\
~Ctrl ~Meta<Key>numbersign: gdb-process()\\n\
~Ctrl ~Meta<Key>dollar: gdb-process()\\n\
~Ctrl ~Meta<Key>percent: gdb-process()\\n\
~Ctrl ~Meta<Key>ampersand: gdb-process()\\n\
~Ctrl ~Meta<Key>apostrophe: gdb-process()\\n\
~Ctrl ~Meta<Key>parenleft: gdb-process()\\n\
~Ctrl ~Meta<Key>parenright: gdb-process()\\n\
~Ctrl ~Meta<Key>asterisk: gdb-process()\\n\
~Ctrl ~Meta<Key>plus: gdb-process()\\n\
~Ctrl ~Meta<Key>comma: gdb-process()\\n\
~Ctrl ~Meta<Key>minus: gdb-process()\\n\
~Ctrl ~Meta<Key>period: gdb-process()\\n\
~Ctrl ~Meta<Key>slash: gdb-process()\\n\
~Ctrl ~Meta<Key>0: gdb-process()\\n\
~Ctrl ~Meta<Key>1: gdb-process()\\n\
~Ctrl ~Meta<Key>2: gdb-process()\\n\
~Ctrl ~Meta<Key>3: gdb-process()\\n\
~Ctrl ~Meta<Key>4: gdb-process()\\n\
~Ctrl ~Meta<Key>5: gdb-process()\\n\
~Ctrl ~Meta<Key>6: gdb-process()\\n\
~Ctrl ~Meta<Key>7: gdb-process()\\n\
~Ctrl ~Meta<Key>8: gdb-process()\\n\
~Ctrl ~Meta<Key>9: gdb-process()\\n\
~Ctrl ~Meta<Key>colon: gdb-process()\\n\
~Ctrl ~Meta<Key>semicolon: gdb-process()\\n\
~Ctrl ~Meta<Key>less: gdb-process()\\n\
~Ctrl ~Meta<Key>equal: gdb-process()\\n\
~Ctrl ~Meta<Key>greater: gdb-process()\\n\
~Ctrl ~Meta<Key>question: gdb-process()\\n\
~Ctrl ~Meta<Key>at: gdb-process()\\n\
~Ctrl ~Meta<Key>A: gdb-process()\\n\
~Ctrl ~Meta<Key>B: gdb-process()\\n\
~Ctrl ~Meta<Key>C: gdb-process()\\n\
~Ctrl ~Meta<Key>D: gdb-process()\\n\
~Ctrl ~Meta<Key>E: gdb-process()\\n\
~Ctrl ~Meta<Key>F: gdb-process()\\n\
~Ctrl ~Meta<Key>G: gdb-process()\\n\
~Ctrl ~Meta<Key>H: gdb-process()\\n\
~Ctrl ~Meta<Key>I: gdb-process()\\n\
~Ctrl ~Meta<Key>J: gdb-process()\\n\
~Ctrl ~Meta<Key>K: gdb-process()\\n\
~Ctrl ~Meta<Key>L: gdb-process()\\n\
~Ctrl ~Meta<Key>M: gdb-process()\\n\
~Ctrl ~Meta<Key>N: gdb-process()\\n\
~Ctrl ~Meta<Key>O: gdb-process()\\n\
~Ctrl ~Meta<Key>P: gdb-process()\\n\
~Ctrl ~Meta<Key>Q: gdb-process()\\n\
~Ctrl ~Meta<Key>R: gdb-process()\\n\
~Ctrl ~Meta<Key>S: gdb-process()\\n\
~Ctrl ~Meta<Key>T: gdb-process()\\n\
~Ctrl ~Meta<Key>U: gdb-process()\\n\
~Ctrl ~Meta<Key>V: gdb-process()\\n\
~Ctrl ~Meta<Key>W: gdb-process()\\n\
~Ctrl ~Meta<Key>X: gdb-process()\\n\
~Ctrl ~Meta<Key>Y: gdb-process()\\n\
~Ctrl ~Meta<Key>Z: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketleft: gdb-process()\\n\
~Ctrl ~Meta<Key>backslash: gdb-process()\\n\
~Ctrl ~Meta<Key>bracketright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciicircum: gdb-process()\\n\
~Ctrl ~Meta<Key>underscore: gdb-process()\\n\
~Ctrl ~Meta<Key>grave: gdb-process()\\n\
~Ctrl ~Meta<Key>a: gdb-process()\\n\
~Ctrl ~Meta<Key>b: gdb-process()\\n\
~Ctrl ~Meta<Key>c: gdb-process()\\n\
~Ctrl ~Meta<Key>d: gdb-process()\\n\
~Ctrl ~Meta<Key>e: gdb-process()\\n\
~Ctrl ~Meta<Key>f: gdb-process()\\n\
~Ctrl ~Meta<Key>g: gdb-process()\\n\
~Ctrl ~Meta<Key>h: gdb-process()\\n\
~Ctrl ~Meta<Key>i: gdb-process()\\n\
~Ctrl ~Meta<Key>j: gdb-process()\\n\
~Ctrl ~Meta<Key>k: gdb-process()\\n\
~Ctrl ~Meta<Key>l: gdb-process()\\n\
~Ctrl ~Meta<Key>m: gdb-process()\\n\
~Ctrl ~Meta<Key>n: gdb-process()\\n\
~Ctrl ~Meta<Key>o: gdb-process()\\n\
~Ctrl ~Meta<Key>p: gdb-process()\\n\
~Ctrl ~Meta<Key>q: gdb-process()\\n\
~Ctrl ~Meta<Key>r: gdb-process()\\n\
~Ctrl ~Meta<Key>s: gdb-process()\\n\
~Ctrl ~Meta<Key>t: gdb-process()\\n\
~Ctrl ~Meta<Key>u: gdb-process()\\n\
~Ctrl ~Meta<Key>v: gdb-process()\\n\
~Ctrl ~Meta<Key>w: gdb-process()\\n\
~Ctrl ~Meta<Key>x: gdb-process()\\n\
~Ctrl ~Meta<Key>y: gdb-process()\\n\
~Ctrl ~Meta<Key>z: gdb-process()\\n\
~Ctrl ~Meta<Key>braceleft: gdb-process()\\n\
~Ctrl ~Meta<Key>bar: gdb-process()\\n\
~Ctrl ~Meta<Key>braceright: gdb-process()\\n\
~Ctrl ~Meta<Key>asciitilde: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_0: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_1: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_2: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_3: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_4: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_5: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_6: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_7: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_8: gdb-process()\\n\
~Ctrl ~Meta ~Shift<Key>KP_9: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Space: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Tab: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Enter: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Equal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Multiply: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Add: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Separator: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Subtract: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Decimal: gdb-process()\\n\
~Ctrl ~Meta<Key>KP_Divide: gdb-process()\\n\
~Meta Ctrl<Key>C: gdb-process()\\n\
~Meta Ctrl<Key>D: gdb-process(process-delete)\\n\
~Meta Ctrl<Key>G: gdb-process()\\n\
~Meta Ctrl ~Shift<Key>K: gdb-process(delete-to-end-of-line)\\n\
~Meta Ctrl<Key>W: gdb-process(delete-previous-word)\\n\
~Meta Ctrl<Key>U: gdb-process()\\n",
"Ddd*XmComboBox*visibleItemCount: 10",
"Ddd*comboBoxShell*visibleItemCount: 10",
"Ddd*XmSelectionBox*XmComboBox*visibleItemCount: 5",
"Ddd*XmSelectionBox*comboBoxShell*visibleItemCount: 5",
"Ddd*XmComboBox.arrowSize: 15",
"Ddd*comboBoxArrow.width: 12",
"Ddd*spinBoxArrow.width: 10",
"Ddd*title: DDD Window",
"Ddd.title: DDD: The Data Display Debugger",
"Ddd.iconName: DDD",
"Ddd*command_shell.title: DDD: Debugger Console",
"Ddd*command_shell.iconName: DDD: Console",
"Ddd*source_view_shell.title: DDD: Program Source",
"Ddd*source_view_shell.iconName: DDD: Source",
"Ddd*data_disp_shell.title: DDD: Program Data",
"Ddd*data_disp_shell.iconName: DDD: Data",
"Ddd*tool_shell.title: DDD",
"Ddd*tool_shell.iconName: DDD: Command Tool",
"Ddd*title: DDD Dialog",
"Ddd*iconName: DDD Dialog",
"Ddd*XmDialogShell.mwmDecorations: 26",
"Ddd*manual_help_popup.mwmDecorations: 1",
"Ddd*license_popup.mwmDecorations: 1",
"Ddd*news_popup.mwmDecorations: 1",
"Ddd*helpLabelString: \\ \\ \\ Help\\ \\ \\ ",
"Ddd*helpShowTitle: off",
"Ddd*help.okLabelString: Close",
"Ddd*license.okLabelString: Close",
"Ddd*news.okLabelString: Close",
"Ddd*manual_help.okLabelString: Close",
"Ddd*tip_dialog.okLabelString: Close",
"Ddd*help.dialogTitle: DDD Help",
"Ddd*manual_help.title: DDD Reference",
"Ddd*manual_help.iconName: DDD Reference",
"Ddd*license.title: DDD License",
"Ddd*license.iconName: DDD License",
"Ddd*news.title: DDD News",
"Ddd*news.iconName: DDD News",
"Ddd*help.symbolPixmap: ddd",
"Ddd*help*helpString: \
@rm Welcome to DDD Help\\!\\n\
\\n\
To get help about an item, just point on it and press @key F1@rm .\\n\
The item\'s functionality will be explained here.\\n\
\\n\
To find out what you can do next, press @key Ctrl+F1@rm .  Depending on\\n\
the current DDD state, you will be given some general advice.\\n\
\\n\
Have fun with DDD!",
"Ddd*helpOnVersionString: \
@llogo DDD@logo: \
The @llogo D@logo ata @llogo D@logo isplay @llogo D@logo ebugger\\n\
@rm by Dorothea L\\374tkehaus and Andreas Zeller, maintained by Peter Wainwright.\\n\\n",
"Ddd*helpString: \
@rm This item has no function, or is not documented.",
"Ddd*XmScrollBar.helpString: \
@bs Scroll Bar@rm\\n\
\\n\
Click or hold @bs mouse button 1@rm  on an arrow button\\n\
to scroll the window in the arrow direction.\\n\
\\n\
Drag the slider with @bs mouse button 1@rm  to select the\\n\
visible part of the window.",
"Ddd*XmSash.helpString: \
@bs Paned Window Sash@rm\\n\
\\n\
Drag the sash with @bs mouse button 1@rm  to resize window parts.",
"Ddd*XmSash.tipString: \
@rm Resize window",
"Ddd*Separator.helpString: \
@bs Paned Window Sash@rm\\n\
\\n\
Drag the sash with @bs mouse button 1@rm  to resize window parts.",
"Ddd*Separator.tipString: \
@rm Resize window",
"Ddd*separator.helpString: \
@bs Paned Window Sash@rm\\n\
\\n\
Drag the sash with @bs mouse button 1@rm  to resize window parts.",
"Ddd*separator.tipString: \
@rm Resize window",
"Ddd*arg_label.helpString: \
@bs Argument Prompt@rm\\n\
\\n\
Enter the argument @bf ()@rm  on the right.\\n\
Click on @bf ():@rm  to clear the argument @bf ()@rm .",
"Ddd*arg_label.tipString: \
@rm Clear argument @bf ()@rm ",
"Ddd*arg_label.documentationString: \
@rm Click to clear the argument @bf ()@rm .",
"Ddd*arg_label.traversalOn: off",
"Ddd*status_form*traversalOn: off",
"Ddd*XmSash.traversalOn: off",
"Ddd*manual_help*title.labelString: DDD Reference",
"Ddd*manual_help*title.alignment: XmALIGNMENT_BEGINNING",
"Ddd*help_area.allowResize: on",
"Ddd*manual_help*index.selectionPolicy: XmSINGLE_SELECT",
"Ddd*manual_help*index.visibleItemCount: 5",
"Ddd*manual_help*text.rows: 25",
"Ddd*manual_help*text.wordWrap: on",
"Ddd*manual_help*text.scrollHorizontal: off",
"Ddd*manual_help*source.labelString: Reference",
"Ddd*manual_help*source.mnemonic: R",
"Ddd*sourceMenu*viewIndex.labelString: Index",
"Ddd*sourceMenu*viewIndex.mnemonic: I",
"Ddd*sourceMenu*viewIndex.accelerator: Meta<Key>1",
"Ddd*sourceMenu*viewIndex.acceleratorText: Alt+1",
"Ddd*sourceMenu*viewIndex.documentationString:\
@rm Toggle display of manual index",
"Ddd*help_area*findBackward.labelString: @charset Find@small<< @charset()@rm ",
"Ddd*help_area*findBackward.labelType: XmPIXMAP",
"Ddd*help_area*findBackward.labelPixmap: find_backward",
"Ddd*help_area*findBackward.labelInsensitivePixmap: find_backward-xx",
"Ddd*help_area*findBackward.armPixmap: find_backward-arm",
"Ddd*help_area*findBackward.highlightPixmap: find_backward-hi",
"Ddd*help_area*findBackward.tipString: \
@rm Find previous @bf ()@rm  in text",
"Ddd*help_area*findBackward.documentationString: \
@rm Search the previous occurrence of @bf ()@rm  in the text",
"Ddd*help_area*findForward.labelString: @charset Find@small>> @charset()@rm ",
"Ddd*help_area*findForward.labelType: XmPIXMAP",
"Ddd*help_area*findForward.labelPixmap: find_forward",
"Ddd*help_area*findForward.labelInsensitivePixmap: find_forward-xx",
"Ddd*help_area*findForward.armPixmap: find_forward-arm",
"Ddd*help_area*findForward.highlightPixmap: find_forward-hi",
"Ddd*help_area*findForward.tipString: \
@rm Find next @bf ()@rm  in text",
"Ddd*help_area*findForward.documentationString: \
@rm Search the next occurrence of @bf ()@rm  in the text",
"Ddd*manual_help*helpString: \
@bs DDD Manual Browser@rm\\n\
\\n\
To view a specific section, select its title from the index at the top.\\n\
\\n\
To find a string in the manual, enter it in the @bf ()@rm  argument field \
and press @key RETURN @symbol \\277@rm .\\n\
Click on @charset Find@small<< @charset()@rm  to search the next occurrence of @bf ()@rm .\\n\
Click on @charset Find@small>> @charset()@rm  to search the previous occurrence of @bf ()@rm .",
"Ddd*license*form.borderWidth: 0",
"Ddd*license*title.labelString: DDD License",
"Ddd*license*title.alignment: XmALIGNMENT_BEGINNING",
"Ddd*license*source.labelString: License",
"Ddd*license*source.mnemonic: L",
"Ddd*license*text.rows: 25",
"Ddd*license*text.wordWrap: on",
"Ddd*license*text.scrollHorizontal: off",
"Ddd*license*helpString: \
@bs DDD License@rm\\n\
\\n\
The DDD License, a GNU General Public License, describes the terms\\n\
and conditions for copying, distributing and modifying DDD.\\n\
\\n\
To find a string in the license, enter it in the @bf ()@rm  argument field \
and press @key RETURN @symbol \\277@rm .\\n\
Click on @charset Find@small<< @charset()@rm  to search the next occurrence of @bf ()@rm .\\n\
Click on @charset Find@small>> @charset()@rm  to search the previous occurrence of @bf ()@rm .\\n\
\\n\
Please see section 11, `@tt NO WARRANTY@rm\', for the various kinds of warranty\\n\
you do not have.",
"Ddd*news*form.borderWidth: 0",
"Ddd*news*title.labelString: DDD News",
"Ddd*news*title.alignment: XmALIGNMENT_BEGINNING",
"Ddd*news*source.labelString: News",
"Ddd*news*source.mnemonic: N",
"Ddd*news*text.rows: 25",
"Ddd*news*text.wordWrap: on",
"Ddd*news*text.scrollHorizontal: off",
"Ddd*news*helpString: \
@bs DDD News@rm\\n\
\\n\
What\'s new in this DDD release relative to previous releases.\\n\
\\n\
To find a string in the text, enter it in the @bf ()@rm  argument field \
and press @key RETURN @symbol \\277@rm .\\n\
Click on @charset Find@small<< @charset()@rm  to search the next occurrence of @bf ()@rm .\\n\
Click on @charset Find@small>> @charset()@rm  to search the previous occurrence of @bf ()@rm .",
"Ddd*tipLabel.background: #ffffcc",
"Ddd*tipLabel.foreground: black",
"Ddd*tipRow.background: black",
"Ddd*tipShell.borderColor: black",
"Ddd*tipShell.borderWidth: 1",
"Ddd*menubar.helpString: \
@bs Menu Bar@rm\\n\
\\n\
@tt \\267 @bf File@rm  @tt -@rm  select files and exit DDD.\\n\
@tt \\267 @bf Edit@rm  @tt -@rm  cut, copy, and paste text, and change DDD options.\\n\
@tt \\267 @bf View@rm  @tt -@rm  view DDD windows.\\n\
@tt \\267 @bf Program@rm  @tt -@rm  run the debugged program.\\n\
@tt \\267 @bf Commands@rm  @tt -@rm  view command history.\\n\
@tt \\267 @bf Status@rm  @tt -@rm  show program status (backtrace, registers, threads).\\n\
@tt \\267 @bf Source@rm  @tt -@rm  edit breakpoints and lookup previous positions.\\n\
@tt \\267 @bf Data@rm  @tt -@rm  edit displays.\\n\
@tt \\267 @bf Help@rm  @tt -@rm  on-line help and version information.",
"Ddd*menubar.marginWidth: 0",
"Ddd*menubar.marginHeight: 1",
"Ddd*menubar.file.labelString: File",
"Ddd*menubar.file*documentationString: \
@rm Open program and source files",
"Ddd*menubar.file.mnemonic: F",
"Ddd*menubar.file*helpString: \
@bs File Menu@rm\\n\
\\n\
@tt \\267 @bf Open Program...@rm  @tt -@rm  open the program to be debugged.\\n\
@tt \\267 @bf Open Recent@rm  @tt -@rm  open a recently used program.\\n\
@tt \\267 @bf Open Core Dump...@rm  @tt -@rm  open a core dump.\\n\
@tt \\267 @bf Open Source...@rm  @tt -@rm  open a source file.\\n\
\\n\
@tt \\267 @bf Open Session...@rm  @tt -@rm  open a DDD debugging session.\\n\
@tt \\267 @bf Save Session As...@rm  @tt -@rm  save current debugging session.\\n\
\\n\
@tt \\267 @bf Attach to Process...@rm  @tt -@rm  attach to a process outside of DDD.\\n\
@tt \\267 @bf Detach Process@rm  @tt -@rm  detach a process previously attached.\\n\
\\n\
@tt \\267 @bf Print Graph...@rm  @tt -@rm  print the data display graph.\\n\
@tt \\267 @bf Change Directory...@rm  @tt -@rm  change current directory.\\n\
@tt \\267 @bf Make...@rm  @tt -@rm  run the make program.\\n\
\\n\
@tt \\267 @bf Close@rm  @tt -@rm  close this window.\\n\
@tt \\267 @bf Restart@rm  @tt -@rm  restart DDD.\\n\
@tt \\267 @bf Exit@rm  @tt -@rm  exit DDD.",
"Ddd*fileMenu*helpString: \
@bs File Menu@rm\\n\
\\n\
@tt \\267 @bf Open Program...@rm  @tt -@rm  open the program to be debugged.\\n\
@tt \\267 @bf Open Recent@rm  @tt -@rm  open a recently used program.\\n\
@tt \\267 @bf Open Core Dump...@rm  @tt -@rm  open a core dump.\\n\
@tt \\267 @bf Open Source...@rm  @tt -@rm  open a source file.\\n\
\\n\
@tt \\267 @bf Open Session...@rm  @tt -@rm  open a DDD debugging session.\\n\
@tt \\267 @bf Save Session As...@rm  @tt -@rm  save current debugging session.\\n\
\\n\
@tt \\267 @bf Attach to Process...@rm  @tt -@rm  attach to a process outside of DDD.\\n\
@tt \\267 @bf Detach Process@rm  @tt -@rm  detach a process previously attached.\\n\
\\n\
@tt \\267 @bf Print Graph...@rm  @tt -@rm  print the data display graph.\\n\
@tt \\267 @bf Change Directory...@rm  @tt -@rm  change current directory.\\n\
@tt \\267 @bf Make...@rm  @tt -@rm  run the make program.\\n\
\\n\
@tt \\267 @bf Close@rm  @tt -@rm  close this window.\\n\
@tt \\267 @bf Restart@rm  @tt -@rm  restart DDD.\\n\
@tt \\267 @bf Exit@rm  @tt -@rm  exit DDD.",
"Ddd*fileMenu*tearOffTitle: File",
"Ddd*menubar*fileMenu.open_file.labelString: Open Program...",
"Ddd*menubar*fileMenu.open_file.mnemonic: O",
"Ddd*menubar*fileMenu.open_file.accelerator: ~Shift Ctrl<Key>O",
"Ddd*menubar*fileMenu.open_file.acceleratorText: Ctrl+O",
"Ddd*menubar*fileMenu.open_file.documentationString: \
@rm Open a program to be debugged",
"Ddd*menubar*fileMenu.open_class.labelString: Open Class...",
"Ddd*menubar*fileMenu.open_class.mnemonic: O",
"Ddd*menubar*fileMenu.open_class.accelerator: ~Shift Ctrl<Key>O",
"Ddd*menubar*fileMenu.open_class.acceleratorText: Ctrl+O",
"Ddd*menubar*fileMenu.open_class.documentationString: \
@rm Open a class to be debugged",
"Ddd*menubar*fileMenu.recent.labelString: Open Recent",
"Ddd*menubar*fileMenu.recent.mnemonic: R",
"Ddd*menubar*fileMenu.recent.documentationString: \
@rm Reopen a program to be debugged",
"Ddd*menubar*fileMenu.open_core.labelString: Open Core Dump...",
"Ddd*menubar*fileMenu.open_core.mnemonic: D",
"Ddd*menubar*fileMenu.open_core.documentationString: \
@rm Open a file as core dump for examining memory and registers",
"Ddd*menubar*fileMenu.open_source.labelString: Open Source...",
"Ddd*menubar*fileMenu.open_source.mnemonic: S",
"Ddd*menubar*fileMenu.open_source.documentationString: \
@rm Open a source file in the source window",
"Ddd*menubar*fileMenu.open_session.labelString: Open Session...",
"Ddd*menubar*fileMenu.open_session.mnemonic: n",
"Ddd*menubar*fileMenu.open_session.accelerator: ~Shift Ctrl<Key>N",
"Ddd*menubar*fileMenu.open_session.acceleratorText: Ctrl+N",
"Ddd*menubar*fileMenu.open_session.documentationString: \
@rm Restore a previously saved DDD session",
"Ddd*menubar*fileMenu.save_session.labelString: Save Session As...",
"Ddd*menubar*fileMenu.save_session.accelerator: ~Shift Ctrl<Key>S",
"Ddd*menubar*fileMenu.save_session.acceleratorText: Ctrl+S",
"Ddd*menubar*fileMenu.save_session.mnemonic: v",
"Ddd*menubar*fileMenu.save_session.documentationString: \
@rm Save this DDD session for resuming later",
"Ddd*menubar*fileMenu.attach.labelString: Attach to Process...",
"Ddd*menubar*fileMenu.attach.mnemonic: A",
"Ddd*menubar*fileMenu.attach.documentationString: \
@rm Attach to a process outside of DDD",
"Ddd*menubar*fileMenu.detach.labelString: Detach Process",
"Ddd*menubar*fileMenu.detach.mnemonic: t",
"Ddd*menubar*fileMenu.detach.documentationString:",
"Ddd*menubar*fileMenu.print.labelString: Print Graph...",
"Ddd*menubar*fileMenu.print.mnemonic: P",
"Ddd*menubar*fileMenu.print.accelerator: ~Shift Ctrl<Key>P",
"Ddd*menubar*fileMenu.print.acceleratorText: Ctrl+P",
"Ddd*menubar*fileMenu.print.documentationString: \
@rm Print the contents of the data display",
"Ddd*menubar*fileMenu.printAgain.labelString: Print Again",
"Ddd*menubar*fileMenu.printAgain.mnemonic: g",
"Ddd*menubar*fileMenu.printAgain.documentationString: \
@rm Print the contents of the data display, using previous settings",
"Ddd*menubar*fileMenu.cd.labelString: Change Directory...",
"Ddd*menubar*fileMenu.cd.mnemonic: i",
"Ddd*menubar*fileMenu.cd.documentationString: \
@rm Change the current directory",
"Ddd*menubar*fileMenu.make.labelString: Make...",
"Ddd*menubar*fileMenu.make.mnemonic: M",
"Ddd*menubar*fileMenu.make.accelerator: ~Shift Ctrl<Key>M",
"Ddd*menubar*fileMenu.make.acceleratorText: Ctrl+M",
"Ddd*menubar*fileMenu.make.documentationString: \
@rm Run the make program",
"Ddd*menubar*fileMenu.makeAgain.labelString: Make Again",
"Ddd*menubar*fileMenu.makeAgain.mnemonic: i",
"Ddd*menubar*fileMenu.makeAgain.accelerator: Shift Ctrl<Key>M",
"Ddd*menubar*fileMenu.makeAgain.acceleratorText: Shift+Ctrl+M",
"Ddd*menubar*fileMenu.makeAgain.documentationString: \
@rm Run the make program with the most recently given arguments",
"Ddd*menubar*fileMenu.close.labelString: Close",
"Ddd*menubar*fileMenu.close.mnemonic: C",
"Ddd*menubar*fileMenu.close.accelerator: ~Shift Ctrl<Key>W",
"Ddd*menubar*fileMenu.close.acceleratorText: Ctrl+W",
"Ddd*menubar*fileMenu.close.documentationString: \
@rm Close this window",
"Ddd*menubar*fileMenu.restart.labelString: Restart",
"Ddd*menubar*fileMenu.restart.mnemonic: e",
"Ddd*menubar*fileMenu.restart.accelerator: Shift Ctrl<Key>Q",
"Ddd*menubar*fileMenu.restart.documentationString: \
@rm Close all windows and restart DDD from scratch",
"Ddd*menubar*fileMenu.exit.labelString: Exit",
"Ddd*menubar*fileMenu.exit.mnemonic: x",
"Ddd*menubar*fileMenu.exit.accelerator: ~Shift Ctrl<Key>Q",
"Ddd*menubar*fileMenu.exit.acceleratorText: Ctrl+Q",
"Ddd*menubar*fileMenu.exit.documentationString: \
@rm Close all windows and exit DDD",
"Ddd*menubar*recentMenu.r1.mnemonic: 1",
"Ddd*menubar*recentMenu.r2.mnemonic: 2",
"Ddd*menubar*recentMenu.r3.mnemonic: 3",
"Ddd*menubar*recentMenu.r4.mnemonic: 4",
"Ddd*menubar*recentMenu.r5.mnemonic: 5",
"Ddd*menubar*recentMenu.r6.mnemonic: 6",
"Ddd*menubar*recentMenu.r7.mnemonic: 7",
"Ddd*menubar*recentMenu.r8.mnemonic: 8",
"Ddd*menubar*recentMenu.r9.mnemonic: 9",
"Ddd*menubar*recentMenu*documentationString: ",
"Ddd*menubar.edit.labelString: Edit",
"Ddd*menubar.edit.mnemonic: E",
"Ddd*menubar.edit*documentationString: \
@rm Cut, copy, paste from and to the clipboard",
"Ddd*menubar.edit*helpString: \
@bs Edit Menu@rm\\n\
\\n\
@tt \\267 @bf Undo@rm  @tt -@rm  undo last action.\\n\
@tt \\267 @bf Redo@rm  @tt -@rm  redo next action.\\n\
\\n\
@tt \\267 @bf Cut@rm  @tt -@rm  remove the selected text to the clipboard.\\n\
@tt \\267 @bf Copy@rm  @tt -@rm  copy the selected text to the clipboard\\n\
    without removing the original.\\n\
@tt \\267 @bf Paste@rm  @tt -@rm  paste the clipboard contents into the text.\\n\
@tt \\267 @bf Clear@rm  @tt -@rm  clear argument fields and @GDB@ command line.\\n\
@tt \\267 @bf Delete@rm  @tt -@rm  delete the selected text.\\n\
@tt \\267 @bf Select All@rm  @tt -@rm  select the entire text.\\n\
\\n\
@tt \\267 @bf Preferences...@rm  @tt -@rm  invokes a panel for setting DDD options.\\n\
@tt \\267 @bf @GDB@ Settings...@rm  @tt -@rm  invokes a panel for setting @GDB@ options.\\n\
\\n\
@tt \\267 @bf Save Options@rm  @tt -@rm  if set, options, preferences, and @GDB@ settings\\n\
    are saved across DDD invocations..",
"Ddd*editMenu*helpString: \
@bs Edit Menu@rm\\n\
\\n\
@tt \\267 @bf Undo@rm  @tt -@rm  undo last action.\\n\
@tt \\267 @bf Redo@rm  @tt -@rm  redo next action.\\n\
\\n\
@tt \\267 @bf Cut@rm  @tt -@rm  remove the selected text to the clipboard.\\n\
@tt \\267 @bf Copy@rm  @tt -@rm  copy the selected text to the clipboard\\n\
    without removing the original.\\n\
@tt \\267 @bf Paste@rm  @tt -@rm  paste the clipboard contents into the text.\\n\
@tt \\267 @bf Clear@rm  @tt -@rm  clear argument fields and @GDB@ command line.\\n\
@tt \\267 @bf Delete@rm  @tt -@rm  delete the selected text.\\n\
@tt \\267 @bf Select All@rm  @tt -@rm  select the entire text.\\n\
\\n\
@tt \\267 @bf Preferences...@rm  @tt -@rm  invokes a panel for setting DDD options.\\n\
@tt \\267 @bf @GDB@ Settings...@rm  @tt -@rm  invokes a panel for setting @GDB@ options.\\n\
\\n\
@tt \\267 @bf Save Options@rm  @tt -@rm  if set, options, preferences, and @GDB@ settings\\n\
    are saved across DDD invocations..",
"Ddd*editMenu*tearOffTitle: Edit",
"Ddd*editMenu.undo.labelString: Undo",
"Ddd*editMenu.undo.mnemonic: U",
"Ddd*editMenu.undo.accelerator: Ctrl<Key>Z",
"Ddd*editMenu.undo.acceleratorText: Ctrl+Z",
"Ddd*editMenu.undo.documentationString: \
@rm Undo last action",
"Ddd*editMenu.redo.labelString: Redo",
"Ddd*editMenu.redo.mnemonic: R",
"Ddd*editMenu.redo.accelerator: Ctrl<Key>Y",
"Ddd*editMenu.redo.acceleratorText: Ctrl+Y",
"Ddd*editMenu.redo.documentationString: \
@rm Redo next action",
"Ddd*editMenu.cut.labelString: Cut",
"Ddd*editMenu.cut.mnemonic: t",
"Ddd*editMenu.cut.documentationString: \
@rm Cut the selection and put it on the clipboard",
"Ddd*editMenu.copy.labelString: Copy",
"Ddd*editMenu.copy.mnemonic: C",
"Ddd*editMenu.copy.documentationString: \
@rm Copy the selection and put it on the clipboard",
"Ddd*editMenu.paste.labelString: Paste",
"Ddd*editMenu.paste.mnemonic: P",
"Ddd*editMenu.paste.documentationString: \
@rm Paste clipboard contents",
"Ddd*editMenu.clearAll.labelString: Clear",
"Ddd*editMenu.clearAll.mnemonic: l",
"Ddd*editMenu.clearAll.documentationString: \
@rm Clear the selection, all arguments, and the @GDB@ command line",
"Ddd*editMenu.clearAll.acceleratorText: Ctrl+U",
"Ddd*editMenu.delete.labelString: Delete",
"Ddd*editMenu.delete.mnemonic: D",
"Ddd*editMenu.delete.documentationString: \
@rm Delete current selection",
"Ddd*editMenu.selectAll.labelString: Select All",
"Ddd*editMenu.selectAll.mnemonic: A",
"Ddd*editMenu.selectAll.acceleratorText: Ctrl+A",
"Ddd*editMenu.selectAll.documentationString: \
@rm Select all items",
"Ddd*editMenu.preferences.labelString: Preferences...",
"Ddd*editMenu.preferences.mnemonic: e",
"Ddd*editMenu.preferences.documentationString:\
@rm Modify the DDD configuration",
"Ddd*editMenu.settings.labelString: Settings...",
"Ddd*editMenu.settings.mnemonic: S",
"Ddd*editMenu.settings.documentationString:\
@rm Modify the @GDB@ configuration",
"Ddd*editMenu.saveOptions.labelString: Save Options",
"Ddd*editMenu.saveOptions.mnemonic: O",
"Ddd*editMenu.saveOptions.documentationString:\
@rm If set, preferences and settings are saved across DDD invocations",
"Ddd*menubar.views.labelString: View",
"Ddd*menubar.views.mnemonic: V",
"Ddd*menubar.view*documentationString: \
@rm Open and close DDD windows",
"Ddd*menubar.views.helpString: \
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Command Tool...@rm  @tt -@rm  open and recenter the command tool.\\n\
@tt \\267 @bf Execution Window...@rm  @tt -@rm  open the execution window.\\n\
\\n\
@tt \\267 @bf @GDB@ Console@rm  @tt -@rm  toggle display of debugger console.\\n\
@tt \\267 @bf Source Window@rm  @tt -@rm  toggle display of program source.\\n\
@tt \\267 @bf Data Window@rm  @tt -@rm  toggle display of program data.\\n\
@tt \\267 @bf Machine Code Window@rm  @tt -@rm  toggle display of assembler code.",
"Ddd*viewsMenu*helpString: \
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Command Tool...@rm  @tt -@rm  open and recenter the command tool.\\n\
@tt \\267 @bf Execution Window...@rm  @tt -@rm  open the execution window.\\n\
\\n\
@tt \\267 @bf @GDB@ Console@rm  @tt -@rm  toggle display of debugger console.\\n\
@tt \\267 @bf Source Window@rm  @tt -@rm  toggle display of program source.\\n\
@tt \\267 @bf Data Window@rm  @tt -@rm  toggle display of program data.\\n\
@tt \\267 @bf Machine Code Window@rm  @tt -@rm  toggle display of assembler code.",
"Ddd*viewsMenu*tearOffTitle: View",
"Ddd*viewsMenu.tool.labelString: Command Tool...",
"Ddd*viewsMenu.tool.mnemonic: T",
"Ddd*viewsMenu.tool.acceleratorText: Alt+8",
"Ddd*viewsMenu.tool.accelerator: Meta<Key>8",
"Ddd*viewsMenu.tool.documentationString: \
@rm Open the command tool and move it to its original position",
"Ddd*viewsMenu.exec.labelString: Execution Window...",
"Ddd*viewsMenu.exec.mnemonic: x",
"Ddd*viewsMenu.exec.acceleratorText: Alt+9",
"Ddd*viewsMenu.exec.accelerator: Meta<Key>9",
"Ddd*viewsMenu.exec.documentationString: \
@rm Open the program execution window",
"Ddd*viewsMenu.console.labelString: @GDB@ Console",
"Ddd*viewsMenu.console.mnemonic: C",
"Ddd*viewsMenu.console.acceleratorText: Alt+1",
"Ddd*viewsMenu.console.accelerator: Meta<Key>1",
"Ddd*viewsMenu.console.documentationString: \
@rm Toggle showing the @GDB@ console",
"Ddd*viewsMenu.source.labelString: Source Window",
"Ddd*viewsMenu.source.mnemonic: S",
"Ddd*viewsMenu.source.acceleratorText: Alt+2",
"Ddd*viewsMenu.source.accelerator: Meta<Key>2",
"Ddd*viewsMenu.source.documentationString: \
@rm Toggle showing the source window",
"Ddd*viewsMenu.data.labelString: Data Window",
"Ddd*viewsMenu.data.mnemonic: D",
"Ddd*viewsMenu.data.acceleratorText: Alt+3",
"Ddd*viewsMenu.data.accelerator: Meta<Key>3",
"Ddd*viewsMenu.data.documentationString: \
@rm Toggle showing the data window",
"Ddd*viewsMenu.code.labelString: Machine Code Window",
"Ddd*viewsMenu.code.mnemonic: M",
"Ddd*viewsMenu.code.acceleratorText: Alt+4",
"Ddd*viewsMenu.code.accelerator: Meta<Key>4",
"Ddd*viewsMenu.code.documentationString: \
@rm Toggle showing the machine code window",
"Ddd*menubar.view.labelString: View",
"Ddd*menubar.view.mnemonic: V",
"Ddd*menubar.view*documentationString: \
@rm Open DDD windows",
"Ddd*menubar.view.helpString: \
\
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Command Tool...@rm  @tt -@rm  open and recenter the command tool.\\n\
@tt \\267 @bf Execution Window...@rm  @tt -@rm  open the execution window.\\n\
\\n\
@tt \\267 @bf @GDB@ Console...@rm  @tt -@rm  open the debugger console window.\\n\
@tt \\267 @bf Source Window...@rm  @tt -@rm  open the program source window.\\n\
@tt \\267 @bf Data Window...@rm  @tt -@rm  open the program data window.",
"Ddd*viewMenu*helpString: \
\
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Command Tool...@rm  @tt -@rm  open and recenter the command tool.\\n\
@tt \\267 @bf Execution Window...@rm  @tt -@rm  open the execution window.\\n\
\\n\
@tt \\267 @bf @GDB@ Console...@rm  @tt -@rm  open the debugger console window.\\n\
@tt \\267 @bf Source Window...@rm  @tt -@rm  open the program source window.\\n\
@tt \\267 @bf Data Window...@rm  @tt -@rm  open the program data window.",
"Ddd*viewMenu*tearOffTitle: View",
"Ddd*viewMenu.tool.labelString: Command Tool...",
"Ddd*viewMenu.tool.mnemonic: T",
"Ddd*viewMenu.tool.acceleratorText: Alt+8",
"Ddd*viewMenu.tool.accelerator: Meta<Key>8",
"Ddd*viewMenu.tool.documentationString: \
@rm Open the command tool and move it to its original position",
"Ddd*viewMenu.exec.labelString: Execution Window...",
"Ddd*viewMenu.exec.mnemonic: x",
"Ddd*viewMenu.exec.acceleratorText: Alt+9",
"Ddd*viewMenu.exec.accelerator: Meta<Key>9",
"Ddd*viewMenu.exec.documentationString: \
@rm Open the program execution window",
"Ddd*viewMenu.console.labelString: @GDB@ Console...",
"Ddd*viewMenu.console.mnemonic: C",
"Ddd*viewMenu.console.acceleratorText: Alt+1",
"Ddd*viewMenu.console.accelerator: Meta<Key>1",
"Ddd*viewMenu.console.documentationString: \
@rm Open the @GDB@ console",
"Ddd*viewMenu.source.labelString: Source Window...",
"Ddd*viewMenu.source.mnemonic: S",
"Ddd*viewMenu.source.acceleratorText: Alt+2",
"Ddd*viewMenu.source.accelerator: Meta<Key>2",
"Ddd*viewMenu.source.documentationString: \
@rm Open the source window",
"Ddd*viewMenu.data.labelString: Data Window...",
"Ddd*viewMenu.data.mnemonic: D",
"Ddd*viewMenu.data.acceleratorText: Alt+3",
"Ddd*viewMenu.data.accelerator: Meta<Key>3",
"Ddd*viewMenu.data.documentationString: \
@rm Open the data window",
"Ddd*menubar.program.labelString: Program",
"Ddd*menubar.program.mnemonic: P",
"Ddd*menubar.program*documentationString: \
@rm Control the execution of the debugged program",
"Ddd*menubar.program*helpString: \
\
@bs Program Menu@rm\\n\
\\n\
@tt \\267 @bf Run...@rm  @tt -@rm  start the debugged program.\\n\
@tt \\267 @bf Run Again@rm  @tt -@rm  run with current arguments.\\n\
\\n\
@tt \\267 @rm If @bf Run in Execution Window@rm  is set, \
the program is run in a separate\\n\
    terminal window; useful for programs using terminal I/O.  Otherwise,\\n\
    the program is run in the @GDB@ console window.\\n\
    This change takes effect the next time the program is run.\\n\
\\n\
@tt \\267 @bf Step@rm  @tt -@rm  step program until it reaches a different source line.\\n\
@tt \\267 @bf Step Instruction@rm  @tt -@rm  step exactly one machine instruction.\\n\
@tt \\267 @bf Next@rm  @tt -@rm  step program, but proceed through subroutine calls.\\n\
@tt \\267 @bf Next Instruction@rm  @tt -@rm  step instruction, \
but proceed through subroutine calls.\\n\
@tt \\267 @bf Until@rm  @tt -@rm  execute until program reaches a line after the current.\\n\
@tt \\267 @bf Finish@rm  @tt -@rm  execute until function returns.\\n\
\\n\
@tt \\267 @bf Continue@rm  @tt -@rm  continue program after signal or breakpoint.\\n\
@tt \\267 @bf Continue Without Signal@rm  @tt -@rm  continue, but don\'t give a signal.\\n\
\\n\
@tt \\267 @bf Kill@rm  @tt -@rm  kill execution of program being debugged.\\n\
@tt \\267 @bf Interrupt@rm  @tt -@rm  interrupt program (or current @GDB@ command).\\n\
@tt \\267 @bf Abort@rm  @tt -@rm  abort program (or current @GDB@ command).",
"Ddd*programMenu*helpString: \
\
@bs Program Menu@rm\\n\
\\n\
@tt \\267 @bf Run...@rm  @tt -@rm  start the debugged program.\\n\
@tt \\267 @bf Run Again@rm  @tt -@rm  run with current arguments.\\n\
\\n\
@tt \\267 @rm If @bf Run in Execution Window@rm  is set, \
the program is run in a separate\\n\
    terminal window; useful for programs using terminal I/O.  Otherwise,\\n\
    the program is run in the @GDB@ console window.\\n\
    This change takes effect the next time the program is run.\\n\
\\n\
@tt \\267 @bf Step@rm  @tt -@rm  step program until it reaches a different source line.\\n\
@tt \\267 @bf Step Instruction@rm  @tt -@rm  step exactly one machine instruction.\\n\
@tt \\267 @bf Next@rm  @tt -@rm  step program, but proceed through subroutine calls.\\n\
@tt \\267 @bf Next Instruction@rm  @tt -@rm  step instruction, \
but proceed through subroutine calls.\\n\
@tt \\267 @bf Until@rm  @tt -@rm  execute until program reaches a line after the current.\\n\
@tt \\267 @bf Finish@rm  @tt -@rm  execute until function returns.\\n\
\\n\
@tt \\267 @bf Continue@rm  @tt -@rm  continue program after signal or breakpoint.\\n\
@tt \\267 @bf Continue Without Signal@rm  @tt -@rm  continue, but don\'t give a signal.\\n\
\\n\
@tt \\267 @bf Kill@rm  @tt -@rm  kill execution of program being debugged.\\n\
@tt \\267 @bf Interrupt@rm  @tt -@rm  interrupt program (or current @GDB@ command).\\n\
@tt \\267 @bf Abort@rm  @tt -@rm  abort program (or current @GDB@ command).",
"Ddd*programMenu*tearOffTitle: Program",
"Ddd*menubar*programMenu.run.labelString: Run...",
"Ddd*menubar*programMenu.run.mnemonic: R",
"Ddd*menubar*programMenu.run.accelerator: <Key>F2",
"Ddd*menubar*programMenu.run.acceleratorText: F2",
"Ddd*menubar*programMenu.run.documentationString: \
@rm Start debugged program.  You may specify arguments to give it.",
"Ddd*menubar*programMenu.run_again.labelString: Run Again",
"Ddd*menubar*programMenu.run_again.mnemonic: A",
"Ddd*menubar*programMenu.run_again.accelerator: <Key>F3",
"Ddd*menubar*programMenu.run_again.acceleratorText: F3",
"Ddd*menubar*programMenu.run_again.documentationString: \
@rm Restart debugged program, using the previous arguments.",
"Ddd*menubar*programMenu.separateExecWindow.labelString: Run in Execution Window",
"Ddd*menubar*programMenu.separateExecWindow.mnemonic: E",
"Ddd*menubar*programMenu.separateExecWindow.documentationString:\
@rm Toggle execution of debugged program in separate window",
"Ddd*menubar*programMenu.step.labelString: Step",
"Ddd*menubar*programMenu.step.mnemonic: S",
"Ddd*menubar*programMenu.step.accelerator: ~Shift<Key>F5",
"Ddd*menubar*programMenu.step.acceleratorText: F5",
"Ddd*menubar*programMenu.step.documentationString:",
"Ddd*menubar*programMenu.stepi.labelString: Step Instruction",
"Ddd*menubar*programMenu.stepi.mnemonic: I",
"Ddd*menubar*programMenu.stepi.accelerator: Shift<Key>F5",
"Ddd*menubar*programMenu.stepi.acceleratorText: Shift+F5",
"Ddd*menubar*programMenu.stepi.documentationString:",
"Ddd*menubar*programMenu.next.labelString: Next",
"Ddd*menubar*programMenu.next.mnemonic: N",
"Ddd*menubar*programMenu.next.accelerator: ~Shift<Key>F6",
"Ddd*menubar*programMenu.next.acceleratorText: F6",
"Ddd*menubar*programMenu.next.documentationString:",
"Ddd*menubar*programMenu.nexti.labelString: Next Instruction",
"Ddd*menubar*programMenu.nexti.mnemonic: x",
"Ddd*menubar*programMenu.nexti.accelerator: Shift<Key>F6",
"Ddd*menubar*programMenu.nexti.acceleratorText: Shift+F6",
"Ddd*menubar*programMenu.nexti.documentationString:",
"Ddd*menubar*programMenu.until.labelString: Until",
"Ddd*menubar*programMenu.until.mnemonic: U",
"Ddd*menubar*programMenu.until.accelerator: <Key>F7",
"Ddd*menubar*programMenu.until.acceleratorText: F7",
"Ddd*menubar*programMenu.until.documentationString:",
"Ddd*menubar*programMenu.finish.labelString: Finish",
"Ddd*menubar*programMenu.finish.mnemonic: F",
"Ddd*menubar*programMenu.finish.accelerator: <Key>F8",
"Ddd*menubar*programMenu.finish.acceleratorText: F8",
"Ddd*menubar*programMenu.finish.documentationString:",
"Ddd*menubar*programMenu.cont.labelString: Continue",
"Ddd*menubar*programMenu.cont.mnemonic: C",
"Ddd*menubar*programMenu.cont.accelerator: ~Shift<Key>F9",
"Ddd*menubar*programMenu.cont.acceleratorText: F9",
"Ddd*menubar*programMenu.cont.documentationString:",
"Ddd*menubar*programMenu.signal0.labelString: Continue Without Signal",
"Ddd*menubar*programMenu.signal0.mnemonic: t",
"Ddd*menubar*programMenu.signal0.accelerator: Shift<Key>F9",
"Ddd*menubar*programMenu.signal0.acceleratorText: Shift+F9",
"Ddd*menubar*programMenu.signal0.documentationString: \
@rm Continue program without giving it a signal.",
"Ddd*menubar*programMenu.kill.labelString: Kill",
"Ddd*menubar*programMenu.kill.mnemonic: K",
"Ddd*menubar*programMenu.kill.accelerator: <Key>F4",
"Ddd*menubar*programMenu.kill.acceleratorText: F4",
"Ddd*menubar*programMenu.kill.documentationString:",
"Ddd*menubar*programMenu.break.labelString: Interrupt",
"Ddd*menubar*programMenu.break.mnemonic: p",
"Ddd*menubar*programMenu.break.acceleratorText: Esc",
"Ddd*menubar*programMenu.break.documentationString: \
@rm Interrupt program (or current @GDB@ command)",
"Ddd*menubar*programMenu.quit.labelString: Abort",
"Ddd*menubar*programMenu.quit.mnemonic: b",
"Ddd*menubar*programMenu.quit.accelerator: Ctrl<Key>\\\\ ",
"Ddd*menubar*programMenu.quit.acceleratorText: Ctrl+\\\\ ",
"Ddd*menubar*programMenu.quit.documentationString: \
@rm Abort program (or current @GDB@ command)",
"Ddd*menubar.commands.labelString: Commands",
"Ddd*menubar.commands.mnemonic: C",
"Ddd*menubar.commands*documentationString: \
@rm Enter and modify @GDB@ commands",
"Ddd*menubar.commands*helpString: \
\
@bs Commands Menu@rm\\n\
\\n\
@tt \\267 @bf Command History...@rm  @tt -@rm  show all previous commands.\\n\
\\n\
@tt \\267 @bf Previous@rm  @tt -@rm  show the previous command.\\n\
@tt \\267 @bf Next@rm  @tt -@rm  show the next command.\\n\
\\n\
@tt \\267 @bf Search Previous@rm  @tt -@rm  do incremental search forward.\\n\
@tt \\267 @bf Search Next@rm  @tt -@rm  do incremental search backward.\\n\
@tt \\267 @bf Quit Search@rm  @tt -@rm  quit incremental search.\\n\
\\n\
@tt \\267 @bf Complete@rm  @tt -@rm  complete the current command.\\n\
@tt \\267 @bf Apply@rm  @tt -@rm  execute the current command.\\n\
\\n\
@tt \\267 @bf Clear Line@rm  @tt -@rm  clear @GDB@ command line.\\n\
@tt \\267 @bf Clear Window@rm  @tt -@rm  clear all before last @GDB@ prompt.\\n\
\\n\
@tt \\267 @bf Define Command...@rm  @tt -@rm  define @GDB@ command.\\n\
@tt \\267 @bf Edit Buttons...@rm  @tt -@rm  edit command buttons.",
"Ddd*commandsMenu*helpString: \
\
@bs Commands Menu@rm\\n\
\\n\
@tt \\267 @bf Command History...@rm  @tt -@rm  show all previous commands.\\n\
\\n\
@tt \\267 @bf Previous@rm  @tt -@rm  show the previous command.\\n\
@tt \\267 @bf Next@rm  @tt -@rm  show the next command.\\n\
\\n\
@tt \\267 @bf Search Previous@rm  @tt -@rm  do incremental search forward.\\n\
@tt \\267 @bf Search Next@rm  @tt -@rm  do incremental search backward.\\n\
@tt \\267 @bf Quit Search@rm  @tt -@rm  quit incremental search.\\n\
\\n\
@tt \\267 @bf Complete@rm  @tt -@rm  complete the current command.\\n\
@tt \\267 @bf Apply@rm  @tt -@rm  execute the current command.\\n\
\\n\
@tt \\267 @bf Clear Line@rm  @tt -@rm  clear @GDB@ command line.\\n\
@tt \\267 @bf Clear Window@rm  @tt -@rm  clear all before last @GDB@ prompt.\\n\
\\n\
@tt \\267 @bf Define Command...@rm  @tt -@rm  define @GDB@ command.\\n\
@tt \\267 @bf Edit Buttons...@rm  @tt -@rm  edit command buttons.",
"Ddd*commandsMenu*tearOffTitle: Commands",
"Ddd*commandsMenu.history.labelString: Command History...",
"Ddd*commandsMenu.history.mnemonic: H",
"Ddd*commandsMenu.history.documentationString: \
@rm Show previous commands",
"Ddd*commandsMenu.prev.labelString: Previous",
"Ddd*commandsMenu.prev.mnemonic: P",
"Ddd*commandsMenu.prev.acceleratorText: Up",
"Ddd*commandsMenu.prev.documentationString: \
@rm Get previous command",
"Ddd*commandsMenu.next.labelString: Next",
"Ddd*commandsMenu.next.mnemonic: N",
"Ddd*commandsMenu.next.acceleratorText: Down",
"Ddd*commandsMenu.next.documentationString: \
@rm Get next command",
"Ddd*commandsMenu.complete.labelString: Complete",
"Ddd*commandsMenu.complete.mnemonic: C",
"Ddd*commandsMenu.complete.acceleratorText: Tab",
"Ddd*commandsMenu.complete.documentationString: \
@rm Complete current command",
"Ddd*commandsMenu.apply.labelString: Apply",
"Ddd*commandsMenu.apply.mnemonic: A",
"Ddd*commandsMenu.apply.acceleratorText: Return",
"Ddd*commandsMenu.apply.documentationString: \
@rm Execute current command",
"Ddd*commandsMenu.isearch_prev.labelString: Find Backward",
"Ddd*commandsMenu.isearch_prev.mnemonic: B",
"Ddd*commandsMenu.isearch_prev.acceleratorText: Ctrl+B",
"Ddd*commandsMenu.isearch_prev.documentationString: \
@rm Do incremental search backward in command history",
"Ddd*commandsMenu.isearch_next.labelString: Find Forward",
"Ddd*commandsMenu.isearch_next.mnemonic: F",
"Ddd*commandsMenu.isearch_next.acceleratorText: Ctrl+F",
"Ddd*commandsMenu.isearch_next.documentationString: \
@rm Do incremental search forward in command history",
"Ddd*commandsMenu.isearch_exit.labelString: Quit Search",
"Ddd*commandsMenu.isearch_exit.mnemonic: Q",
"Ddd*commandsMenu.isearch_exit.acceleratorText: Esc",
"Ddd*commandsMenu.isearch_exit.documentationString: \
@rm Quit incremental search",
"Ddd*commandsMenu.clear_line.labelString: Clear Line",
"Ddd*commandsMenu.clear_line.mnemonic: L",
"Ddd*commandsMenu.clear_line.acceleratorText: Ctrl+U",
"Ddd*commandsMenu.clear_line.documentationString: \
@rm Clear @GDB@ command line",
"Ddd*commandsMenu.clear_window.labelString: Clear Window",
"Ddd*commandsMenu.clear_window.mnemonic: W",
"Ddd*commandsMenu.clear_window.accelerator: ~Meta Shift Ctrl<Key>U",
"Ddd*commandsMenu.clear_window.acceleratorText: Shift+Ctrl+U",
"Ddd*commandsMenu.clear_window.documentationString: \
@rm Clear all before last @GDB@ prompt",
"Ddd*commandsMenu.define.labelString: Define Command...",
"Ddd*commandsMenu.define.mnemonic: D",
"Ddd*commandsMenu.define.documentationString: \
@rm Define @GDB@ command",
"Ddd*commandsMenu.buttons.labelString: Edit Buttons...",
"Ddd*commandsMenu.buttons.mnemonic: u",
"Ddd*commandsMenu.buttons.documentationString: \
@rm Edit command buttons",
"Ddd*menubar.stack.labelString: Status",
"Ddd*menubar.stack.mnemonic: t",
"Ddd*menubar.stack*documentationString: \
@rm Show the current program state",
"Ddd*menubar.stack.helpString: \
\
@bs Status Menu@rm\\n\
\\n\
@tt \\267 @bf Backtrace...@rm  @tt -@rm  give a summary of how your program got where it is.\\n\
@tt \\267 @bf Registers...@rm  @tt -@rm  show current processor registers.\\n\
@tt \\267 @bf Threads...@rm  @tt -@rm  show current program threads.\\n\
@tt \\267 @bf Signals...@rm  @tt -@rm  show current signal handling.\\n\
\\n\
@tt \\267 @bf Up@rm  @tt -@rm  show the function that called the current one.\\n\
@tt \\267 @bf Down@rm  @tt -@rm  show the function that was called by the current one.",
"Ddd*stackMenu*helpString: \
\
@bs Status Menu@rm\\n\
\\n\
@tt \\267 @bf Backtrace...@rm  @tt -@rm  give a summary of how your program got where it is.\\n\
@tt \\267 @bf Registers...@rm  @tt -@rm  show current processor registers.\\n\
@tt \\267 @bf Threads...@rm  @tt -@rm  show current program threads.\\n\
@tt \\267 @bf Signals...@rm  @tt -@rm  show current signal handling.\\n\
\\n\
@tt \\267 @bf Up@rm  @tt -@rm  show the function that called the current one.\\n\
@tt \\267 @bf Down@rm  @tt -@rm  show the function that was called by the current one.",
"Ddd*stackMenu*tearOffTitle: Status",
"Ddd*stackMenu.stack.labelString: Backtrace...",
"Ddd*stackMenu.stack.mnemonic: B",
"Ddd*stackMenu.stack.documentationString: \
@rm Give a summary of how the debugged program got where it is",
"Ddd*stackMenu.registers.labelString: Registers...",
"Ddd*stackMenu.registers.mnemonic: R",
"Ddd*stackMenu.registers.documentationString: \
@rm Show registers and their contents",
"Ddd*stackMenu.threads.labelString: Threads...",
"Ddd*stackMenu.threads.mnemonic: T",
"Ddd*stackMenu.threads.documentationString: \
@rm Show and select current program threads",
"Ddd*stackMenu.signals.labelString: Signals...",
"Ddd*stackMenu.signals.mnemonic: S",
"Ddd*stackMenu.signals.documentationString: \
@rm Show and edit current signal handling",
"Ddd*stackMenu.up.labelString: Up",
"Ddd*stackMenu.up.mnemonic: U",
"Ddd*stackMenu.up.accelerator: Ctrl<Key>Up",
"Ddd*stackMenu.up.acceleratorText: Ctrl+Up",
"Ddd*stackMenu.up.documentationString: \
@rm Show the function that called the current one",
"Ddd*stackMenu.down.labelString: Down",
"Ddd*stackMenu.down.mnemonic: D",
"Ddd*stackMenu.down.accelerator: Ctrl<Key>Down",
"Ddd*stackMenu.down.acceleratorText: Ctrl+Down",
"Ddd*stackMenu.down.documentationString: \
@rm Show the function that was called by the current one",
"Ddd*menubar.source.labelString: Source",
"Ddd*menubar.source.mnemonic: S",
"Ddd*menubar.source*documentationString: \
@rm Set and edit breakpoints in source files",
"Ddd*menubar.source.helpString: \
\
@bs Source Menu@rm\\n\
\\n\
@tt \\267 @bf Breakpoints...@rm  @tt -@rm  set, view, and edit breakpoints.\\n\
\\n\
@tt \\267 @bf Lookup ()@rm  @tt -@rm  lookup @bf ()@rm  in the source.\\n\
@tt \\267 @bf @charset Find@small>> @charset()@rm @rm  @tt -@rm  find next occurrence of @bf ()@rm .\\n\
@tt \\267 @bf @charset Find@small<< @charset()@rm @rm  @tt -@rm  find previous occurrence of @bf ()@rm .\\n\
\\n\
@tt \\267 @rm @bf Find Words Only@rm  enables finding complete words only.\\n\
    If unset, arbitrary occurrences are found.\\n\
@tt \\267 @rm @bf Find Case Sensitive@rm  enables case-sensitive search.\\n\
    If unset, occurrences are found regardless of case.\\n\
\\n\
@tt \\267 @bf Display Line Numbers@rm  @tt -@rm  enable numbered source lines.\\n\
@tt \\267 @bf Display Machine Code@rm  @tt -@rm  enable disassembling of the current function.\\n\
\\n\
@tt \\267 @bf Edit Source...@rm  @tt -@rm  invoke text editor for current source.\\n\
@tt \\267 @bf Reload Source @rm  @tt -@rm  reload current source file.",
"Ddd*sourceMenu.helpString: \
\
@bs Source Menu@rm\\n\
\\n\
@tt \\267 @bf Breakpoints...@rm  @tt -@rm  set, view, and edit breakpoints.\\n\
\\n\
@tt \\267 @bf Lookup ()@rm  @tt -@rm  lookup @bf ()@rm  in the source.\\n\
@tt \\267 @bf @charset Find@small>> @charset()@rm @rm  @tt -@rm  find next occurrence of @bf ()@rm .\\n\
@tt \\267 @bf @charset Find@small<< @charset()@rm @rm  @tt -@rm  find previous occurrence of @bf ()@rm .\\n\
\\n\
@tt \\267 @rm @bf Find Words Only@rm  enables finding complete words only.\\n\
    If unset, arbitrary occurrences are found.\\n\
@tt \\267 @rm @bf Find Case Sensitive@rm  enables case-sensitive search.\\n\
    If unset, occurrences are found regardless of case.\\n\
\\n\
@tt \\267 @bf Display Line Numbers@rm  @tt -@rm  enable numbered source lines.\\n\
@tt \\267 @bf Display Machine Code@rm  @tt -@rm  enable disassembling of the current function.\\n\
\\n\
@tt \\267 @bf Edit Source...@rm  @tt -@rm  invoke text editor for current source.\\n\
@tt \\267 @bf Reload Source @rm  @tt -@rm  reload current source file.",
"Ddd*sourceMenu.breakpoints.labelString: Breakpoints...",
"Ddd*sourceMenu.breakpoints.mnemonic: B",
"Ddd*sourceMenu.breakpoints.documentationString: \
@rm Set, view, and edit breakpoints",
"Ddd*sourceMenu.lookup.labelString: Lookup ()",
"Ddd*sourceMenu.lookup.mnemonic: L",
"Ddd*sourceMenu.lookup.accelerator: Ctrl<Key>slash",
"Ddd*sourceMenu.lookup.acceleratorText: Ctrl+/",
"Ddd*sourceMenu.lookup.documentationString:\
@rm Lookup @bf ()@rm  in the source",
"Ddd*sourceMenu.findForward.labelString: @charset Find@small>> @charset()@rm ",
"Ddd*sourceMenu.findForward.accelerator: Ctrl<Key>period",
"Ddd*sourceMenu.findForward.acceleratorText: Ctrl+.",
"Ddd*sourceMenu.findForward.documentationString:\
@rm Search the next occurrence of @bf ()@rm ",
"Ddd*sourceMenu.findBackward.labelString: @charset Find@small<< @charset()@rm ",
"Ddd*sourceMenu.findBackward.accelerator: Ctrl<Key>comma",
"Ddd*sourceMenu.findBackward.acceleratorText: Ctrl+,",
"Ddd*sourceMenu.findBackward.documentationString:\
@rm Search the previous occurrence of @bf ()@rm ",
"Ddd*sourceMenu.findWordsOnly.labelString: Find Words Only",
"Ddd*sourceMenu.findWordsOnly.mnemonic: W",
"Ddd*sourceMenu.findWordsOnly.accelerator: Meta<Key>W",
"Ddd*sourceMenu.findWordsOnly.acceleratorText: Alt+W",
"Ddd*sourceMenu.findWordsOnly.documentationString:\
@rm Switch between finding complete words and finding arbitrary occurrences",
"Ddd*sourceMenu.findCaseSensitive.labelString: Find Case Sensitive",
"Ddd*sourceMenu.findCaseSensitive.mnemonic: i",
"Ddd*sourceMenu.findCaseSensitive.accelerator: Meta<Key>I",
"Ddd*sourceMenu.findCaseSensitive.acceleratorText: Alt+I",
"Ddd*sourceMenu.findCaseSensitive.documentationString:\
@rm Toggle case-sensitive search",
"Ddd*sourceMenu.disassemble.labelString: Display Machine Code",
"Ddd*sourceMenu.disassemble.mnemonic: M",
"Ddd*sourceMenu.disassemble.accelerator: Meta<Key>4",
"Ddd*sourceMenu.disassemble.acceleratorText: Alt+4",
"Ddd*sourceMenu.disassemble.documentationString:\
@rm Toggle display of machine code window",
"Ddd*sourceMenu.lineNumbers.labelString: Display Line Numbers",
"Ddd*sourceMenu.lineNumbers.mnemonic: N",
"Ddd*sourceMenu.lineNumbers.accelerator: Meta<Key>N",
"Ddd*sourceMenu.lineNumbers.acceleratorText: Alt+N",
"Ddd*sourceMenu.lineNumbers.documentationString:\
@rm Toggle displaying source line numbers",
"Ddd*sourceMenu.edit.labelString: Edit Source...",
"Ddd*sourceMenu.edit.mnemonic: E",
"Ddd*sourceMenu.edit.accelerator: ~Meta Shift Ctrl<Key>V",
"Ddd*sourceMenu.edit.acceleratorText: Shift+Ctrl+V",
"Ddd*sourceMenu.edit.documentationString: \
@rm Invoke text editor for the current source",
"Ddd*sourceMenu.reload.labelString: Reload Source",
"Ddd*sourceMenu.reload.mnemonic: R",
"Ddd*sourceMenu.reload.accelerator: ~Meta Shift Ctrl<Key>L",
"Ddd*sourceMenu.reload.acceleratorText: Shift+Ctrl+L",
"Ddd*sourceMenu.reload.documentationString: \
@rm Reload current source file",
"Ddd*menubar.data.labelString: Data",
"Ddd*menubar.data.mnemonic: D",
"Ddd*menubar.data*documentationString: \
@rm Create and modify data displays",
"Ddd*menubar.data*helpString: \
\
@bs Data Menu@rm\\n\
\\n\
@tt \\267 @bf Displays...@rm  @tt -@rm  select, enable and delete data displays.\\n\
@tt \\267 @bf Themes...@rm  @tt -@rm  customize data displays.\\n\
@tt \\267 @bf Watchpoints...@rm  @tt -@rm  set, view, and edit watchpoints.\\n\
@tt \\267 @bf Examine Memory...@rm  @tt -@rm  examine memory in any of several formats.\\n\
\\n\
@tt \\267 @bf Print ()@rm  @tt -@rm  print @bf ()@rm  in @GDB@ console.\\n\
@tt \\267 @bf Display ()@rm  @tt -@rm  display @bf ()@rm  in data window.\\n\
\\n\
@tt \\267 @bf Detect Aliases@rm  @tt -@rm  toggle alias detection.\\n\
\\n\
@tt \\267 @bf Display Local Variables@rm  @tt -@rm  show current local variables.\\n\
@tt \\267 @bf Display Arguments@rm  @tt -@rm  show current argument variables.\\n\
@tt \\267 @bf Status Displays...@rm  @tt -@rm  show other things about the debugged program.\\n\
\\n\
@tt \\267 @bf Align on Grid@rm  @tt -@rm  align all displays on the next grid point.\\n\
@tt \\267 @bf Rotate Graph@rm  @tt -@rm  rotate the graph clockwise by 90 degrees.\\n\
@tt \\267 @bf Layout Graph@rm  @tt -@rm  layout the graph.\\n\
\\n\
@tt \\267 @bf Refresh@rm  @tt -@rm  update all displays.",
"Ddd*dataMenu*helpString: \
\
@bs Data Menu@rm\\n\
\\n\
@tt \\267 @bf Displays...@rm  @tt -@rm  select, enable and delete data displays.\\n\
@tt \\267 @bf Themes...@rm  @tt -@rm  customize data displays.\\n\
@tt \\267 @bf Watchpoints...@rm  @tt -@rm  set, view, and edit watchpoints.\\n\
@tt \\267 @bf Examine Memory...@rm  @tt -@rm  examine memory in any of several formats.\\n\
\\n\
@tt \\267 @bf Print ()@rm  @tt -@rm  print @bf ()@rm  in @GDB@ console.\\n\
@tt \\267 @bf Display ()@rm  @tt -@rm  display @bf ()@rm  in data window.\\n\
\\n\
@tt \\267 @bf Detect Aliases@rm  @tt -@rm  toggle alias detection.\\n\
\\n\
@tt \\267 @bf Display Local Variables@rm  @tt -@rm  show current local variables.\\n\
@tt \\267 @bf Display Arguments@rm  @tt -@rm  show current argument variables.\\n\
@tt \\267 @bf Status Displays...@rm  @tt -@rm  show other things about the debugged program.\\n\
\\n\
@tt \\267 @bf Align on Grid@rm  @tt -@rm  align all displays on the next grid point.\\n\
@tt \\267 @bf Rotate Graph@rm  @tt -@rm  rotate the graph clockwise by 90 degrees.\\n\
@tt \\267 @bf Layout Graph@rm  @tt -@rm  layout the graph.\\n\
\\n\
@tt \\267 @bf Refresh@rm  @tt -@rm  update all displays.",
"Ddd*dataMenu*tearOffTitle: Data",
"Ddd*dataMenu.displays.labelString: Displays...",
"Ddd*dataMenu.displays.mnemonic: D",
"Ddd*dataMenu.displays.documentationString: \
@rm Select, enable and delete data displays",
"Ddd*dataMenu.themes.labelString: Themes...",
"Ddd*dataMenu.themes.mnemonic: T",
"Ddd*dataMenu.themes.documentationString: \
@rm Customize data displays",
"Ddd*dataMenu.watchpoints.labelString: Watchpoints...",
"Ddd*dataMenu.watchpoints.mnemonic: W",
"Ddd*dataMenu.watchpoints.documentationString: \
@rm Set, view, and edit watchpoints",
"Ddd*dataMenu.examine.labelString: Memory...",
"Ddd*dataMenu.examine.mnemonic: M",
"Ddd*dataMenu.examine.documentationString: \
@rm Examine memory in any of several formats",
"Ddd*dataMenu.print.labelString: Print ()",
"Ddd*dataMenu.print.mnemonic: P",
"Ddd*dataMenu.print.accelerator: Ctrl<Key>equal",
"Ddd*dataMenu.print.acceleratorText: Ctrl+=",
"Ddd*dataMenu.print.documentationString: \
@rm Print the argument @bf ()@rm  in the @GDB@ console",
"Ddd*dataMenu.display.labelString: Display ()",
"Ddd*dataMenu.display.mnemonic: i",
"Ddd*dataMenu.display.accelerator: Ctrl<Key>minus",
"Ddd*dataMenu.display.acceleratorText: Ctrl+-",
"Ddd*dataMenu.display.documentationString: \
@rm Display the argument @bf ()@rm  in the data window",
"Ddd*dataMenu.detectAliases.labelString: Detect Aliases",
"Ddd*dataMenu.detectAliases.mnemonic: A",
"Ddd*dataMenu.detectAliases.accelerator: Meta<Key>A",
"Ddd*dataMenu.detectAliases.acceleratorText: Alt+A",
"Ddd*dataMenu.detectAliases.documentationString: \
@rm Detect aliases (shared data structures)",
"Ddd*dataMenu.info locals.labelString: Display Local Variables",
"Ddd*dataMenu.info locals.mnemonic: L",
"Ddd*dataMenu.info locals.accelerator: Meta<Key>L",
"Ddd*dataMenu.info locals.acceleratorText: Alt+L",
"Ddd*dataMenu.info locals.documentationString: \
@rm Display the local variables of the current stack frame",
"Ddd*dataMenu.info args.labelString: Display Arguments",
"Ddd*dataMenu.info args.mnemonic: u",
"Ddd*dataMenu.info args.accelerator: Meta<Key>U",
"Ddd*dataMenu.info args.acceleratorText: Alt+U",
"Ddd*dataMenu.info args.documentationString: \
@rm Display the argument variables of the current stack frame",
"Ddd*dataMenu.dump.labelString: Display Local Variables",
"Ddd*dataMenu.dump.mnemonic: L",
"Ddd*dataMenu.dump.accelerator: Meta<Key>L",
"Ddd*dataMenu.dump.acceleratorText: Alt+L",
"Ddd*dataMenu.dump.documentationString: \
@rm Display all local variables of the current stack frame",
"Ddd*dataMenu.l.labelString: Display Local Variables",
"Ddd*dataMenu.l.mnemonic: L",
"Ddd*dataMenu.l.accelerator: Meta<Key>L",
"Ddd*dataMenu.l.acceleratorText: Alt+L",
"Ddd*dataMenu.l.documentationString: \
@rm Display all local variables of the current stack frame",
"Ddd*dataMenu.locals.labelString: Display Local Variables",
"Ddd*dataMenu.locals.mnemonic: L",
"Ddd*dataMenu.locals.accelerator: Meta<Key>L",
"Ddd*dataMenu.locals.acceleratorText: Alt+L",
"Ddd*dataMenu.locals.documentationString: \
@rm Display all local variables of the current stack frame",
"Ddd*dataMenu.infos.labelString: Status Displays...",
"Ddd*dataMenu.infos.mnemonic: S",
"Ddd*dataMenu.infos.documentationString: \
@rm Show various things about the program being debugged",
"Ddd*dataMenu.align.labelString: Align on Grid",
"Ddd*dataMenu.align.mnemonic: G",
"Ddd*dataMenu.align.accelerator: Meta<Key>G",
"Ddd*dataMenu.align.acceleratorText: Alt+G",
"Ddd*dataMenu.align.documentationString: \
@rm Align all displays on the next grid point",
"Ddd*dataMenu.rotate.labelString: Rotate Graph",
"Ddd*dataMenu.rotate.mnemonic: R",
"Ddd*dataMenu.rotate.accelerator: Meta<Key>R",
"Ddd*dataMenu.rotate.acceleratorText: Alt+R",
"Ddd*dataMenu.rotate.documentationString: \
@rm Rotate the graph clockwise by 90 degrees",
"Ddd*dataMenu.layout.labelString: Layout Graph",
"Ddd*dataMenu.layout.mnemonic: y",
"Ddd*dataMenu.layout.accelerator: Meta<Key>Y",
"Ddd*dataMenu.layout.acceleratorText: Alt+Y",
"Ddd*dataMenu.layout.documentationString: \
@rm Layout the graph",
"Ddd*dataMenu.refresh.labelString: Refresh",
"Ddd*dataMenu.refresh.mnemonic: f",
"Ddd*dataMenu.refresh.accelerator: ~Shift ~Meta Ctrl<Key>L",
"Ddd*dataMenu.refresh.acceleratorText: Ctrl+L",
"Ddd*dataMenu.refresh.documentationString: \
@rm Redraw all displays, using current values",
"Ddd*menubar.maintenance.labelString: Maintenance",
"Ddd*menubar.maintenance.mnemonic: M",
"Ddd*menubar.maintenance*documentationString: \
@rm Debug DDD",
"Ddd*menubar.maintenance*helpString: \
\
@bs Maintenance Menu@rm\\n\
\\n\
This menu is for DDD maintenance only.\\n\
It becomes active when DDD gets a fatal signal.\\n\
\\n\
@tt \\267 @bf Debug DDD...@rm  @tt -@rm  invoke a debugger on this DDD instance.\\n\
@tt \\267 @bf Dump Core@rm  @tt -@rm  dump core now.\\n\
@tt \\267 @bf Tic Tac Toe...@rm  @tt -@rm  play Tic Tac Toe against DDD.\\n\
\\n\
@tt \\267 @bf When DDD Crashes@rm  @tt -@rm  what to do when DDD crashes.\\n\
\\n\
@tt \\267 @bf Remove Menu@rm  @tt -@rm  remove this menu.",
"Ddd*maintenanceMenu*helpString: \
\
@bs Maintenance Menu@rm\\n\
\\n\
This menu is for DDD maintenance only.\\n\
It becomes active when DDD gets a fatal signal.\\n\
\\n\
@tt \\267 @bf Debug DDD...@rm  @tt -@rm  invoke a debugger on this DDD instance.\\n\
@tt \\267 @bf Dump Core@rm  @tt -@rm  dump core now.\\n\
@tt \\267 @bf Tic Tac Toe...@rm  @tt -@rm  play Tic Tac Toe against DDD.\\n\
\\n\
@tt \\267 @bf When DDD Crashes@rm  @tt -@rm  what to do when DDD crashes.\\n\
\\n\
@tt \\267 @bf Remove Menu@rm  @tt -@rm  remove this menu.",
"Ddd*maintenanceMenu*tearOffTitle: Maintenance",
"Ddd*maintenanceMenu.debug.labelString: Debug DDD...",
"Ddd*maintenanceMenu.debug.mnemonic: D",
"Ddd*maintenanceMenu.debug.accelerator: ~Shift ~Ctrl<Key>F12",
"Ddd*maintenanceMenu.debug.acceleratorText: F12",
"Ddd*maintenanceMenu.debug.documentationString: \
@rm Invoke a debugger on this DDD instance",
"Ddd*maintenanceMenu.dumpCore.labelString: Dump Core Now",
"Ddd*maintenanceMenu.dumpCore.mnemonic: C",
"Ddd*maintenanceMenu.dumpCore.documentationString: \
@rm Make DDD dump core now",
"Ddd*maintenanceMenu.tictactoe.labelString: Tic Tac Toe...",
"Ddd*maintenanceMenu.tictactoe.mnemonic: T",
"Ddd*maintenanceMenu.tictactoe.documentationString: \
@rm Play Tic Tac Toe against DDD",
"Ddd*maintenanceMenu.crash.labelString: When DDD Crashes",
"Ddd*maintenanceMenu.crash.mnemonic: W",
"Ddd*maintenanceMenu.crash.documentationString: \
@rm What to do when DDD crashes",
"Ddd*maintenanceMenu.valgrindLeak.labelString: Do Valgrind Leak Check",
"Ddd*maintenanceMenu.valgrindLeak.mnemonic: L",
"Ddd*maintenanceMenu.valgrindLeak.documentationString: \
@rm Do a self Valgrind leak check",
"Ddd*maintenanceMenu.remove.labelString: Remove Menu",
"Ddd*maintenanceMenu.remove.mnemonic: R",
"Ddd*maintenanceMenu.remove.documentationString: \
@rm Remove this menu",
"Ddd*crashMenu*helpString: \
\
@bs Crash Menu@rm\\n\
\\n\
When DDD crashes...\\n\
@tt \\267 @bf Debug DDD@rm  @tt -@rm  invoke a debugger.\\n\
@tt \\267 @bf Dump Core@rm  @tt -@rm  dump core.\\n\
@tt \\267 @bf Do Nothing@rm  @tt -@rm  neither invoke a debugger nor debug DDD.",
"Ddd*crashMenu*tearOffTitle: When DDD Crashes",
"Ddd*crashMenu.debug.labelString: Debug DDD",
"Ddd*crashMenu.debug.mnemonic: D",
"Ddd*crashMenu.debug.documentationString: \
@rm Invoke debugger on DDD when it crashes",
"Ddd*crashMenu.dumpCore.labelString: Dump Core",
"Ddd*crashMenu.dumpCore.mnemonic: C",
"Ddd*crashMenu.dumpCore.documentationString: \
@rm Dump core when DDD crashes",
"Ddd*crashMenu.nothing.labelString: Do Nothing",
"Ddd*crashMenu.nothing.mnemonic: N",
"Ddd*crashMenu.nothing.documentationString: \
@rm Neither invoke a debugger nor dump core",
"Ddd*menubar.help.labelString: Help",
"Ddd*menubar.help.mnemonic: H",
"Ddd*menubar.help*documentationString: \
@rm Get more information",
"Ddd*menubar.help*helpString: \
\
@bs Help Menu@rm\\n\
\\n\
@tt \\267 @bf Overview@rm  @tt -@rm  help on how to use the help facility.\\n\
\\n\
@tt \\267 @bf On Item...@rm  @tt -@rm  give help on the current item.\\n\
@tt \\267 @bf On Window...@rm  @tt -@rm  help on the application itself.\\n\
\\n\
@tt \\267 @bf What Now?...@rm  @tt -@rm  give help on what to do now.\\n\
@tt \\267 @bf Tip of the Day...@rm  @tt -@rm  give a useful tip on DDD usage.\\n\
\\n\
@tt \\267 @bf DDD Reference...@rm  @tt -@rm  the DDD on-line manual.\\n\
@tt \\267 @bf DDD News...@rm  @tt -@rm  what\'s new in DDD.\\n\
@tt \\267 @bf @GDB@ Reference...@rm  @tt -@rm  the @GDB@ on-line manual.\\n\
\\n\
@tt \\267 @bf DDD License...@rm  @tt -@rm  copying, distributing, and modifying DDD.\\n\
@tt \\267 @bf DDD WWW Page...@rm  @tt -@rm  the DDD WWW page.\\n\
\\n\
@tt \\267 @bf About DDD...@rm  @tt -@rm  some general information about DDD.",
"Ddd*helpMenu*helpString: \
\
@bs Help Menu@rm\\n\
\\n\
@tt \\267 @bf Overview@rm  @tt -@rm  help on how to use the help facility.\\n\
\\n\
@tt \\267 @bf On Item...@rm  @tt -@rm  give help on the current item.\\n\
@tt \\267 @bf On Window...@rm  @tt -@rm  help on the application itself.\\n\
\\n\
@tt \\267 @bf What Now?...@rm  @tt -@rm  give help on what to do now.\\n\
@tt \\267 @bf Tip of the Day...@rm  @tt -@rm  give a useful tip on DDD usage.\\n\
\\n\
@tt \\267 @bf DDD Reference...@rm  @tt -@rm  the DDD on-line manual.\\n\
@tt \\267 @bf DDD News...@rm  @tt -@rm  what\'s new in DDD.\\n\
@tt \\267 @bf @GDB@ Reference...@rm  @tt -@rm  the @GDB@ on-line manual.\\n\
\\n\
@tt \\267 @bf DDD License...@rm  @tt -@rm  copying, distributing, and modifying DDD.\\n\
@tt \\267 @bf DDD WWW Page...@rm  @tt -@rm  the DDD WWW page.\\n\
\\n\
@tt \\267 @bf About DDD...@rm  @tt -@rm  some general information about DDD.",
"Ddd*helpMenu*tearOffTitle: Help",
"Ddd*helpMenu.onHelp.labelString: Overview...",
"Ddd*helpMenu.onHelp.mnemonic: v",
"Ddd*helpMenu.onHelp.documentationString: \
@rm How to use the help facility",
"Ddd*helpMenu.onItem.labelString: On Item...",
"Ddd*helpMenu.onItem.mnemonic: O",
"Ddd*helpMenu.onItem.accelerator: ~Shift ~Ctrl<Key>F1",
"Ddd*helpMenu.onItem.acceleratorText: Shift+F1",
"Ddd*helpMenu.onItem.documentationString: \
@rm Get help on the current item",
"Ddd*helpMenu.onWindow.labelString: On Window...",
"Ddd*helpMenu.onWindow.mnemonic: W",
"Ddd*helpMenu.onWindow.documentationString: \
@rm Information about the current window",
"Ddd*helpMenu.onWindow.accelerator: Shift ~Ctrl<Key>F1",
"Ddd*helpMenu.whatNext.labelString: What Now?...",
"Ddd*helpMenu.whatNext.mnemonic: N",
"Ddd*helpMenu.whatNext.accelerator: ~Shift Ctrl<Key>F1",
"Ddd*helpMenu.whatNext.acceleratorText: Ctrl+F1",
"Ddd*helpMenu.whatNext.documentationString: \
@rm Explain the current situation and suggest what to do next",
"Ddd*helpMenu.tipOfTheDay.labelString: Tip of the Day...",
"Ddd*helpMenu.tipOfTheDay.mnemonic: T",
"Ddd*helpMenu.tipOfTheDay.documentationString: \
@rm Give a useful tip on DDD usage",
"Ddd*helpMenu.dddManual.labelString: DDD Reference...",
"Ddd*helpMenu.dddManual.mnemonic: R",
"Ddd*helpMenu.dddManual.documentationString: \
@rm The DDD reference manual",
"Ddd*helpMenu.news.labelString: DDD News...",
"Ddd*helpMenu.news.mnemonic: e",
"Ddd*helpMenu.news.documentationString: \
@rm What\'s new in this DDD version",
"Ddd*helpMenu.gdbManual.labelString: @GDB@ Reference...",
"Ddd*helpMenu.gdbManual.mnemonic: B",
"Ddd*helpMenu.gdbManual.documentationString: \
@rm The @GDB@ reference manual",
"Ddd*helpMenu.license.labelString: DDD License...",
"Ddd*helpMenu.license.mnemonic: L",
"Ddd*helpMenu.license.documentationString: \
@rm Terms and conditions for copying, distributing, and modifying DDD",
"Ddd*helpMenu.www.labelString: DDD WWW Page...",
"Ddd*helpMenu.www.mnemonic: P",
"Ddd*helpMenu.www.documentationString: \
@rm Invoke a WWW browser with up-to-date DDD information",
"Ddd*helpMenu.onVersion.labelString: About DDD...",
"Ddd*helpMenu.onVersion.mnemonic: A",
"Ddd*helpMenu.onVersion.documentationString: \
@rm General information about this DDD version",
"Ddd*tool_buttons.fractionBase: 90",
"Ddd*tool_buttons.run.topPosition: 0",
"Ddd*tool_buttons.run.bottomPosition: 10",
"Ddd*tool_buttons.run.leftPosition: 0",
"Ddd*tool_buttons.run.rightPosition: 90",
"Ddd*tool_buttons.break.topPosition: 10",
"Ddd*tool_buttons.break.bottomPosition: 20",
"Ddd*tool_buttons.break.leftPosition: 0",
"Ddd*tool_buttons.break.rightPosition: 90",
"Ddd*tool_buttons.step.topPosition: 20",
"Ddd*tool_buttons.step.bottomPosition: 30",
"Ddd*tool_buttons.step.leftPosition: 0",
"Ddd*tool_buttons.step.rightPosition: 45",
"Ddd*tool_buttons.stepi.topPosition: 20",
"Ddd*tool_buttons.stepi.bottomPosition: 30",
"Ddd*tool_buttons.stepi.leftPosition: 45",
"Ddd*tool_buttons.stepi.rightPosition: 90",
"Ddd*tool_buttons.next.topPosition: 30",
"Ddd*tool_buttons.next.bottomPosition: 40",
"Ddd*tool_buttons.next.leftPosition: 0",
"Ddd*tool_buttons.next.rightPosition: 45",
"Ddd*tool_buttons.nexti.topPosition: 30",
"Ddd*tool_buttons.nexti.bottomPosition: 40",
"Ddd*tool_buttons.nexti.leftPosition: 45",
"Ddd*tool_buttons.nexti.rightPosition: 90",
"Ddd*tool_buttons.until.topPosition: 40",
"Ddd*tool_buttons.until.bottomPosition: 50",
"Ddd*tool_buttons.until.leftPosition: 0",
"Ddd*tool_buttons.until.rightPosition: 45",
"Ddd*tool_buttons.finish.topPosition: 40",
"Ddd*tool_buttons.finish.bottomPosition: 50",
"Ddd*tool_buttons.finish.leftPosition: 45",
"Ddd*tool_buttons.finish.rightPosition: 90",
"Ddd*tool_buttons.cont.topPosition: 50",
"Ddd*tool_buttons.cont.bottomPosition: 60",
"Ddd*tool_buttons.cont.leftPosition: 0",
"Ddd*tool_buttons.cont.rightPosition: 45",
"Ddd*tool_buttons.kill.topPosition: 50",
"Ddd*tool_buttons.kill.bottomPosition: 60",
"Ddd*tool_buttons.kill.leftPosition: 45",
"Ddd*tool_buttons.kill.rightPosition: 90",
"Ddd*tool_buttons.up.topPosition: 60",
"Ddd*tool_buttons.up.bottomPosition: 70",
"Ddd*tool_buttons.up.leftPosition: 0",
"Ddd*tool_buttons.up.rightPosition: 45",
"Ddd*tool_buttons.down.topPosition: 60",
"Ddd*tool_buttons.down.bottomPosition: 70",
"Ddd*tool_buttons.down.leftPosition: 45",
"Ddd*tool_buttons.down.rightPosition: 90",
"Ddd*tool_buttons.Undo.topPosition: 70",
"Ddd*tool_buttons.Undo.bottomPosition: 80",
"Ddd*tool_buttons.Undo.leftPosition: 0",
"Ddd*tool_buttons.Undo.rightPosition: 45",
"Ddd*tool_buttons.Redo.topPosition: 70",
"Ddd*tool_buttons.Redo.bottomPosition: 80",
"Ddd*tool_buttons.Redo.leftPosition: 45",
"Ddd*tool_buttons.Redo.rightPosition: 90",
"Ddd*tool_buttons.Edit.topPosition: 80",
"Ddd*tool_buttons.Edit.bottomPosition: 90",
"Ddd*tool_buttons.Edit.leftPosition: 0",
"Ddd*tool_buttons.Edit.rightPosition: 45",
"Ddd*tool_buttons.Make.topPosition: 80",
"Ddd*tool_buttons.Make.bottomPosition: 90",
"Ddd*tool_buttons.Make.leftPosition: 45",
"Ddd*tool_buttons.Make.rightPosition: 90",
"Ddd*tool_buttons*topAttachment: XmATTACH_POSITION",
"Ddd*tool_buttons*bottomAttachment: XmATTACH_POSITION",
"Ddd*tool_buttons*leftAttachment: XmATTACH_POSITION",
"Ddd*tool_buttons*rightAttachment: XmATTACH_POSITION",
"Ddd*tool_buttons*shadowThickness: 1",
"Ddd*source_buttons*shadowThickness: 1",
"Ddd*console_buttons*shadowThickness: 1",
"Ddd*data_buttons*shadowThickness: 1",
"Ddd*command_toolbar*shadowThickness: 1",
"Ddd*toolbar.?.shadowThickness: 1",
"Ddd*preferences.cancelLabelString: Reset",
"Ddd*preferences.dialogTitle: DDD Preferences",
"Ddd*preferences*buttons.orientation: XmHORIZONTAL",
"Ddd*preferences*buttons.borderWidth: 0",
"Ddd*preferences*buttons.marginWidth: 0",
"Ddd*preferences*buttons.marginHeight: 0",
"Ddd*preferences*buttons.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*preferences*buttons*indicatorOn: off",
"Ddd*preferences*buttons*shadowThickness: 2",
"Ddd*preferences*buttons*alignment: XmALIGNMENT_CENTER",
"Ddd*preferences*panel*XmRowColumn.marginHeight: 0",
"Ddd*preferences*packing: XmPACK_TIGHT",
"Ddd*preferences*buttons*general.labelString: \\ \\ \\ \\ General\\ \\ \\ \\ ",
"Ddd*preferences*buttons*source.labelString: Source",
"Ddd*preferences*buttons*data.labelString: Data",
"Ddd*preferences*buttons*startup.labelString: Startup",
"Ddd*preferences*buttons*fonts.labelString: Fonts",
"Ddd*preferences*buttons*helpers.labelString: Helpers",
"Ddd*preferences*buttons*packing: XmPACK_COLUMN",
"Ddd*preferences*general*helpString: \
@bs General Preferences@rm\\n\
\\n\
@tt \\267 @rm When you move the mouse pointer over a button, DDD can give a hint \
on its usage.\\n\
    @tt -@rm  Select @bf as popup tips@rm  if you want the hint to be shown \
in a popup window.\\n\
    @tt -@rm  Select @bf in the status line@rm  if you want the hint to be shown \
in the status line.\\n\
    You can also select both options, or none at all.\\n\
@tt \\267 @rm When you move the mouse pointer over a variable in the source window,\\n\
    DDD can automatically display the variable value.\\n\
    @tt -@rm  Select @bf as popup tips@rm  if you want the value to be shown \
in a popup window.\\n\
    @tt -@rm  Select @bf in the status line@rm  if you want it to be shown \
in the status line.\\n\
    You can also select both options, or none at all.\\n\
@tt \\267 @rm In DDD, the @key Tab@rm  key can complete its arguments.\\n\
    @tt -@rm  Set @bf in all windows@rm  if you want completion in all DDD \
windows.\\n\
    @tt -@rm  Set @bf in console only@rm  if you need the @key Tab@rm  key to move \
the focus.\\n\
@tt \\267 @rm If @bf Iconify all windows at once@rm  is set, all DDD windows are \
iconified as a group.\\n\
    Otherwise, windows are iconified separately.\\n\
@tt \\267 @rm If @bf Uniconify when ready@rm  is set, the DDD windows are \
automatically uniconified\\n\
    when DDD becomes ready (e.g. after reaching a breakpoint).\\n\
    Otherwise, DDD windows remain iconified.\\n\
@tt \\267 @rm If @bf Suppress X warnings@rm  is set, X warnings are silently ignored.\\n\
@tt \\267 @rm If @bf Continue automatically...@rm  is set, DDD will continue execution\\n\
    of programs that were interrupted while grabbing the mouse pointer.\\n\
@tt \\267 @rm @bf Warn if multiple...@rm  enables warnings about multiple DDD instances\\n\
    that share (and may overwrite) preferences and other state files.\\n\
@tt \\267 @rm @bf Undo Buffer Size@rm  sets the maximum size of the undo buffer.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*buttonHints.labelString: \
Automatic Display of Button Hints",
"Ddd*preferences*valueHints.labelString: \
Automatic Display of Variable Values",
"Ddd*preferences*tips.labelString: as Popup Tips",
"Ddd*preferences*docs.labelString: in the Status Line",
"Ddd*preferences*tabCompletion.labelString: \
TAB Key Completes",
"Ddd*preferences*inAllWindows.labelString: in All Windows",
"Ddd*preferences*inConsole.labelString: in Console Only",
"Ddd*preferences*undoSize.labelString: \
Undo Buffer Size",
"Ddd*preferences*size.text.columns: 5",
"Ddd*preferences*kbytes.labelString: kBytes",
"Ddd*preferences*clear.labelString: Clear Undo Buffer",
"Ddd*preferences*groupIconify.labelString: \
Iconify all Windows at Once",
"Ddd*preferences*uniconifyWhenReady.labelString: \
Uniconify When Ready",
"Ddd*preferences*suppressWarnings.labelString: \
Suppress X Warnings",
"Ddd*preferences*checkGrabs.labelString: \
Continue Automatically when Mouse Pointer is Frozen",
"Ddd*preferences*warnIfLocked.labelString: \
Warn if Multiple DDD Instances are Running",
"Ddd*preferences*source*helpString: \
@bs Source Preferences@rm\\n\
\\n\
@tt \\267 @rm DDD can show the current position and breakpoints\\n\
    @tt -@rm  @bf as glyphs@rm , using small images in the text,\\n\
    @tt -@rm  @bf as text@rm , using ordinary text characters.\\n\
@tt \\267 @rm The @bf Tool Buttons@rm  can be placed\\n\
    @tt -@rm  in the @bf Command Tool@rm  which can be moved around DDD, or\\n\
    @tt -@rm  in the @bf Source Window@rm , as line of buttons.\\n\
@tt \\267 @rm Using DBX, DDD can refer to program sources\\n\
    @tt -@rm  by @bf path name@rm , or\\n\
    @tt -@rm  by @bf base name@rm , as required by some DBX variants.\\n\
@tt \\267 @rm If @bf Find words only@rm  is set, only complete words are found.\\n\
    Otherwise, DDD finds arbitrary occurrences.\\n\
@tt \\267 @rm If @bf Find case sensitive@rm  is set, search is case-sensitive.\\n\
    Otherwise, DDD finds occurrences regardless of case.\\n\
@tt \\267 @rm If @bf Cache source files@rm  is set, source texts are cached in memory.\\n\
    Otherwise, sources are read from disk upon each source change.\\n\
@tt \\267 @rm If @bf Cache machine code@rm  is set, disassembled code is cached \
in memory.\\n\
    Otherwise, code is re-disassembled upon each function change.\\n\
@tt \\267 @rm @bf Display line numbers@rm  enables numbered source lines.\\n\
@tt \\267 @rm In @bf Tab Width@rm , you can set the spacing of tab stops.\\n\
    Setting the tab width to 8 sets a tab stop every 8 characters.\\n\
@tt \\267 @rm In @bf Indentation@rm , you can indent the source and machine code,\\n\
    giving additional room for the breakpoint area.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*showExecPos.labelString: Show Position and Breakpoints",
"Ddd*preferences*asGlyphs.labelString: as Glyphs",
"Ddd*preferences*asText.labelString: as Text Characters",
"Ddd*preferences*toolButtons.labelString: Tool Buttons Location",
"Ddd*toolButtonsMenu*commandTool.labelString: \
Command Tool",
"Ddd*toolButtonsMenu*sourceWindow.labelString: \
Source Window\\ \\ \\ \\ \\ ",
"Ddd*preferences*referSources.labelString: Refer to Program Sources",
"Ddd*preferences*byPath.labelString: by Path Name",
"Ddd*preferences*byBase.labelString: by Base Name",
"Ddd*preferences*cache.labelString: Cache",
"Ddd*preferences*cacheSource.labelString: Source Files",
"Ddd*preferences*cacheCode.labelString: Machine Code",
"Ddd*preferences*find.labelString: Find",
"Ddd*preferences*wordsOnly.labelString: Words Only\\ ",
"Ddd*preferences*caseSensitive.labelString: Case Sensitive",
"Ddd*preferences*lineNumbers.labelString: Display Source Line Numbers",
"Ddd*preferences*tabWidth.orientation: XmHORIZONTAL",
"Ddd*preferences*tabWidth.minimum: 1",
"Ddd*preferences*tabWidth.maximum: 32",
"Ddd*preferences*tabWidth.showValue: on",
"Ddd*preferences*tabWidth.titleString: \
Tab Width\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ ",
"Ddd*preferences*sourceIndent.orientation: XmHORIZONTAL",
"Ddd*preferences*sourceIndent.minimum: 0",
"Ddd*preferences*sourceIndent.maximum: 16",
"Ddd*preferences*sourceIndent.showValue: on",
"Ddd*preferences*sourceIndent.titleString: \
Source Indentation\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ ",
"Ddd*preferences*codeIndent.orientation: XmHORIZONTAL",
"Ddd*preferences*codeIndent.minimum: 0",
"Ddd*preferences*codeIndent.maximum: 16",
"Ddd*preferences*codeIndent.showValue: on",
"Ddd*preferences*codeIndent.titleString: \
Machine Code Indentation",
"Ddd*preferences*data*helpString: \
@bs Data Preferences@rm\\n\
\\n\
@tt \\267 @rm @bf Show edge hints@rm  enables handles for multi-line and arc edges.\\n\
@tt \\267 @rm @bf Show edge annotations@rm  enables named edges.\\n\
@tt \\267 @rm @bf Show titles@rm  enables titles of dependent displays.\\n\
@tt \\267 @rm @bf Placement@rm  controls how new displays are to be placed:\\n\
    @tt -@rm  If @bf Top to bottom@rm  is set, new independent displays\\n\
        will be placed below the downmost display.\\n\
    @tt -@rm  If @bf Left to right@rm  is set, new independent displays\\n\
        will be placed on the right of the rightmost display.\\n\
    @tt -@rm  If @bf Clustered@rm  is set, independent data displays\\n\
        are merged into one single cluster, saving screen space.\\n\
    Dependent displays are placed in the orthogonal direction.\\n\
@tt \\267 @rm @bf Layout@rm  controls the automatic layout:\\n\
    @tt -@rm  @bf Compact layout@rm  enables a compact layout,\\n\
        suitable for homogeneous structures only.\\n\
    @tt -@rm  @bf Automatic layout@rm  makes DDD relayout the graph\\n\
        after each change.\\n\
@tt \\267 @rm If @bf Detect aliases@rm  is set, DDD detects displays with the same\\n\
    physical address and suppresses all aliases except the one that was\\n\
    least recently changed.  Useful for examining shared data structures.\\n\
@tt \\267 @rm If @bf Display two-dimensional arrays as tables@rm  is set, the elements\\n\
    of two-dimensional arrays are aligned in a table.\\n\
    Otherwise, two-dimensional arrays are displayed as nested linear arrays.\\n\
@tt \\267 @rm If @bf Close data window when deleting last display@rm  is set,\\n\
    deleting the last display automatically closes the data window.\\n\
@tt \\267 @rm If @bf Auto-align displays@rm  is set,\\n\
    each display is aligned on the nearest grid point.\\n\
@tt \\267 @rm In @bf Grid size@rm , you can change the spacing of grid points.\\n\
    A spacing of 0 disables the grid.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*detectAliases.labelString: \
Detect Aliases (shared data structures)",
"Ddd*preferences*align2dArrays.labelString: \
Display Two-Dimensional Arrays as Tables",
"Ddd*preferences*snapToGrid.labelString: \
Auto-Align Displays on Nearest Grid Point\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ ",
"Ddd*preferences*hints.labelString: \
Edge Hints",
"Ddd*preferences*annotations.labelString: \
Edge Annotations",
"Ddd*preferences*dependentTitles.labelString: \
Titles of Dependent Displays",
"Ddd*preferences*autoClose.labelString: \
Close Data Window when Deleting last Display",
"Ddd*preferences*show.labelString: \
Show",
"Ddd*preferences*layout.labelString: \
Layout",
"Ddd*preferences*auto.labelString: \
Automatic",
"Ddd*preferences*compact.labelString: \
Compact",
"Ddd*preferences*placement.labelString: \
Placement",
"Ddd*preferences*topToBottom.labelString: \
Top to bottom",
"Ddd*preferences*leftToRight.labelString: \
Left to right",
"Ddd*preferences*clusterDisplays.labelString: \
Clustered",
"Ddd*preferences*gridSize.orientation: XmHORIZONTAL",
"Ddd*preferences*gridSize.minimum: 0",
"Ddd*preferences*gridSize.maximum: 64",
"Ddd*preferences*gridSize.width: 192",
"Ddd*preferences*gridSize.showValue: on",
"Ddd*preferences*gridSize.titleString: Grid Size",
"Ddd*preferences*themes.labelString: \\ \\ \\ \\ Themes...\\ \\ \\ \\ ",
"Ddd*preferences*startup*helpString: \
@bs Startup Preferences@rm\\n\
\\n\
These preferences are effective only after a restart.\\n\
\\n\
@tt \\267 @rm @bf Window Layout@rm  sets the window layout.\\n\
    @tt -@rm  @bf Stacked Windows@rm  means to use one top-level window\\n\
        where source, data, and the @GDB@ console are stacked.\\n\
    @tt -@rm  @bf Separate Windows@rm  means to use a separate top-level window\\n\
        for each of source, data, and the @GDB@ console.\\n\
@tt \\267 @rm The @bf Ctrl+C@rm  and @bf Ctrl+A@rm  keys can be bound to different actions.\\n\
@tt \\267 @rm The @bf Tool Bar@rm  can appear as follows:\\n\
    @tt -@rm  @bf Images@rm  shows a small symbol for each action, and/or\\n\
    @tt -@rm  @bf Captions@rm  shows the action name below the image.\\n\
    If neither @bf Images@rm  nor @bf Captions@rm  is set, \
buttons have ordinary labels.\\n\
    @tt -@rm  @bf Flat@rm  enables the button border only when entered.\\n\
    @tt -@rm  @bf Color@rm  enables colored button images.\\n\
    @tt -@rm  @bf Bottom@rm  places the tool bar at the bottom of the window.\\n\
    This can only be done with separate windows or ordinary labels.\\n\
@tt \\267 @rm @bf Keyboard Focus@rm  sets the keyboard focus policy.\\n\
    @tt -@rm  @bf Click to Type@rm  means that you must click on a window\\n\
        to direct the keyboard focus to it.\\n\
    @tt -@rm  @bf Point to Type@rm  means that pointing to the window suffices.\\n\
@tt \\267 @rm @bf Data Scrolling@rm  sets the data window scrolling mode.\\n\
    @tt -@rm  @bf Panner@rm  means to use a two-dimensional scrollbar\\n\
        (not available in all DDD configurations).\\n\
    @tt -@rm  @bf Scrollbars@rm  means to use two scrollbars.\\n\
@tt \\267 @rm @bf Debugger Type@rm  sets the type of the inferior debugger.\\n\
    If @bf Determine Automatically...@rm  is set, the inferior debugger is set\\n\
    dependent on the arguments given to DDD.\\n\
@tt \\267 @rm @bf Show Splash Screen@rm  sets whether DDD shows its splash screen.\\n\
@tt \\267 @rm @bf Show Tip of the Day@rm  sets whether DDD shows its tip of the day.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*startup*adjustMargin: off",
"Ddd*preferences*windows.labelString: Window Layout",
"Ddd*windowsMenu*attached.labelString: Stacked Windows",
"Ddd*windowsMenu*separate.labelString: Separate Windows",
"Ddd*preferences*cutCopyPaste.labelString: Ctrl+C is",
"Ddd*cutCopyPasteMenu*kde.labelString: Copy",
"Ddd*cutCopyPasteMenu*motif.labelString: Interrupt",
"Ddd*preferences*selectAll.labelString: Ctrl+A is",
"Ddd*selectAllMenu*kde.labelString: Select All",
"Ddd*selectAllMenu*motif.labelString: Beginning of Line",
"Ddd*preferences*buttons.labelString: Tool Bar Appearance",
"Ddd*buttonsMenu*images.labelString: Images",
"Ddd*buttonsMenu*captions.labelString: Captions",
"Ddd*buttonsMenu*flat.labelString: Flat",
"Ddd*buttonsMenu*color.labelString: Color",
"Ddd*buttonsMenu*color.toggleMode: XmTOGGLE_INDETERMINATE",
"Ddd*buttonsMenu*bottom.labelString: Bottom",
"Ddd*preferences*keyboardFocus.labelString: Keyboard Focus",
"Ddd*keyboardFocusMenu*explicit.labelString: Click to Type",
"Ddd*keyboardFocusMenu*pointer.labelString: Point to Type",
"Ddd*preferences*dataScrolling.labelString: Data Scrolling",
"Ddd*dataScrollingMenu*panner.labelString: Panner",
"Ddd*dataScrollingMenu*scrollbars.labelString: Scrollbars",
"Ddd*preferences*autoDebugger.labelString: Debugger Type",
"Ddd*preferences*automatic.labelString: \
Determine Automatically from Arguments",
"Ddd*preferences*debugger.labelString: ",
"Ddd*debuggerMenu*bash.labelString: Bash",
"Ddd*debuggerMenu*dbg.labelString: DBG",
"Ddd*debuggerMenu*dbx.labelString: DBX",
"Ddd*debuggerMenu*gdb.labelString: GDB",
"Ddd*debuggerMenu*jdb.labelString: JDB",
"Ddd*debuggerMenu*perl.labelString: Perl",
"Ddd*debuggerMenu*pydb.labelString: PYDB",
"Ddd*debuggerMenu*xdb.labelString: XDB",
"Ddd*debuggerMenu.numColumns: 1",
"Ddd*preferences*startupWindows.labelString: Startup Windows",
"Ddd*preferences*splashScreen.labelString: DDD Splash Screen",
"Ddd*preferences*startupTips.labelString: Tip of the Day",
"Ddd*preferences*fonts*helpString: \
@bs DDD fonts@rm\\n\
\\n\
@tt \\267 @rm @bf Default Font@rm  is the font used for DDD labels and buttons.\\n\
@tt \\267 @rm @bf Variable Width@rm  is the font used for messages (such as this one).\\n\
@tt \\267 @rm @bf Fixed Width@rm  is the font used for program code and text fields.\\n\
@tt \\267 @rm @bf Data@rm  is the font used for data displays.\\n\
\\n\
To change a font, enter its name and size (in 1/10 points).\\n\
A pair @sl family@rm -@sl weight@rm  as font name is sufficient.\\n\
\\n\
Using @bf Browse@rm , you can select fonts using the @tt xfontsel@rm\\n\
font selection program.\\n\
Click on @bf select@rm  to select the chosen font.\\n\
Wildcard entries (`@tt *@rm\') will be ignored.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*fonts*default.labelString: Default Font",
"Ddd*preferences*fonts*variableWidth.labelString: Variable Width",
"Ddd*preferences*fonts*fixedWidth.labelString: Fixed Width",
"Ddd*preferences*fonts*data.labelString: Data",
"Ddd*preferences*fonts*name.text.columns: 30",
"Ddd*preferences*fonts*size.label.labelString: Size",
"Ddd*preferences*fonts*size.text.columns: 3",
"Ddd*preferences*fonts*browse.labelString: Browse...",
"Ddd*preferences*helpers*helpString: \
@bs DDD Helpers@rm\\n\
\\n\
Helpers are external applications used by DDD.\\n\
\\n\
@tt \\267 @rm @bf Edit Sources@rm  invokes an X editor for the current source file.\\n\
    `@tt @ FILE@ @rm\' is replaced by the current file name.\\n\
    `@tt @ LINE@ @rm\' is replaced by the current line.\\n\
    Example: `@tt nedit @ FILE@ @rm\'\\n\
@tt \\267 @rm @bf Get Core File@rm  is a command to get a core file \
from a running process.\\n\
    `@tt @ FILE@ @rm\' is replaced by the base name of the target core file.\\n\
    `@tt @ PID@ @rm\' is replaced by the process ID.\\n\
    The output must be written to `@tt @ FILE@ .@ PID@ @rm\'.\\n\
    Example: `@tt gcore -o @ FILE@  @ PID@ @rm\'\\n\
    Leave this empty if you have no `@tt gcore@rm\' or similar command.\\n\
@tt \\267 @rm @bf List Processes@rm  is a command to get a list of processes.\\n\
    Example: `@tt ps@rm\'\\n\
@tt \\267 @rm @bf Execution Window@rm  is a command to start a terminal emulator.\\n\
    To this command, DDD appends bourne shell commands to be executed\\n\
    within the execution window.\\n\
    Example: `@tt xterm -e /bin/sh -c@rm\'\\n\
@tt \\267 @rm @bf Uncompress@rm  is an uncompression command.\\n\
    The command reads from standard input and writes to standard output.\\n\
    Example: `@tt gunzip -c@rm\'\\n\
@tt \\267 @rm @bf Web Browser@rm  invokes a WWW browser.\\n\
    `@tt @ URL@ @rm\' is replaced by the URL to be shown.\\n\
    Example: `@tt netscape @ URL@ @rm\'\\n\
@tt \\267 @rm @bf Plot@rm  invokes a Gnuplot program for plotting data.\\n\
    Example: `@tt gnuplot@rm\'\\n\
@tt \\267 @rm @bf Plot Window@rm  indicates the type of plot window to use.\\n\
    @tt -@rm  The @bf builtin@rm  DDD window uses fewer resources.\\n\
    @tt -@rm  The @bf external@rm  Gnuplot window is much faster, but\\n\
        does not work with all window managers.\\n\
\\n\
Use the buttons above to view and change other preferences.\\n\
Click on @bf Reset@rm  to restore the saved preferences.",
"Ddd*preferences*edit*labelString: Edit Sources",
"Ddd*preferences*get_core*labelString: Get Core File",
"Ddd*preferences*ps*labelString: List Processes",
"Ddd*preferences*term*labelString: Execution Window",
"Ddd*preferences*uncompress*labelString: Uncompress",
"Ddd*preferences*www*labelString: Web Browser",
"Ddd*preferences*plot*labelString: Plot",
"Ddd*preferences*plot_window*labelString: Plot Window",
"Ddd*preferences*extern*labelString: External",
"Ddd*preferences*builtin*labelString: Builtin",
"Ddd*preferences*text.columns: 47",
"Ddd*settings.dialogTitle: DDD: Debugger Settings",
"Ddd*settings.okLabelString: Apply",
"Ddd*settings.applyLabelString: Reset",
"Ddd*settings.cancelLabelString: Close",
"Ddd*settings.textAccelerators:",
"Ddd*settings*help.labelString: ?",
"Ddd*settings*XmTextField.columns: 10",
"Ddd*settings*XmTextField.marginHeight: 3",
"Ddd*settings*dir.columns: 36",
"Ddd*settings*path.columns: 36",
"Ddd*settings*use.columns: 50",
"Ddd*settings*v8.labelString: SPARC V8",
"Ddd*settings*v9.labelString: SPARC V9",
"Ddd*settings*v9sgi.labelString: SPARC V9 with Special Graphics Instructions",
"Ddd*settings*parent.labelString: stay with parent",
"Ddd*settings*child.labelString: follow child",
"Ddd*settings*both.labelString: follow both",
"Ddd*settings*ask.labelString: ask for an option",
"Ddd*settings*stdio.labelString: Standard I/O",
"Ddd*settings*pty.labelString: PTY",
"Ddd*settings*help.tipString:\
@rm Get help on this setting",
"Ddd*settings*scroll*helpString:",
"Ddd*settings*helpString: \
@bs @GDB@ Settings@rm\\n\
\\n\
These settings control @GDB@ operations.\\n\
Click on @bf ?@rm  near an item to get further information.\\n\
\\n\
@bf Edit@symbol \\256@bf Save Options@rm  saves all @GDB@ settings, except\\n\
session-dependent settings such as source or object paths.\\n\
@bf File@symbol \\256@bf Save Session@rm  also saves session-dependent @GDB@ settings.\\n\
\\n\
Click on @bf Apply@rm  to apply changed text settings.\\n\
Click on @bf Reset@rm  to restore the saved settings.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*infos.dialogTitle: DDD: Status Displays",
"Ddd*infos.okLabelString: Apply",
"Ddd*infos.applyLabelString: Reset",
"Ddd*infos.cancelLabelString: Close",
"Ddd*infos*help.labelString: ?",
"Ddd*infos*help.tipString:\
@rm Get help on this status display",
"Ddd*infos*scroll*helpString:",
"Ddd*infos*helpString: \
@bs Status Displays@rm\\n\
\\n\
A @sl status display@rm  shows things about the program being debugged\\n\
in the data window.  Please pick your choice from the list.\\n\
\\n\
Click on @bf ?@rm  near an item to get further information.\\n\
\\n\
Click on @bf Reset@rm  to delete all status displays.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*signals.dialogTitle: DDD: Signal Handling",
"Ddd*signals.okLabelString: Apply",
"Ddd*signals.applyLabelString: Reset",
"Ddd*signals.cancelLabelString: Close",
"Ddd*signals*send.labelString: Send",
"Ddd*signals*send.rightOffset: 5",
"Ddd*signals*send.tipString: \
@rm Continue execution with this signal",
"Ddd*signals*help.labelString: ?",
"Ddd*signals*help.tipString: \
@rm Get help on this signal",
"Ddd*signals*all*helpString: \
@bs All Signals@rm\\n\
\\n\
Use these settings to modify all signals at once - expect those\\n\
used by the debugger, typically SIGTRAP and SIGINT.",
"Ddd*signals*helpString: \
@bs Signal Handling@rm\\n\
\\n\
This panel controls how signals are handled by @GDB@.\\n\
\\n\
@tt \\267 @bf Stop@rm  @tt -@rm  interrupt program if this signal happens (implies @bf Print@rm ).\\n\
@tt \\267 @bf Print@rm  @tt -@rm  print a message in the @GDB@ console if this signal happens.\\n\
@tt \\267 @bf Pass@rm  @tt -@rm  let program see this signal; otherwise program doesn\'t know.\\n\
@tt \\267 @bf Send@rm  @tt -@rm  continue program execution with this signal.\\n\
\\n\
Use @bf All Signals@rm  to modify all signals at once.\\n\
Click on @bf ?@rm  to get further information on the specific signal.\\n\
\\n\
Click on @bf Reset@rm  to restore the original settings.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*themes.dialogTitle: DDD: Themes",
"Ddd*themes.okLabelString: Apply",
"Ddd*themes.applyLabelString: Reset",
"Ddd*themes.cancelLabelString: Close",
"Ddd*themes*XmTextField.columns: 40",
"Ddd*themes*XmTextField.marginHeight: 3",
"Ddd*themes*help.labelString: ?",
"Ddd*themes*help.tipString: \
@rm Get help on this theme",
"Ddd*themes*helpString: \
@bs Themes@rm\\n\
\\n\
This panel controls how values are to be displayed by DDD.\\n\
\\n\
Each @sl theme@rm  is a visual modifier that can be applied on \
several expressions.\\n\
The toggle button controls whether a theme is active or not.\\n\
\\n\
If a theme is active, it is applied on all expressions that match one\\n\
of the given patterns.\\n\
Patterns are separated by `@tt ;@rm\' and contain shell-like metacharacters:\\n\
@tt \\267 @rm `@tt *@rm\' matches any sequence of characters\\n\
@tt \\267 @rm `@tt ?@rm\' matches any single character\\n\
@tt \\267 @rm `@tt \\133@sl set@rm \\135@rm\' matches any character in @sl set@rm\\n\
@tt \\267 @rm `@tt \\133!@sl set@rm \\135@rm\' matches any character not in the @sl set@rm\\n\
@tt \\267 @rm `@tt \\1330-9a-zA-Z_\\135@rm\' is the set of characters allowed \
in C identifiers.\\n\
To suppress the special syntactic significance of any metacharacter\\n\
and match the character exactly, precede it with `@tt \\\\@rm\'.\\n\
To suppress the syntactic significance of @sl all@rm  metacharacters,\\n\
enclose the pattern in double or single quotes.\\n\
\\n\
Click on @bf ?@rm  to get further information on the specific theme.\\n\
\\n\
Click on @bf Apply@rm  to apply changed text settings.\\n\
Click on @bf Reset@rm  to restore the original settings.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*edit_buttons.dialogTitle: DDD: Button Editor",
"Ddd*edit_buttons.cancelLabelString: Reset",
"Ddd*edit_buttons*buttons.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*edit_buttons*buttons*indicatorOn: off",
"Ddd*edit_buttons*buttons*shadowThickness: 2",
"Ddd*edit_buttons*buttons*alignment: XmALIGNMENT_CENTER",
"Ddd*edit_buttons*console.labelString: Console Buttons",
"Ddd*edit_buttons*source.labelString: Source Buttons",
"Ddd*edit_buttons*data.labelString: Data Buttons",
"Ddd*edit_buttons*shortcuts.labelString: Shortcuts",
"Ddd*edit_buttons*text.rows: 12",
"Ddd*edit_buttons*text.wordWrap: on",
"Ddd*edit_buttons*text.scrollHorizontal: off",
"Ddd*edit_buttons*verify.labelString: Enable supported buttons only",
"Ddd*edit_buttons*helpString: \
@bs Button Editor@rm\\n\
\\n\
Each line specifies a user-defined button, in the format\\n\
\\n\
    @sl command@rm \\ \\ \\ \\ @tt //@rm  @sl label@rm\\n\
\\n\
If `@tt // @sl label@rm @rm\' is omitted, @sl command@rm  is used as label.\\n\
\\n\
The following strings have a special meaning in @sl command@rm :\\n\
\\n\
@tt \\267 @rm `@tt ()@rm\' is replaced by the current argument field.\\n\
    Example: `@tt print *(()) // Print *()@rm\'\\n\
@tt \\267 @rm `@tt ^@sl character@rm @rm\' causes @sl command@rm  to issue \
@key Ctrl+@sl character@rm @rm .\\n\
    Example: `@tt Interrupt^C@rm\'\\n\
@tt \\267 @rm `@tt ...@rm\' at the end keeps @sl command@rm  from issuing a newline.\\n\
    Example: `@tt help ...@rm\'\\n\
\\n\
If @bf Enable supported buttons only@rm  is set, DDD enables a button\\n\
if and only if its command is supported by the inferior debugger.\\n\
\\n\
Click on @bf OK@rm  to apply the changes and close this window.\\n\
Use @bf Edit@symbol \\256@bf Save Options@rm  to save all button specifications.",
"Ddd*edit_buttons*shortcuts*helpString: \
@bs Shortcut Editor@rm\\n\
\\n\
Each line specifies a display shortcut, in the format\\n\
\\n\
    @sl expression@rm \\ \\ \\ \\ @tt //@rm  @sl label@rm\\n\
\\n\
If `@tt // @sl label@rm @rm\' is omitted, @bf Display @sl expression@rm @rm  \
is used as label.\\n\
In @sl expression@rm , `@tt ()@rm\' is replaced by the current argument field.\\n\
\\n\
Useful shortcuts include:\\n\
\\n\
@tt \\267 @rm Data conversions.  `@tt /x ()@rm\' converts to hex.\\n\
@tt \\267 @rm Type casts.  `@tt (char *)()@rm\' casts to a string.\\n\
@tt \\267 @rm Member access.  `@tt ().str( )@rm\' invokes the @tt str()@rm  method.\\n\
    (We use `@tt ( )@rm\' instead of `@tt ()@rm\' to prevent argument substitution.)\\n\
@tt \\267 @rm Pointer chains.  `@tt *(().next)@rm\' shows what the @tt next@rm  \
member points at.\\n\
\\n\
Click on @bf OK@rm  to apply the changes and close this window.\\n\
Use @bf Edit@symbol \\256@bf Save Options@rm  to save all shortcuts.",
"Ddd*splash_shell.title: Welcome to DDD!",
"Ddd*splash_shell.splash.background: white",
"Ddd*splash_shell.splash.foreground: black",
"Ddd*XmPanedWindow.marginWidth: 2",
"Ddd*XmPanedWindow.marginHeight: 2",
"Ddd*XmPanedWindow.shadowThickness: 0",
"Ddd*XmPanedWindow.spacing: 4",
"Ddd*graph_edit_panner.backgroundPixmap: 25_foreground",
"Ddd*graph_edit_panner.defaultScale: 10",
"Ddd*graph_edit_panner.baseTranslations: \
#override\\n\
<Btn1Down>: ddd-get-focus() start()\\n\
<Btn2Down>: ddd-get-focus() abort()\\n\
<Key>osfLeft: page(-.5p, +0)\\n\
<Key>osfRight: page(+.5p, +0)\\n\
<Key>osfUp: page(+0, -.5p)\\n\
<Key>osfDown: page(+0, +.5p)\\n\
<Key>osfBeginLine: page(0,0)\\n\
<Key>osfBackSpace: page(-1p, -1p)\\n\
<Key>osfDelete: page(-1p, -1p)\\n\
Shift<Key>Tab: ddd-prev-tab-group()\\n\
<Key>Tab: ddd-next-tab-group()\\n",
"Ddd*graph_edit.highlightOnEnter: On",
"Ddd*graph_edit.navigationType: TAB_GROUP",
"Ddd*graph_edit.helpString: \
@bs Data Window@rm\\n\
\\n\
The data window shows the data displays of the debugged program.\\n\
\\n\
@bf Selecting displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , click on a display \
to select it.\\n\
@tt \\267 @rm Double-click on a display title to select all connected displays.\\n\
@tt \\267 @rm Double-click on the background to select all displays.\\n\
@tt \\267 @rm Drag on the background to select several displays.\\n\
\\n\
Using @bs mouse button 2@rm  (or @key Shift@rm  + @bs mouse button 1@rm ) instead\\n\
@sl toggles@rm  the selection rather than setting it.\\n\
\\n\
@bf Moving displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , drag on a display to move\\n\
    all selected displays.\\n\
\\n\
@bf Modifying displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , double-click on a value for details.\\n\
@tt \\267 @rm Using @bs mouse button 3@rm , click on some display to modify it.\\n\
@tt \\267 @rm Using @key Shift@rm  + @bs mouse button 3@rm , select modifications from\\n\
    a shortcut menu.\\n\
\\n\
@bf Creating displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , double-click on a pointer to dereference it.\\n\
@tt \\267 @rm Using @bs mouse button 3@rm , click on the background\\n\
    to create new displays via a popup menu.",
"Ddd*data_disp_shell.helpString: \
@bs Data Window@rm\\n\
\\n\
The data window shows the data displays of the debugged program.\\n\
\\n\
@bf Selecting displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , click on a display \
to select it.\\n\
@tt \\267 @rm Double-click on a display title to select all connected displays.\\n\
@tt \\267 @rm Double-click on the background to select all displays.\\n\
@tt \\267 @rm Drag on the background to select several displays.\\n\
\\n\
Using @bs mouse button 2@rm  (or @key Shift@rm  + @bs mouse button 1@rm ) instead\\n\
@sl toggles@rm  the selection rather than setting it.\\n\
\\n\
@bf Moving displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , drag on a display to move\\n\
    all selected displays.\\n\
\\n\
@bf Modifying displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , double-click on a value for details.\\n\
@tt \\267 @rm Using @bs mouse button 3@rm , click on some display to modify it.\\n\
@tt \\267 @rm Using @key Shift@rm  + @bs mouse button 3@rm , select modifications from\\n\
    a shortcut menu.\\n\
\\n\
@bf Creating displays@rm\\n\
@tt \\267 @rm Using @bs mouse button 1@rm , double-click on a pointer to dereference it.\\n\
@tt \\267 @rm Using @bs mouse button 3@rm , click on the background\\n\
    to create new displays via a popup menu.",
"Ddd*graph_edit_panner.helpString: \
@bs Panner@rm\\n\
\\n\
Drag the slider with @bs mouse button 1@rm  to scroll the data window.",
"Ddd*graph_edit_panner.tipString: \
@rm Scroll data window",
"Ddd*graph_popup.selectAll.labelString: Select All",
"Ddd*graph_popup.selectAll.documentationString: \
@rm Select all displays",
"Ddd*graph_popup.refresh.labelString: Refresh",
"Ddd*graph_popup.refresh.documentationString: \
@rm Redraw all displays",
"Ddd*graph_popup.new.labelString: New Display...",
"Ddd*graph_popup.new.documentationString: \
@rm Create a new display at the selected position",
"Ddd*node_popup.dereference.labelString: Display *",
"Ddd*node_popup.dereference.documentationString: \
@rm Dereference the selected display",
"Ddd*node_popup.new.labelString: New Display",
"Ddd*node_popup.new.documentationString: \
@rm Create a new display dependent on the selected display",
"Ddd*node_popup.theme.labelString: Theme",
"Ddd*node_popup.theme.documentationString: \
@rm Select a theme for the selected display",
"Ddd*node_popup.detail.labelString: Show Detail",
"Ddd*node_popup.detail.documentationString: \
@rm Show/Hide details of the selected display",
"Ddd*node_popup.rotate.labelString: Rotate",
"Ddd*node_popup.rotate.documentationString: \
@rm Rotate the selected display",
"Ddd*node_popup.set.labelString: Set Value...",
"Ddd*node_popup.set.documentationString: \
@rm Change the selected display value",
"Ddd*node_popup.delete.labelString: Undisplay",
"Ddd*node_popup.delete.documentationString: \
@rm Delete the selected display",
"Ddd*newMenu.other.labelString: Other...",
"Ddd*newMenu.other.documentationString: \
@rm Modify the selected display expression to create a new display",
"Ddd*newMenu.edit.labelString: Edit Menu...",
"Ddd*newMenu.edit.documentationString: \
@rm Edit this menu",
"Ddd*themeMenu.edit.labelString: Edit Themes...",
"Ddd*themeMenu.edit.documentationString: \
@rm Edit themes",
"Ddd*shortcut_popup.other.labelString: Other...",
"Ddd*shortcut_popup.other.documentationString: \
@rm Modify the selected display expression to create a new display",
"Ddd*shortcut_popup.edit.labelString: Edit Menu...",
"Ddd*shortcut_popup.edit.documentationString: \
@rm Edit this menu",
"Ddd*newMenu*documentationString:",
"Ddd*shortcut_popup*documentationString:",
"Ddd*arg_label.labelString: ():",
"Ddd*arg.value: main",
"Ddd*arg*Text.value: main",
"Ddd*arg.helpString: \
@bs Argument@rm\\n\
\\n\
This is the argument @bf ()@rm  for the command buttons on the right.\\n\
\\n\
Edit @bf ()@rm  using the usual editing functions.\\n\
Set @bf ()@rm  by selecting items from the source window or the data window.\\n\
Clear @bf ()@rm  by clicking on the prompt @bf ():@rm .",
"Ddd*toolbar*helpString: \
@bs Tool Bar@rm\\n\
\\n\
Set the argument @bf ()@rm  for the command buttons on the right.\\n\
\\n\
To get help on a command button, just point on it and press @key F1@rm .\\n\
The item\'s functionality will be explained here.",
"Ddd*toolbar*dereference.labelString: Display *()",
"Ddd*toolbar*plot.labelString: Plot ()",
"Ddd*toolbar*history.labelString: Plot history of ()",
"Ddd*toolbar*detail.labelString: Show ()",
"Ddd*toolbar*show_more.labelString: Show More ()",
"Ddd*toolbar*show_just.labelString: Show Just ()",
"Ddd*toolbar*show_detail.labelString: Show All ()",
"Ddd*toolbar*hide_detail.labelString: Hide ()",
"Ddd*toolbar*rotate.labelString: Rotate ()",
"Ddd*toolbar*rotateAll.labelString: Rotate All ()",
"Ddd*toolbar*new.labelString: Display ()",
"Ddd*toolbar*new2.labelString: Display ()",
"Ddd*toolbar*dereference2.labelString: Display *()",
"Ddd*toolbar*delete2.labelString: Undisplay ()",
"Ddd*toolbar*set.labelString: Set ()",
"Ddd*toolbar*delete.labelString: Undisplay ()",
"Ddd*toolbar*cluster.labelString: Cluster ()",
"Ddd*toolbar*dereference.labelPixmap: dispref",
"Ddd*toolbar*dereference.labelInsensitivePixmap: dispref-xx",
"Ddd*toolbar*dereference.armPixmap: dispref-arm",
"Ddd*toolbar*dereference.highlightPixmap: dispref-hi",
"Ddd*toolbar*plot.labelPixmap: plot",
"Ddd*toolbar*plot.labelInsensitivePixmap: plot-xx",
"Ddd*toolbar*plot.armPixmap: plot-arm",
"Ddd*toolbar*plot.highlightPixmap: plot-hi",
"Ddd*toolbar*detail.labelPixmap: show",
"Ddd*toolbar*detail.labelInsensitivePixmap: show-xx",
"Ddd*toolbar*detail.armPixmap: show-arm",
"Ddd*toolbar*detail.highlightPixmap: show-hi",
"Ddd*toolbar*rotate.labelPixmap: rotate",
"Ddd*toolbar*rotate.labelInsensitivePixmap: rotate-xx",
"Ddd*toolbar*rotate.armPixmap: rotate-arm",
"Ddd*toolbar*rotate.highlightPixmap: rotate-hi",
"Ddd*toolbar*new.labelPixmap: display",
"Ddd*toolbar*new.labelInsensitivePixmap: display-xx",
"Ddd*toolbar*new.armPixmap: display-arm",
"Ddd*toolbar*new.highlightPixmap: display-hi",
"Ddd*toolbar*set.labelPixmap: set",
"Ddd*toolbar*set.labelInsensitivePixmap: set-xx",
"Ddd*toolbar*set.armPixmap: set-arm",
"Ddd*toolbar*set.highlightPixmap: set-hi",
"Ddd*toolbar*delete.labelPixmap: undisplay",
"Ddd*toolbar*delete.labelInsensitivePixmap: undisplay-xx",
"Ddd*toolbar*delete.armPixmap: undisplay-arm",
"Ddd*toolbar*delete.highlightPixmap: undisplay-hi",
"Ddd*toolbar*new.helpString:\
@bf Display () / Display *()@rm\\n\
\\n\
Display or dereference the argument @bf ()@rm  in the data window.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Shortcut 1@rm  @tt -@rm  User-defined shortcut 1.\\n\
@tt \\267 @bf Shortcut 2@rm  @tt -@rm  User-defined shortcut 2. ...\\n\
@tt \\267 @bf Other...@rm  @tt -@rm  Enter new shortcut.\\n\
@tt \\267 @bf Edit...@rm  @tt -@rm  Edit shortcuts.",
"Ddd*newMenu*helpString: \
@tt \\267 @bf Shortcut 1@rm  @tt -@rm  User-defined shortcut 1.\\n\
@tt \\267 @bf Shortcut 2@rm  @tt -@rm  User-defined shortcut 2. ...\\n\
@tt \\267 @bf Other...@rm  @tt -@rm  Enter new shortcut.\\n\
@tt \\267 @bf Edit...@rm  @tt -@rm  Edit shortcuts.",
"Ddd*toolbar*new.tipString:\
@rm Display @bf ()@rm ",
"Ddd*toolbar*new.documentationString:\
@rm Display the argument @bf ()@rm  in the data window \
(hold for menu)",
"Ddd*toolbar*new2.documentationString:\
@rm Display the argument @bf ()@rm  in the data window.",
"Ddd*toolbar*dereference.helpString:\
@bf Display *()@rm\\n\
\\n\
Dereference the selected display.",
"Ddd*toolbar*dereference.tipString:\
@rm Dereference @bf ()@rm ",
"Ddd*toolbar*dereference.documentationString:\
@rm Display the dereferenced argument @bf ()@rm  in the data window.",
"Ddd*toolbar*dereference2.documentationString:\
@rm Display the dereferenced argument @bf ()@rm  in the data window.",
"Ddd*toolbar*plot.helpString:\
@bf Plot ()@rm\\n\
\\n\
Plot the argument @bf ()@rm .\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
@tt \\267 @bf Plot History@rm  @tt -@rm  Plot previous and current values of @bf ()@rm .",
"Ddd*toolbar*plot.tipString:\
@rm Plot @bf ()@rm ",
"Ddd*toolbar*plot.documentationString:\
@rm Plot the argument @bf ()@rm ",
"Ddd*toolbar*history.documentationString:\
@rm Plot the value history of @bf ()@rm , as recorded at previous stops",
"Ddd*toolbar*detail.helpString: \
@bf Show ()@rm  / @bf Hide ()@rm\\n\
\\n\
Show/Hide details of the selected displays.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Show More@rm  @tt -@rm  Show more details.\\n\
@tt \\267 @bf Show Just@rm  @tt -@rm  Show details, excluding substructures.\\n\
@tt \\267 @bf Show All@rm  @tt -@rm  Show all details, including substructures.\\n\
@tt \\267 @bf Hide@rm  @tt -@rm  Hide Details.",
"Ddd*detailMenu*helpString: \
@tt \\267 @bf Show More@rm  @tt -@rm  Show more details.\\n\
@tt \\267 @bf Show Just@rm  @tt -@rm  Show details, excluding substructures.\\n\
@tt \\267 @bf Show All@rm  @tt -@rm  Show all details, including substructures.\\n\
@tt \\267 @bf Hide@rm  @tt -@rm  Hide Details.",
"Ddd*toolbar*detail.tipString: \
@rm Show/Hide selected details",
"Ddd*toolbar*detail.documentationString: \
@rm Show/Hide details of the selected displays (hold for menu)",
"Ddd*toolbar*show_more.documentationString: \
@rm Show more details of the selected displays",
"Ddd*toolbar*show_just.documentationString: \
@rm Show details of the selected displays, hiding substructures",
"Ddd*toolbar*show_detail.documentationString: \
@rm Show all details of the selected displays, including substructures",
"Ddd*toolbar*hide_detail.documentationString: \
@rm Hide details of the selected displays",
"Ddd*toolbar*rotate.helpString: \
@bf Rotate ()@rm\\n\
\\n\
Rotate the selected displays.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Rotate All@rm  @tt -@rm  Rotate substructures too.",
"Ddd*rotateMenu*helpString: \
@tt \\267 @bf Rotate All@rm  @tt -@rm  Rotate substructures too.",
"Ddd*toolbar*rotate.tipString: \
@rm Rotate selected displays",
"Ddd*toolbar*rotate.documentationString: \
@rm Rotate the selected displays (hold for menu)",
"Ddd*toolbar*rotateAll.documentationString: \
@rm Rotate the selected displays, including substructures",
"Ddd*toolbar*set.helpString: \
@bf Set ()@rm\\n\
\\n\
Change the value of the argument @bf ()@rm .",
"Ddd*toolbar*set.tipString: \
@rm Set the value of @bf ()@rm ",
"Ddd*toolbar*set.documentationString: \
@rm Change the value of the argument @bf ()@rm ",
"Ddd*toolbar*delete.helpString: \
@bf Undisplay ()@rm\\n\
\\n\
Delete the selected displays.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
@tt \\267 @bf Cluster ()@rm  @tt -@rm  Merge selected displays into one single cluster.\\n\
@tt \\267 @bf Uncluster ()@rm  @tt -@rm  Break cluster into individual displays.",
"Ddd*toolbar*delete.tipString: \
@rm Undisplay @bf ()@rm ",
"Ddd*toolbar*delete.documentationString: \
@rm Delete the selected displays",
"Ddd*toolbar*lookup.labelString: Lookup ()",
"Ddd*toolbar*breakAt.labelString: Break at ()",
"Ddd*toolbar*breakAt2.labelString: Set Breakpoint at ()",
"Ddd*toolbar*clearAt2.labelString: Clear Breakpoint at ()",
"Ddd*toolbar*tempBreakAt.labelString: Set Temporary Breakpoint at ()",
"Ddd*toolbar*regexBreakAt.labelString: Set Breakpoints at Regexp ()",
"Ddd*toolbar*contUntil.labelString: Continue Until ()",
"Ddd*toolbar*enableBreak.labelString: Enable Breakpoint at ()",
"Ddd*toolbar*enableWatch.labelString: Enable Watchpoint at ()",
"Ddd*toolbar*breakProperties.labelString: Breakpoint Properties...",
"Ddd*toolbar*watchProperties.labelString: Watchpoint Properties...",
"Ddd*toolbar*setPC.labelString: Set Execution Position to ()",
"Ddd*toolbar*watch.labelString: Unwatch ()",
"Ddd*toolbar*cwatch.labelString: Set Watchpoint on ()",
"Ddd*toolbar*rwatch.labelString: Set Read Watchpoint on ()",
"Ddd*toolbar*awatch.labelString: Set Access Watchpoint on ()",
"Ddd*toolbar*unwatch.labelString: Delete Watchpoint on ()",
"Ddd*toolbar*print.labelString: Print ()",
"Ddd*toolbar*printRef.labelString: Print *()",
"Ddd*toolbar*dump.labelString: Dump ()",
"Ddd*toolbar*whatis.labelString: Whatis ()",
"Ddd*toolbar*examine.labelString: Examine ()...",
"Ddd*toolbar*display.labelString: Display ()",
"Ddd*toolbar*dispRef.labelString: Display *()",
"Ddd*toolbar*find.labelString: @charset Find@small>> @charset()@rm ",
"Ddd*toolbar*findBackward.labelString: @charset Find@small<< @charset()@rm ",
"Ddd*toolbar*findForward.labelString: @charset Find@small>> @charset()@rm ",
"Ddd*toolbar*lookup.labelPixmap: lookup",
"Ddd*toolbar*lookup.labelInsensitivePixmap: lookup-xx",
"Ddd*toolbar*lookup.armPixmap: lookup-arm",
"Ddd*toolbar*lookup.highlightPixmap: lookup-hi",
"Ddd*toolbar*breakAt.labelPixmap: break_at",
"Ddd*toolbar*breakAt.labelInsensitivePixmap: break_at-xx",
"Ddd*toolbar*breakAt.armPixmap: break_at-arm",
"Ddd*toolbar*breakAt.highlightPixmap: break_at-hi",
"Ddd*toolbar*watch.labelPixmap: watch",
"Ddd*toolbar*watch.labelInsensitivePixmap: watch-xx",
"Ddd*toolbar*watch.armPixmap: watch-arm",
"Ddd*toolbar*watch.highlightPixmap: watch-hi",
"Ddd*toolbar*print.labelPixmap: print",
"Ddd*toolbar*print.labelInsensitivePixmap: print-xx",
"Ddd*toolbar*print.armPixmap: print-arm",
"Ddd*toolbar*print.highlightPixmap: print-hi",
"Ddd*toolbar*display.labelPixmap: display",
"Ddd*toolbar*display.labelInsensitivePixmap: display-xx",
"Ddd*toolbar*display.armPixmap: display-arm",
"Ddd*toolbar*display.highlightPixmap: display-hi",
"Ddd*toolbar*dispRef.labelPixmap: dispref",
"Ddd*toolbar*dispRef.labelInsensitivePixmap: dispref-xx",
"Ddd*toolbar*dispRef.armPixmap: dispref-arm",
"Ddd*toolbar*dispRef.highlightPixmap: dispref-hi",
"Ddd*toolbar*find.labelPixmap: find_forward",
"Ddd*toolbar*find.labelInsensitivePixmap: find_forward-xx",
"Ddd*toolbar*find.armPixmap: find_forward-arm",
"Ddd*toolbar*find.highlightPixmap: find_forward-hi",
"Ddd*toolbar*lookup.helpString: \
@bf Lookup ()@rm\\n\
\\n\
Lookup a line, file, function, variable, or breakpoint in the source.\\n\
@tt \\267 @rm If the argument @bf ()@rm  is empty, \
lookup the current execution position\\n\
    (or cursor position, if there is no current execution position).\\n\
@tt \\267 @rm If @bf ()@rm  contains a number, \
lookup that line number in the current source.\\n\
@tt \\267 @rm If @bf ()@rm  contains `@tt @sl filename@rm :@sl line@rm @rm\', lookup \
line number @sl line@rm\\n\
    in the source file @sl filename@rm .\\n\
@tt \\267 @rm If @bf ()@rm  contains `@tt #@sl number@rm @rm\', lookup breakpoint \
@sl number@rm .\\n\
@tt \\267 @rm If @bf ()@rm  contains an address, lookup that address.\\n\
@tt \\267 @rm If @bf ()@rm  contains a function or variable name, lookup \
the definition\\n\
    of that function or variable.",
"Ddd*toolbar*lookup.tipString: \
@rm Lookup @bf ()@rm  in the source",
"Ddd*toolbar*lookup.documentationString: \
@rm Lookup a line, file, function, variable or breakpoint in the source",
"Ddd*toolbar*breakAt.helpString: \
@bf Break at ()@rm  / @bf Clear at ()@rm\\n\
\\n\
Set or delete a breakpoint at the argument @bf ()@rm .\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Set Temporary Breakpoint at ()@rm  @tt -@rm  set temporary breakpoint.\\n\
@tt \\267 @bf Set Breakpoints at Regexp ()@rm  @tt -@rm  \
break at all functions matching @bf ()@rm .\\n\
@tt \\267 @bf Continue Until ()@rm  @tt -@rm  set temporary breakpoint and resume execution.\\n\
@tt \\267 @bf Enable / Disable Breakpoint at ()@rm  @tt -@rm  enable or disable breakpoint.\\n\
@tt \\267 @bf Breakpoint Properties...@rm  @tt -@rm  set properties of breakpoint at @bf ()@rm .\\n\
@tt \\267 @bf Set Execution Position to ()@rm  @tt -@rm  move execution position.",
"Ddd*breakAtMenu*helpString: \
@tt \\267 @bf Set Temporary Breakpoint at ()@rm  @tt -@rm  set temporary breakpoint.\\n\
@tt \\267 @bf Set Breakpoints at Regexp ()@rm  @tt -@rm  \
break at all functions matching @bf ()@rm .\\n\
@tt \\267 @bf Continue Until ()@rm  @tt -@rm  set temporary breakpoint and resume execution.\\n\
@tt \\267 @bf Enable / Disable Breakpoint at ()@rm  @tt -@rm  enable or disable breakpoint.\\n\
@tt \\267 @bf Breakpoint Properties...@rm  @tt -@rm  set properties of breakpoint at @bf ()@rm .\\n\
@tt \\267 @bf Set Execution Position to ()@rm  @tt -@rm  move execution position.",
"Ddd*toolbar*breakAt.tipString: \
@rm Set/Delete breakpoint at @bf ()@rm ",
"Ddd*toolbar*breakAt.documentationString: \
@rm Set or delete a breakpoint at the argument @bf ()@rm  (hold for menu)",
"Ddd*toolbar*tempBreakAt.documentationString: \
@rm Set a temporary breakpoint at the argument @bf ()@rm ",
"Ddd*toolbar*regexBreakAt.documentationString: \
@rm Set breakpoints on all functions matching the regular expression in @bf ()@rm ",
"Ddd*toolbar*contUntil.documentationString: \
@rm Set a temporary breakpoint at @bf ()@rm  and resume execution",
"Ddd*toolbar*enableBreak.documentationString: \
@rm Enable or disable the breakpoint at the argument @bf ()@rm ",
"Ddd*toolbar*enableWatch.documentationString: \
@rm Enable or disable the watchpoint on the argument @bf ()@rm ",
"Ddd*toolbar*breakProperties.documentationString: \
@rm Edit the properties of the breakpoint at the argument @bf ()@rm ",
"Ddd*toolbar*watchProperties.documentationString: \
@rm Edit the properties of the watchpoint on the argument @bf ()@rm ",
"Ddd*toolbar*setPC.documentationString: \
@rm Set the current execution position to @bf ()@rm ",
"Ddd*toolbar*print.helpString: \
@bf Print ()@rm\\n\
\\n\
Print the argument @bf ()@rm  in the @GDB@ console.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Print *()@rm  @tt -@rm  print dereferenced argument.\\n\
@tt \\267 @bf Whatis ()@rm  @tt -@rm  print type of argument.\\n\
@tt \\267 @bf Examine ()@rm  @tt -@rm  examine memory starting at argument.",
"Ddd*printMenu*helpString: \
@tt \\267 @bf Print *()@rm  @tt -@rm  print dereferenced argument.\\n\
@tt \\267 @bf Whatis ()@rm  @tt -@rm  print type of argument.\\n\
@tt \\267 @bf Examine ()@rm  @tt -@rm  examine memory starting at argument.",
"Ddd*toolbar*print.tipString: \
@rm Print @bf ()@rm  in the debugger console",
"Ddd*toolbar*print.documentationString: \
@rm Print the argument @bf ()@rm  in the @GDB@ console (hold for menu)",
"Ddd*toolbar*printRef.documentationString: \
@rm Print the dereferenced argument @bf ()@rm  in the @GDB@ console",
"Ddd*toolbar*dump.documentationString: \
@rm Print the detailed argument @bf ()@rm  in the @GDB@ console",
"Ddd*toolbar*whatis.documentationString: \
@rm Print the type of the argument @bf ()@rm  in the @GDB@ console",
"Ddd*toolbar*examine.documentationString: \
@rm Examine memory starting at @bf ()@rm ",
"Ddd*toolbar*display.helpString: \
@bf Display ()@rm\\n\
\\n\
Display the argument @bf ()@rm  in the data window.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Display *()@rm  @tt -@rm  display dereferenced argument.",
"Ddd*displayMenu*helpString: \
@tt \\267 @bf Display *()@rm  @tt -@rm  display dereferenced argument.",
"Ddd*toolbar*display.tipString: \
@rm Display @bf ()@rm  in the data window",
"Ddd*toolbar*display.documentationString: \
@rm Display the argument @bf ()@rm  in the data window (hold for menu)",
"Ddd*toolbar*dispRef.documentationString: \
@rm Display the dereferenced argument @bf ()@rm  in the data window",
"Ddd*toolbar*watch.helpString: \
@bf Watch ()@rm  / @bf Unwatch()@rm\\n\
\\n\
Stop whenever the value of @bf ()@rm  changes.\\n\
\\n\
@bf Watch ()@rm  sets a @sl watchpoint@rm  on @bf ()@rm  - a special breakpoint that\\n\
stops your program whenever the value of @bf ()@rm  changes.\\n\
@bf Unwatch()@rm  deletes the @sl watchpoint@rm  associated with @bf ()@rm .\\n\
\\n\
To see all watchpoints, select @bf Data@symbol \\256@bf Edit Watchpoints@rm .\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf Watchpoint Properties...@rm  @tt -@rm  set properties of watchpoint on @bf ()@rm .\\n\
@tt \\267 @bf Set watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  changes; same as @bf Watch()@rm .\\n\
@tt \\267 @bf Set read watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  is read.\\n\
@tt \\267 @bf Set access watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  is either read or written.\\n\
\\n\
Unless you have special hardware support, watchpoints slow down the\\n\
debugged program by about two orders of magnitude.",
"Ddd*watchMenu*helpString: \
@tt \\267 @bf Watchpoint Properties...@rm  @tt -@rm  set properties of watchpoint on @bf ()@rm .\\n\
@tt \\267 @bf Set watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  changes; same as @bf Watch()@rm .\\n\
@tt \\267 @bf Set read watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  is read.\\n\
@tt \\267 @bf Set access watchpoint on ()@rm  @tt -@rm  stop whenever @bf ()@rm  is either read or written.\\n\
\\n\
Unless you have special hardware support, watchpoints slow down the\\n\
debugged program by about two orders of magnitude.",
"Ddd*toolbar*watch.tipString: \
@rm Stop whenever @bf ()@rm  changes",
"Ddd*toolbar*watch.documentationString: \
@rm Stop whenever the value of @bf ()@rm  changes (hold for menu)",
"Ddd*toolbar*cwatch.documentationString: \
@rm Stop whenever the value of @bf ()@rm  changes",
"Ddd*toolbar*rwatch.documentationString: \
@rm Stop whenever @bf ()@rm  is read (requires hardware support)",
"Ddd*toolbar*awatch.documentationString: \
@rm Stop whenever @bf ()@rm  is either read or written (requires hardware support)",
"Ddd*toolbar*find.helpString: \
@bf @charset Find@small<< @charset()@rm  / @charset Find@small>> @charset()@rm @rm\\n\
\\n\
Search an occurrence of @bf ()@rm  in the current source text.\\n\
\\n\
See @bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Source@rm  for search settings.\\n\
\\n\
\
Pulldown menu functions (press and hold @bs mouse button 1@rm ):\
\\n\
\
@tt \\267 @bf @charset Find@small<< @charset()@rm @rm  @tt -@rm  find backwards.\\n\
@tt \\267 @bf @charset Find@small>> @charset()@rm @rm  @tt -@rm  find forwards.",
"Ddd*findMenu*helpString: \
@tt \\267 @bf @charset Find@small<< @charset()@rm @rm  @tt -@rm  find backwards.\\n\
@tt \\267 @bf @charset Find@small>> @charset()@rm @rm  @tt -@rm  find forwards.",
"Ddd*toolbar*find.tipString: \
@rm Find @bf ()@rm  in source",
"Ddd*toolbar*find.documentationString: \
@rm Search @bf ()@rm  in the current source (hold for menu)",
"Ddd*toolbar*findBackward.documentationString: \
@rm Search the previous occurrence of @bf ()@rm  in the source",
"Ddd*toolbar*findForward.documentationString: \
@rm Search the next occurrence of @bf ()@rm  in the source",
"Ddd*status_form*helpString: \
@bs Status Line@rm\\n\
\\n\
The status line shows the last @GDB@ message as well as short DDD messages.\\n\
To view tthe most recent messages, just click on the status line.\\n\
\\n\
The @GDB@ status indicator on the right side blinks while @GDB@ is busy.\\n\
You can disable it by clicking on the indicator.",
"Ddd*status_form*borderWidth: 0",
"Ddd*status_form*marginWidth: 0",
"Ddd*status_form*marginHeight: 0",
"Ddd*status_form*marginTop: 0",
"Ddd*status_form*marginBottom: 0",
"Ddd*status_form*spacing: 0",
"Ddd*status_form*highlightThickness: 0",
"Ddd*status_form.arrow.tipString: \
@rm Show recent messages",
"Ddd*status_form.arrow.documentationString:\\n\\n",
"Ddd*status_form.status.alignment: XmALIGNMENT_BEGINNING",
"Ddd*status_form.status.leftOffset: 5",
"Ddd*status_form.status.rightOffset: 5",
"Ddd*status_form.status.labelString: Ready.",
"Ddd*status_form.status.fillOnArm: off",
"Ddd*status_form.led.highlightThickness: 0",
"Ddd*status_form.led.labelString:",
"Ddd*status_form.led.visibleWhenOff: off",
"Ddd*status_form.led.selectColor: DarkGreen",
"Ddd*status_form.led.tipString: \
@rm @GDB@ status",
"Ddd*status_form.led.documentationString: \
@rm @GDB@ status indicator: blinks while @GDB@ is busy \
(click to disable or enable)",
"Ddd*status_lines.marginWidth: 0",
"Ddd*status_lines.marginHeight: 0",
"Ddd*status_lines.borderWidth: 0",
"Ddd*status_lines.spacing: 0",
"Ddd*status_history.row.background: Black",
"Ddd*source_text_w.scrollHorizontal: off",
"Ddd*source_text_w.wordWrap: on",
"Ddd*code_text_w.scrollHorizontal: off",
"Ddd*code_text_w.wordWrap: on",
"Ddd*source_text_w.helpString: \
@bs Source Text Window@rm\\n\
\\n\
The source text window shows the source text of the debugged program.\\n\
\\n\
@bf Breakpoint area@rm\\n\
On the left of the source code, line numbers and breakpoints are shown.\\n\
@tt \\267 @rm A plain stop sign or `@tt #@sl n@rm #@rm\' indicates \
an enabled breakpoint.\\n\
@tt \\267 @rm A grey stop sign or `@tt _@sl n@rm _@rm\' indicates \
a disabled breakpoint.\\n\
@tt \\267 @rm The next executed line is indicated by an arrow or `@tt >@rm\'.\\n\
\\n\
Click @bs mouse button 1@rm  to select positions.\\n\
Click @bs mouse button 3@rm  to set and modify breakpoints.\\n\
\\n\
@bf Source text area@rm\\n\
On the right side, the source code is shown.\\n\
\\n\
Click @bs mouse button 1@rm  to select words.\\n\
Drag with @bs mouse button 1@rm  to extend your selection.\\n\
Click @bs mouse button 3@rm  to show values and lookup places.\\n\
\\n\
To view a specific source, use the @bf Lookup ()@rm  button below.",
"Ddd*code_text_w.helpString: \
@bs Machine Code Window@rm\\n\
\\n\
The machine code window shows the machine code of the debugged program.\\n\
\\n\
@bf Breakpoint area@rm\\n\
On the left of the machine code, addresses and breakpoints are shown.\\n\
@tt \\267 @rm A plain stop sign or `@tt #@sl n@rm #@rm\' indicates \
an enabled breakpoint.\\n\
@tt \\267 @rm A grey stop sign or `@tt _@sl n@rm _@rm\' indicates \
a disabled breakpoint.\\n\
@tt \\267 @rm The next executed location is indicated by an arrow or `@tt >@rm\'.\\n\
\\n\
Click @bs mouse button 1@rm  to select addresses.\\n\
Click @bs mouse button 3@rm  to set and modify breakpoints.\\n\
\\n\
@bf Machine code area@rm\\n\
On the right side, the machine code instructions are shown.\\n\
\\n\
Click @bs mouse button 1@rm  to select words.\\n\
Drag with @bs mouse button 1@rm  to extend your selection.\\n\
Click @bs mouse button 3@rm  to show values and lookup places.\\n\
\\n\
To disassemble a specific function or address,\\n\
use the @bf Lookup ()@rm  button below.",
"Ddd*source_view_shell.helpString: \
@bs Source Window@rm\\n\
\\n\
The source window displays the source and machine code of the \
debugged program.\\n\
\\n\
The upper area shows the source code.\\n\
The lower area shows the machine code.\\n\
\\n\
Use @bf Help@symbol \\256@bf On Item@rm  to get\\n\
detailed help on each of these areas.",
"Ddd*line_popup.set.labelString: Set Breakpoint",
"Ddd*line_popup.set.documentationString: \
@rm Set a breakpoint at the selected position",
"Ddd*line_popup.set_temp.labelString: Set Temporary Breakpoint",
"Ddd*line_popup.set_temp.documentationString: \
@rm Set a temporary breakpoint which will be deleted when hit",
"Ddd*line_popup.temp_n_cont.labelString: Continue Until Here",
"Ddd*line_popup.temp_n_cont.documentationString: \
@rm Set a temporary breakpoint and resume execution",
"Ddd*line_popup.set_pc.labelString: Set Execution Position",
"Ddd*line_popup.set_pc.documentationString: \
@rm Set the current execution position to the selected position",
"Ddd*bp_popup.disable.labelString: Disable Breakpoint",
"Ddd*bp_popup.disable.documentationString: \
@rm Disable the selected breakpoint",
"Ddd*bp_popup.properties.labelString: Properties...",
"Ddd*bp_popup.properties.documentationString: \
@rm Edit the properties of the selected breakpoint",
"Ddd*bp_popup.delete.labelString: Delete Breakpoint",
"Ddd*bp_popup.delete.documentationString: \
@rm Delete the selected breakpoint",
"Ddd*bp_popup.set_pc.labelString: Set Execution Position",
"Ddd*bp_popup.set_pc.documentationString: \
@rm Set the current execution position to the selected position",
"Ddd*text_popup.print.documentationString: \
@rm Print the value of the selected item in the @GDB@ console",
"Ddd*text_popup.disp.documentationString: \
@rm Display the selected item in the data window",
"Ddd*text_popup.watch.documentationString: \
@rm Stop execution whenever the selected item changes",
"Ddd*text_popup.printRef.documentationString: \
@rm Print the dereferenced value of the selected item in the @GDB@ console",
"Ddd*text_popup.dump.documentationString: \
@rm Print the detailed value of the selected item in the @GDB@ console",
"Ddd*text_popup.dispRef.documentationString: \
@rm Display the dereferenced item in the data window",
"Ddd*text_popup.watchRef.documentationString: \
@rm Stop execution whenever the dereferenced item changes",
"Ddd*text_popup.whatis.documentationString: \
@rm Print the type of the selected item in the @GDB@ console",
"Ddd*text_popup.lookup.documentationString: \
@rm Lookup definition of the selected item",
"Ddd*text_popup.breakAt.documentationString: \
@rm Set a breakpoint at the selected function",
"Ddd*text_popup.clearAt.documentationString: \
@rm Delete a breakpoint at the selected function",
"Ddd*source_form_w.XmPushButton.shadowThickness: 0",
"Ddd*source_form_w.XmPushButton.highlightThickness: 0",
"Ddd*source_form_w.XmPushButton.marginHeight: 0",
"Ddd*source_form_w.XmPushButton.marginWidth: 0",
"Ddd*source_form_w.XmPushButton.borderWidth: 0",
"Ddd*code_form_w.XmPushButton.shadowThickness: 0",
"Ddd*code_form_w.XmPushButton.highlightThickness: 0",
"Ddd*code_form_w.XmPushButton.marginHeight: 0",
"Ddd*code_form_w.XmPushButton.marginWidth: 0",
"Ddd*code_form_w.XmPushButton.borderWidth: 0",
"Ddd*source_form_w.plain_arrow*helpString: \
@bf Current Execution Position@rm\\n\
The plain arrow shows the current execution position in the lowest frame.\\n\
\\n\
To change the execution position, drag it with @bs mouse button 1@rm .",
"Ddd*source_form_w.plain_arrow*tipString: \
@rm Current execution position",
"Ddd*source_form_w.plain_arrow*documentationString: \
@rm Current execution position (drag to change)",
"Ddd*code_form_w.plain_arrow*helpString: \
@bf Current Program Counter@rm\\n\
The plain arrow shows the current program counter in the lowest frame.\\n\
\\n\
To change the program counter, drag it with @bs mouse button 1@rm .",
"Ddd*code_form_w.plain_arrow*tipString: \
@rm Current program counter",
"Ddd*code_form_w.plain_arrow*documentationString: \
@rm Current program counter (drag to change)",
"Ddd*source_form_w.grey_arrow*helpString: \
@bf Last Execution Position@rm\\n\
The grey arrow shows the last execution position in the current frame.",
"Ddd*source_form_w.grey_arrow*tipString: \
@rm Last execution position in current frame",
"Ddd*code_form_w.grey_arrow*helpString: \
@bf Last Program Counter@rm\\n\
The grey arrow shows the last program counter in the current frame.",
"Ddd*code_form_w.grey_arrow*tipString: \
@rm Last program counter in current frame",
"Ddd*source_form_w.past_arrow*helpString: \
@bf Earlier Execution Position@rm\\n\
The dashed arrow shows an earlier execution position.",
"Ddd*source_form_w.past_arrow*tipString: \
@rm Earlier execution position",
"Ddd*code_form_w.past_arrow*helpString: \
@bf Earlier Program Counter@rm\\n\
The dashed arrow shows an earlier program counter.",
"Ddd*code_form_w.past_arrow*tipString: \
@rm Earlier program counter",
"Ddd*source_form_w.signal_arrow*helpString: \
@bf Current Execution Position (signaled)@rm\\n\
The lightning arrow shows the current execution position after being\\n\
stopped by a signal.\\n\
\\n\
To change the execution position, drag it with @bs mouse button 1@rm .",
"Ddd*source_form_w.signal_arrow*tipString: \
@rm Current execution position (stopped by signal)",
"Ddd*code_form_w.signal_arrow*helpString: \
@bf Current Program Counter (signaled)@rm\\n\
The lightning arrow shows the current program counter after being\\n\
stopped by a signal.\\n\
\\n\
To change the program counter, drag it with @bs mouse button 1@rm .",
"Ddd*code_form_w.signal_arrow*tipString: \
@rm Current program counter (stopped by signal)",
"Ddd*plain_stop.helpString: \
@bf Breakpoint (enabled)@rm\\n\
The debugged program will stop when reaching this location.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*plain_stop.tipString: ",
"Ddd*plain_stop.documentationString: ",
"Ddd*grey_stop.helpString: \
@bf Breakpoint (disabled)@rm\\n\
A disabled breakpoint has no effect until reenabled.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*grey_stop.tipString: ",
"Ddd*grey_stop.documentationString: ",
"Ddd*plain_cond.helpString: \
@bf Conditional breakpoint (enabled)@rm\\n\
The debugged program will stop when reaching this location\\n\
if the associated condition is true.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*plain_cond.tipString: ",
"Ddd*plain_cond.documentationString: ",
"Ddd*grey_cond.helpString: \
@bf Conditional breakpoint (disabled)@rm\\n\
A disabled breakpoint has no effect until reenabled.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*grey_cond.tipString: ",
"Ddd*grey_cond.documentationString: ",
"Ddd*plain_temp.helpString: \
@bf Temporary breakpoint (enabled)@rm\\n\
The debugged program will stop when reaching this location.\\n\
The breakpoint will be deleted when hit.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*plain_temp.tipString: ",
"Ddd*plain_temp.documentationString: ",
"Ddd*grey_temp.helpString: \
@bf Temporary breakpoint (disabled)@rm\\n\
A disabled breakpoint has no effect until reenabled.\\n\
\\n\
To change the breakpoint properties, press @bs mouse button 3@rm .\\n\
To move it to another location, drag it using @bs mouse button 1@rm .\\n\
To copy it to another location, drag it using @key Shift@rm +@bs mouse button 1@rm .",
"Ddd*grey_temp.tipString: ",
"Ddd*grey_temp.documentationString: ",
"Ddd.helpString: \
@bs DDD Main Window@rm\\n\
\\n\
The main window consists of the following areas:\\n\
\\n\
@tt \\267 @rm At the top, the @sl Data Window@rm  shows the data displays\\n\
    of the debugged program.\\n\
@tt \\267 @rm In the center, the @sl Source Text Window@rm  shows the \
currently\\n\
    executed source code.\\n\
@tt \\267 @rm Optionally, there may be a @sl Machine Code Window@rm  below\\n\
    which shows the current machine code.\\n\
@tt \\267 @rm At the bottom, the @sl @GDB@ Console@rm  allows for \
interaction\\n\
    with @GDB@ and the debugged program.\\n\
\\n\
Use @bf Help@symbol \\256@bf On Item@rm  to get detailed \
help on any of these areas.",
"Ddd.main_window.helpString: \
@bs DDD Main Window@rm\\n\
\\n\
The main window consists of the following areas:\\n\
\\n\
@tt \\267 @rm At the top, the @sl Data Window@rm  shows the data displays\\n\
    of the debugged program.\\n\
@tt \\267 @rm In the center, the @sl Source Text Window@rm  shows the \
currently\\n\
    executed source code.\\n\
@tt \\267 @rm Optionally, there may be a @sl Machine Code Window@rm  below\\n\
    which shows the current machine code.\\n\
@tt \\267 @rm At the bottom, the @sl @GDB@ Console@rm  allows for \
interaction\\n\
    with @GDB@ and the debugged program.\\n\
\\n\
Use @bf Help@symbol \\256@bf On Item@rm  to get detailed \
help on any of these areas.",
"Ddd*gdb_w.value: ",
"Ddd*gdb_w.editable: on",
"Ddd*gdb_w.allowResize: on",
"Ddd*gdb_w.editMode: XmMULTI_LINE_EDIT",
"Ddd*gdb_w.scrollHorizontal: off",
"Ddd*gdb_w.wordWrap: on",
"Ddd*gdb_w.autoShowCursorPosition: on",
"Ddd*gdb_w.cursorPositionVisible: on",
"Ddd*gdb_w.helpString: \
@bs @GDB@ Console@rm\\n\
\\n\
The @GDB@ console shows the @GDB@ input and output\\n\
as well as the input and output of the debugged program.\\n\
\\n\
You can enter @GDB@ commands here.\\n\
\\n\
To get a list of @GDB@ commands, enter `@tt help@rm\' at the @GDB@ prompt.\\n\
See the @bf Commands@rm  menu for the most important editing commands.",
"Ddd*command_shell.helpString: \
@bs @GDB@ Console@rm\\n\
\\n\
The @GDB@ console shows the @GDB@ input and output\\n\
as well as the input and output of the debugged program.\\n\
\\n\
You can enter @GDB@ commands here.\\n\
\\n\
To get a list of @GDB@ commands, enter `@tt help@rm\' at the @GDB@ prompt.\\n\
See the @bf Commands@rm  menu for the most important editing commands.",
"Ddd*gdb_popup.clear_line.labelString: Clear Line",
"Ddd*gdb_popup.clear_line.documentationString: \
@rm Clear @GDB@ command line",
"Ddd*gdb_popup.clear_window.labelString: Clear Window",
"Ddd*gdb_popup.clear_window.documentationString: \
@rm Clear all before last @GDB@ prompt",
"Ddd*tool_shell*saveUnder: on",
"Ddd*tool_shell.helpString: \
@bs Command Tool@rm\\n\
\\n\
By clicking on one of the buttons, \
the corresponding command is sent to @GDB@.\\n\
Press @key F1@rm  on a button to get a short command description.",
"Ddd*tool_buttons.helpString:\
@bs Command Tool@rm\\n\
\\n\
By clicking on one of the buttons, \
the corresponding command is sent to @GDB@.\\n\
Press @key F1@rm  on a button to get a short command description.",
"Ddd*plot.helpString: \
@bs Plot Window@rm\\n\
\\n\
This window shows a plot of numerical arrays and/or scalars\\n\
of the debugged program.\\n\
\\n\
In a 2-D plot, a point at X/Y shows the value Y at the array index X.\\n\
In a 3-D plot, a point at X/Y/Z shows the value Z at the array index X/Y.\\n\
Scalars are shown as lines and can be rotated using the @bf Rotate ()@rm  button.\\n\
\\n\
You can modify the plot appearance via the options in the menu bar.\\n\
@bf File@symbol \\256@bf Command@rm  gives you direct access to the Gnuplot program.\\n\
\\n\
Use @bf File@symbol \\256@bf Close@rm  to close this window.",
"Ddd*plot*swallower.helpString: \
@bs Plot Window@rm\\n\
\\n\
This window shows a plot of numerical arrays and/or scalars\\n\
of the debugged program.\\n\
\\n\
In a 2-D plot, a point at X/Y shows the value Y at the array index X.\\n\
In a 3-D plot, a point at X/Y/Z shows the value Z at the array index X/Y.\\n\
Scalars are shown as lines and can be rotated using the @bf Rotate ()@rm  button.\\n\
\\n\
You can modify the plot appearance via the options in the menu bar.\\n\
@bf File@symbol \\256@bf Command@rm  gives you direct access to the Gnuplot program.\\n\
\\n\
Use @bf File@symbol \\256@bf Close@rm  to close this window.",
"Ddd*plot*area.helpString: \
@bs Plot Window@rm\\n\
\\n\
This window shows a plot of numerical arrays and/or scalars\\n\
of the debugged program.\\n\
\\n\
In a 2-D plot, a point at X/Y shows the value Y at the array index X.\\n\
In a 3-D plot, a point at X/Y/Z shows the value Z at the array index X/Y.\\n\
Scalars are shown as lines and can be rotated using the @bf Rotate ()@rm  button.\\n\
\\n\
You can modify the plot appearance via the options in the menu bar.\\n\
@bf File@symbol \\256@bf Command@rm  gives you direct access to the Gnuplot program.\\n\
\\n\
Use @bf File@symbol \\256@bf Close@rm  to close this window.",
"Ddd*plot*replot.labelString: Refresh Plot",
"Ddd*plot*replot.mnemonic: R",
"Ddd*plot*replot.accelerator: ~Shift ~Meta Ctrl<Key>L",
"Ddd*plot*replot.acceleratorText: Ctrl+L",
"Ddd*plot*replot.documentationString: \
@rm Refresh plot, using current values",
"Ddd*plot*command.labelString: Command...",
"Ddd*plot*command.mnemonic: o",
"Ddd*plot*command.documentationString: \
@rm Enter plotting command",
"Ddd*plot*export.labelString: Save Data As...",
"Ddd*plot*export.mnemonic: S",
"Ddd*plot*export.accelerator: ~Shift ~Meta Ctrl<Key>S",
"Ddd*plot*export.acceleratorText: Ctrl+S",
"Ddd*plot*export.documentationString: \
@rm Write plotted data to file",
"Ddd*plot*print.labelString: Print Plot...",
"Ddd*plot*print.mnemonic: P",
"Ddd*plot*print.documentationString: \
@rm Print the current plot",
"Ddd*plot*menubar.helpString: \
@bs Menu Bar@rm\\n\
\\n\
@tt \\267 @bf File@rm  @tt -@rm  print plot and close this window.\\n\
@tt \\267 @bf Edit@rm  @tt -@rm  cut, copy, and paste text.\\n\
@tt \\267 @bf View@rm  @tt -@rm  set plot options.\\n\
@tt \\267 @bf Plot@rm  @tt -@rm  set plot style.\\n\
@tt \\267 @bf Scale@rm  @tt -@rm  set scale style.\\n\
@tt \\267 @bf Contour@rm  @tt -@rm  set contour style.\\n\
@tt \\267 @bf Help@rm  @tt -@rm  on-line help and version information.",
"Ddd*menubar.plotView.labelString: View",
"Ddd*menubar.plotView.mnemonic: V",
"Ddd*menubar.plotView.documentationString: \
@rm Set plot options",
"Ddd*menubar.plotView.helpString: \
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Border@rm  @tt -@rm  display border.\\n\
@tt \\267 @bf Time@rm  @tt -@rm  display time of plot.\\n\
\\n\
@tt \\267 @bf Grid@rm  @tt -@rm  display grid.\\n\
@tt \\267 @bf X Zero Axis@rm  @tt -@rm  display X zero axis.\\n\
@tt \\267 @bf Y Zero Axis@rm  @tt -@rm  display Y zero axis.",
"Ddd*plotViewMenu*helpString: \
@bs View Menu@rm\\n\
\\n\
@tt \\267 @bf Border@rm  @tt -@rm  display border.\\n\
@tt \\267 @bf Time@rm  @tt -@rm  display time of plot.\\n\
\\n\
@tt \\267 @bf Grid@rm  @tt -@rm  display grid.\\n\
@tt \\267 @bf X Zero Axis@rm  @tt -@rm  display X zero axis.\\n\
@tt \\267 @bf Y Zero Axis@rm  @tt -@rm  display Y zero axis.",
"Ddd*plotViewMenu*tearOffTitle: View",
"Ddd*plotViewMenu.border.labelString: Border",
"Ddd*plotViewMenu.border.mnemonic: B",
"Ddd*plotViewMenu.border.documentationString: \
@rm Toggle border",
"Ddd*plotViewMenu.grid.labelString: Grid",
"Ddd*plotViewMenu.grid.mnemonic: G",
"Ddd*plotViewMenu.grid.documentationString: \
@rm Toggle grid",
"Ddd*plotViewMenu.time.labelString: Time",
"Ddd*plotViewMenu.time.mnemonic: T",
"Ddd*plotViewMenu.time.documentationString: \
@rm Toggle plot time",
"Ddd*plotViewMenu.xzeroaxis.labelString: X Zero Axis",
"Ddd*plotViewMenu.xzeroaxis.mnemonic: X",
"Ddd*plotViewMenu.xzeroaxis.documentationString: \
@rm Toggle X zero axis",
"Ddd*plotViewMenu.yzeroaxis.labelString: Y Zero Axis",
"Ddd*plotViewMenu.yzeroaxis.mnemonic: Y",
"Ddd*plotViewMenu.yzeroaxis.documentationString: \
@rm Toggle Y zero axis",
"Ddd*menubar.plot.labelString: Plot",
"Ddd*menubar.plot.mnemonic: P",
"Ddd*menubar.plot.documentationString: \
@rm Set plotting style",
"Ddd*menubar.plot.helpString: \
\
@bs Plot Menu@rm\\n\
\\n\
@tt \\267 @bf Points@rm  @tt -@rm  display a small symbol at each point.\\n\
@tt \\267 @bf Lines@rm  @tt -@rm  connect adjacent points with lines.\\n\
@tt \\267 @bf 3-D Lines@rm  @tt -@rm  remove hidden lines, creating a 3-D effect.\\n\
@tt \\267 @bf Points and Lines@rm  @tt -@rm  do both Points and Lines.\\n\
@tt \\267 @bf Impulses@rm  @tt -@rm  draw a vertical line from the base to each point.\\n\
@tt \\267 @bf Dots@rm  @tt -@rm  plot a tiny dot at each point.\\n\
@tt \\267 @bf Steps@rm  @tt -@rm  connect adjacent points with two line segments.\\n\
@tt \\267 @bf Boxes@rm  @tt -@rm  draw a vertical box from the x axis to each point.",
"Ddd*plotMenu*helpString: \
\
@bs Plot Menu@rm\\n\
\\n\
@tt \\267 @bf Points@rm  @tt -@rm  display a small symbol at each point.\\n\
@tt \\267 @bf Lines@rm  @tt -@rm  connect adjacent points with lines.\\n\
@tt \\267 @bf 3-D Lines@rm  @tt -@rm  remove hidden lines, creating a 3-D effect.\\n\
@tt \\267 @bf Points and Lines@rm  @tt -@rm  do both Points and Lines.\\n\
@tt \\267 @bf Impulses@rm  @tt -@rm  draw a vertical line from the base to each point.\\n\
@tt \\267 @bf Dots@rm  @tt -@rm  plot a tiny dot at each point.\\n\
@tt \\267 @bf Steps@rm  @tt -@rm  connect adjacent points with two line segments.\\n\
@tt \\267 @bf Boxes@rm  @tt -@rm  draw a vertical box from the x axis to each point.",
"Ddd*plotMenu*tearOffTitle: Plot",
"Ddd*plotMenu.points.labelString: Points",
"Ddd*plotMenu.points.mnemonic: P",
"Ddd*plotMenu.points.documentationString: \
@rm Display a small symbol at each point",
"Ddd*plotMenu.lines.labelString: Lines",
"Ddd*plotMenu.lines.mnemonic: L",
"Ddd*plotMenu.lines.documentationString: \
@rm Connect adjacent points with lines",
"Ddd*plotMenu.lines3d.labelString: 3-D Lines",
"Ddd*plotMenu.lines3d.mnemonic: 3",
"Ddd*plotMenu.lines3d.documentationString: \
@rm Remove hidden lines, creating a 3-D effect",
"Ddd*plotMenu.linespoints.labelString: Points and Lines",
"Ddd*plotMenu.linespoints.mnemonic: a",
"Ddd*plotMenu.linespoints.documentationString: \
@rm Do both Points and Lines",
"Ddd*plotMenu.linespoints3d.labelString: Points and 3-D Lines",
"Ddd*plotMenu.linespoints3d.mnemonic: t",
"Ddd*plotMenu.linespoints3d.documentationString: \
@rm Do both Points and 3-D Lines",
"Ddd*plotMenu.impulses.labelString: Impulses",
"Ddd*plotMenu.impulses.mnemonic: I",
"Ddd*plotMenu.impulses.documentationString: \
@rm Draw a vertical line from the base to each point",
"Ddd*plotMenu.dots.labelString: Dots",
"Ddd*plotMenu.dots.mnemonic: D",
"Ddd*plotMenu.dots.documentationString: \
@rm Plot a tiny dot at each point",
"Ddd*plotMenu.steps2d.labelString: Steps",
"Ddd*plotMenu.steps2d.mnemonic: S",
"Ddd*plotMenu.steps2d.documentationString: \
@rm Connect adjacent points with two line segments",
"Ddd*plotMenu.boxes2d.labelString: Boxes",
"Ddd*plotMenu.boxes2d.mnemonic: B",
"Ddd*plotMenu.boxes2d.documentationString: \
@rm Draw a vertical box from the x axis to each point",
"Ddd*menubar.scale.labelString: Scale",
"Ddd*menubar.scale.mnemonic: S",
"Ddd*menubar.scale.documentationString: \
@rm Set scale style",
"Ddd*menubar.scale.helpString: \
@bs Scale Menu@rm\\n\
\\n\
@tt \\267 @bf Logarithmic@rm  @tt -@rm  toggle logarithmic scaling.\\n\
\\n\
@tt \\267 @bf X Tics@rm  @tt -@rm  display tics on X scale.\\n\
@tt \\267 @bf Y Tics@rm  @tt -@rm  display tics on Y scale.\\n\
@tt \\267 @bf Z Tics@rm  @tt -@rm  display tics on Z scale.",
"Ddd*scaleMenu*helpString: \
@bs Scale Menu@rm\\n\
\\n\
@tt \\267 @bf Logarithmic@rm  @tt -@rm  toggle logarithmic scaling.\\n\
\\n\
@tt \\267 @bf X Tics@rm  @tt -@rm  display tics on X scale.\\n\
@tt \\267 @bf Y Tics@rm  @tt -@rm  display tics on Y scale.\\n\
@tt \\267 @bf Z Tics@rm  @tt -@rm  display tics on Z scale.",
"Ddd*scaleMenu*tearOffTitle: Scale",
"Ddd*scaleMenu.logscale.labelString: Logarithmic",
"Ddd*scaleMenu.logscale.mnemonic: L",
"Ddd*scaleMenu.logscale.documentationString: \
@rm Toggle logarithmic scaling",
"Ddd*scaleMenu.xtics.labelString: X Tics",
"Ddd*scaleMenu.xtics.mnemonic: X",
"Ddd*scaleMenu.xtics.documentationString: \
@rm Toggle tics on X scale",
"Ddd*scaleMenu.ytics.labelString: Y Tics",
"Ddd*scaleMenu.ytics.mnemonic: Y",
"Ddd*scaleMenu.ytics.documentationString: \
@rm Toggle tics on Y scale",
"Ddd*scaleMenu.ztics.labelString: Z Tics",
"Ddd*scaleMenu.ztics.mnemonic: Z",
"Ddd*scaleMenu.ztics.documentationString: \
@rm Toggle tics on Z scale",
"Ddd*menubar.contour.labelString: Contour",
"Ddd*menubar.contour.mnemonic: C",
"Ddd*menubar.contour.documentationString: \
@rm Set contour style",
"Ddd*menubar.contour.helpString: \
@bs Contour Menu@rm\\n\
\\n\
@tt \\267 @bf Base@rm  @tt -@rm  draw contour on base.\\n\
@tt \\267 @bf Surface@rm  @tt -@rm  draw contour on surface.",
"Ddd*contourMenu*helpString: \
@bs Contour Menu@rm\\n\
\\n\
@tt \\267 @bf Base@rm  @tt -@rm  draw contour on base.\\n\
@tt \\267 @bf Surface@rm  @tt -@rm  draw contour on surface.",
"Ddd*contourMenu*tearOffTitle: Contour",
"Ddd*contourMenu.base.labelString: Base",
"Ddd*contourMenu.base.mnemonic: B",
"Ddd*contourMenu.base.documentationString: \
@rm Draw contour on base",
"Ddd*contourMenu.surface.labelString: Surface",
"Ddd*contourMenu.surface.mnemonic: S",
"Ddd*contourMenu.surface.documentationString: \
@rm Draw contour on surface",
"Ddd*plot_command_dialog.dialogTitle: DDD: Plot Command",
"Ddd*plot_command_dialog.cancelLabelString: Close",
"Ddd*plot_command.promptString: gnuplot>",
"Ddd*plot_command_dialog*helpString: \
@bs Plot Command@rm\\n\
\\n\
You can now enter a Gnuplot command at the `@tt gnuplot>@rm\' prompt.\\n\
The plot will automatically be refreshed after execution.\\n\
\\n\
See the Gnuplot documentation for useful commands.",
"Ddd*plot*area.width: 640",
"Ddd*plot*area.height: 450",
"Ddd*plot*area.background: grey96",
"Ddd*plot*swallower.width: 640",
"Ddd*plot*swallower.height: 450",
"Ddd*plot*swallower.background: grey96",
"Ddd*plot*XmScrollBar.borderWidth: 0",
"Ddd*plot*XmScrollBar.highlightThickness: 0",
"Ddd*source_buttons.helpString:\
@bs Command Area@rm\\n\
\\n\
By clicking on one of the buttons, \
the corresponding command is sent to @GDB@.\\n\
Press @key F1@rm  on a button to get a short command description.",
"Ddd*command_buttons.helpString:\
@bs Command Area@rm\\n\
\\n\
By clicking on one of the buttons, \
the corresponding command is sent to @GDB@.\\n\
Press @key F1@rm  on a button to get a short command description.",
"Ddd*data_buttons.helpString:\
@bs Command Area@rm\\n\
\\n\
By clicking on one of the buttons, \
the corresponding command is sent to @GDB@.\\n\
Press @key F1@rm  on a button to get a short command description.",
"Ddd*source_buttons*XmPushButton.helpString:",
"Ddd*console_buttons*XmPushButton.helpString:",
"Ddd*data_buttons*XmPushButton.helpString:",
"Ddd*tool_buttons*XmPushButton.helpString:",
"Ddd*command_toolbar*XmPushButton.helpString:",
"Ddd*source_buttons*XmPushButton.tipString:",
"Ddd*console_buttons*XmPushButton.tipString:",
"Ddd*data_buttons*XmPushButton.tipString:",
"Ddd*tool_buttons*XmPushButton.tipString:",
"Ddd*command_toolbar*XmPushButton.tipString:",
"Ddd*source_buttons.spacing: 0",
"Ddd*console_buttons.spacing: 0",
"Ddd*data_buttons.spacing: 0",
"Ddd*source_buttons.packing: XmPACK_TIGHT",
"Ddd*console_buttons.packing: XmPACK_TIGHT",
"Ddd*data_buttons.packing: XmPACK_TIGHT",
"Ddd*source_buttons.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*console_buttons.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*data_buttons.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*source_buttons*alignment: XmALIGNMENT_CENTER",
"Ddd*console_buttons*alignment: XmALIGNMENT_CENTER",
"Ddd*data_buttons*alignment: XmALIGNMENT_CENTER",
"Ddd*source_buttons.marginWidth: 0",
"Ddd*source_buttons.marginHeight: 0",
"Ddd*console_buttons.marginWidth: 0",
"Ddd*console_buttons.marginHeight: 0",
"Ddd*data_buttons.marginWidth: 0",
"Ddd*data_buttons.marginHeight: 0",
"Ddd*?*break.helpString: \
@bf Interrupt@rm\\n\
\\n\
Interrupt the debugged process (or current @GDB@ command).\\n\
(Equivalent to @key Esc@rm ).",
"Ddd*source_buttons*break.tipString: \
@rm Interrupt debugged program",
"Ddd*data_buttons*break.tipString: \
@rm Interrupt debugged program",
"Ddd*console_buttons*break.tipString: \
@rm Interrupt debugged program",
"Ddd*tool_buttons*break.tipString: \
@rm Interrupt debugged program",
"Ddd*command_toolbar*break.tipString: \
@rm Interrupt debugged program",
"Ddd*?*break.documentationString: \
@rm Interrupt the debugged process (or current @GDB@ command)",
"Ddd*?*Yes.helpString: \
@bf Yes@rm\\n\
\\n\
Confirm the @GDB@ question.",
"Ddd*?*Yes.tipString: \
@rm Just say yes",
"Ddd*?*No.helpString: \
@bf No@rm\\n\
\\n\
Do @sl not@rm  confirm the @GDB@ question.",
"Ddd*?*No.tipString: \
@rm Just say no",
"Ddd*?*Complete.helpString: \
@bf Complete@rm\\n\
\\n\
Complete the current debugging command.  (Equivalent to @key TAB@rm ).",
"Ddd*?*Complete.tipString: \
@rm Complete current command",
"Ddd*?*Clear.helpString: \
@bf Clear@rm\\n\
\\n\
Clear the current debugging command.  (Equivalent to @key Ctrl+U@rm ).",
"Ddd*?*Clear.tipString: \
@rm Clear current command",
"Ddd*?*Prev.helpString: \
@bf Prev@rm\\n\
\\n\
Get the previous debugging command \
(Equivalent to @key Up@rm ).",
"Ddd*?*Prev.tipString: \
@rm Get previous command",
"Ddd*?*Next.helpString: \
@bf Next@rm\\n\
\\n\
Get the next debugging command \
(Equivalent to @key Down@rm ).",
"Ddd*?*Next.tipString: \
@rm Get next command",
"Ddd*?*Apply.helpString: \
@bf Apply@rm\\n\
\\n\
Execute the current debugging command.  (Equivalent to @key RETURN @symbol \\277@rm ).",
"Ddd*?*Apply.tipString: \
@rm Execute current command",
"Ddd*?*Undo.helpString: \
@bf Undo@rm\\n\
\\n\
Undo last command.  Almost all commands can be undone this way.\\n\
\\n\
As a special exception, if the last command affected the state of the\\n\
debuggee, DDD does @sl not@rm  restore the previous program state.\\n\
Instead, DDD goes into @sl historic mode@rm  showing you all it remembers\\n\
about this state.",
"Ddd*?*Undo.tipString: ",
"Ddd*?*Redo.helpString: \
@bf Redo@rm\\n\
\\n\
Redo next command.  Every command undone can be redone this way.",
"Ddd*?*Redo.tipString: ",
"Ddd*?*Edit.helpString: \
@bf Edit@rm\\n\
\\n\
Invoke an editor for the current source file.",
"Ddd*?*Edit.tipString: \
@rm Edit source file",
"Ddd*?*Edit.documentationString: \
@rm Invoke text editor for the current source",
"Ddd*?*Make.helpString: \
@bf Make@rm\\n\
\\n\
Run the make program with the most recently given arguments.",
"Ddd*?*Make.tipString: \
@rm Run the make program",
"Ddd*?*Make.documentationString: \
@rm Run the make program with the most recently given arguments.",
"Ddd*?*Reload.helpString: \
@bf Reload@rm\\n\
\\n\
Reload the source from file.",
"Ddd*?*Reload.tipString: \
@rm Reload source file",
"Ddd*?*Reload.documentationString: \
@rm Reload current source file",
"Ddd*print.dialogTitle: DDD: Print",
"Ddd*print.okLabelString: Print",
"Ddd*print*to.labelString: Print To",
"Ddd*print*toMenu.printer.labelString: \
\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ Printer\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ ",
"Ddd*print*toMenu.file.labelString: File",
"Ddd*print*toMenu.?.indicatorOn: off",
"Ddd*print*toMenu.?.shadowThickness: 2",
"Ddd*print*toMenu.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*print*command.label.labelString: Print Command",
"Ddd*print*command.text.columns: 40",
"Ddd*print*name.labelString: File Name",
"Ddd*print*name.text.columns: 29",
"Ddd*print*name.text.value: dddgraph.ps",
"Ddd*print*browse.labelString: Browse...",
"Ddd*print*type.labelString: File Type",
"Ddd*print*postscript.labelString: PostScript",
"Ddd*print*xfig.labelString: FIG",
"Ddd*print*what.labelString: Print",
"Ddd*print*displays.labelString: Displays",
"Ddd*print*plots.labelString: Plots",
"Ddd*print*selected.labelString: Selected Only",
"Ddd*print*color.labelString: Color",
"Ddd*print*orientation.labelString: Orientation",
"Ddd*print*portrait.labelString: Portrait",
"Ddd*print*landscape.labelString: Landscape",
"Ddd*print*size.labelString: Paper Size",
"Ddd*print*sizeMenu.orientation: XmVERTICAL",
"Ddd*print*sizeMenu.numColumns: 3",
"Ddd*print*a4.labelString: A4 (210mm \\327 297mm)",
"Ddd*print*a3.labelString: A3 (297mm \\327 420mm)",
"Ddd*print*letter.labelString: Letter (8\\275\" \\327 11\")",
"Ddd*print*legal.labelString: Legal (8\\275\" \\327 14\")",
"Ddd*print*executive.labelString: Executive (7\\275\" \\327 10\")",
"Ddd*print*custom.labelString: Other...",
"Ddd*print*helpString: \
@rm You can print on a PostScript@symbol \\344 @rm  printer or print to a file.\\n\
Enter the print command or the file name in the appropriate fields.\\n\
\\n\
Files can be created in the following formats:\\n\
@tt \\267 @bf PostScript@rm  @tt -@rm  PostScript@symbol \\344 @rm  format.\\n\
@tt \\267 @bf FIG@rm  @tt -@rm  FIG format (for the @tt xfig@rm  program).\\n\
\\n\
Select @bf Print Displays@rm  to print displays.\\n\
Select @bf Print Plots@rm  to print the current plots.\\n\
\\n\
To print selected items only, select @bf Selected Only@rm .\\n\
For PostScript@symbol \\344 @rm  format only, you can also specify orientation and paper size.\\n\
\\n\
To print, click on @bf Print@rm .",
"Ddd*paper_size_dialog.dialogTitle: DDD: Paper Size",
"Ddd*paper_size_dialog.selectionLabelString: Paper size",
"Ddd*paper_size_dialog.textAccelerators:",
"Ddd*paper_size_dialog*helpString: \
@rm Please enter the paper size in the format \
`@tt @sl width@rm  @tt x@rm  @sl height@rm @rm\'.\\n\
\\n\
Examples:\\n\
`@tt 42cm x 59.4cm@rm\' @tt -@rm  A2 paper\\n\
`@tt 7.5in x 10in@rm\' @tt -@rm  Executive paper\\n\
\\n\
Supported units for @sl width@rm  and @sl height@rm  include:\\n\
`@tt pt@rm\' (points), `@tt in@rm\' (inches),\\n\
`@tt mm@rm\' (millimeters), `@tt cm@rm\' (centimeters).",
"Ddd*browse_print.dialogTitle: DDD: Print to File",
"Ddd*browse_print.selectionLabelString: Print to File",
"Ddd*browse_print*helpString: \
@rm You can select the file to print to.\\n\
\\n\
Click on @bf OK@rm  to set the file name.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*exec_files.dialogTitle: DDD: Open Program",
"Ddd*exec_files.okLabelString: Open",
"Ddd*exec_files.selectionLabelString: Program",
"Ddd*exec_files*helpString: \
@bs Open Program@rm\\n\
\\n\
The dialog shows executable files in the current directory.\\n\
Enter the name of the program to be debugged in the argument field.\\n\
\\n\
The program is read for its symbols, for getting the contents\
 of pure memory,\\n\
and it is the program executed when you use the `@tt run@rm\' command.\\n\
If the program file cannot be found as specified,\
 your execution directory path\\n\
(@tt $PATH@rm ) is searched for a command of that name.\\n\
No argument means to have no executable file and no symbols.\\n\
\\n\
Click on @bf Open@rm  to open the selected file.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*core_files.dialogTitle: DDD: Open Core Dump",
"Ddd*core_files.okLabelString: Open",
"Ddd*core_files.selectionLabelString: Core Dump",
"Ddd*core_files*helpString: \
@bs Open Core Dump@rm\\n\
\\n\
The dialog shows core dumps in the current directory.\\n\
Enter the name of a core dump in the argument field.\\n\
\\n\
The core dump is used for examining memory and registers.\\n\
No argument means to have no core file.\\n\
\\n\
Before using @bf Open Core@rm , you should use @bf File@symbol \\256@bf Open Program@rm\\n\
to specify the program causing the core dump, and to load its symbol table.\\n\
\\n\
Click on @bf Open@rm  to open the selected core dump.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*source_files.dialogTitle: DDD: Open Source",
"Ddd*source_files.okLabelString: Open",
"Ddd*source_files.selectionLabelString: Source File",
"Ddd*source_files*helpString: \
@bs Open Source@rm\\n\
\\n\
The dialog shows source files in the current directory.\\n\
Enter the name of a source file in the argument field.\\n\
\\n\
The source file is shown in the source window and may be used\\n\
for setting or clearing breakpoints.\\n\
\\n\
Before using @bf Open Source@rm , you should use @bf File@symbol \\256@bf Open Program@rm\\n\
to specify the executable program, and to load its symbol table.\\n\
\\n\
Click on @bf Open@rm  to open the selected source file.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*processes.dialogTitle: DDD: Attach to Process",
"Ddd*processes.listLabelString: Processes",
"Ddd*processes.selectionPolicy: XmSINGLE_SELECT",
"Ddd*processes.okLabelString: Attach",
"Ddd*processes.applyLabelString: Update",
"Ddd*processes*helpString: \
@bs Attach to Process@rm\\n\
\\n\
The dialog shows the currently running processes.\\n\
Select a running process of the program to be debugged.\\n\
\\n\
An attached process is stopped by DDD. You can examine and modify an\\n\
attached process with all the DDD commands that are ordinarily available\\n\
when you start processes with @bf Run@rm . You can insert breakpoints; you\\n\
can step and continue; you can modify storage.  If you would rather the\\n\
process continue running, you may use the @bf Continue@rm  command after\\n\
attaching DDD to the process.\\n\
\\n\
When you have finished debugging the attached process, you can use\\n\
@bf Detach Process@rm  to release it from DDD control.  Detaching \
the process\\n\
continues its execution.\\n\
\\n\
Before using @bf Attach@rm , you should use @bf File@symbol \\256@bf Open Program@rm\\n\
to specify the program running in the process, and to load its symbol table.\\n\
\\n\
Click on @bf Attach@rm  to attach to the selected process.\\n\
Click on @bf Update@rm  to update the list of processes.",
"Ddd*classes.dialogTitle: DDD: Open Class",
"Ddd*classes.listLabelString: Classes",
"Ddd*classes.selectionLabelString: Open Class",
"Ddd*classes*selectionPolicy: XmSINGLE_SELECT",
"Ddd*classes*okLabelString: Open",
"Ddd*classes*applyLabelString: Update",
"Ddd*classes*helpString: \
@bs Open Class@rm\\n\
\\n\
The dialog shows the currently accessible Java classes.\\n\
Please select a class to be debugged.\\n\
\\n\
These classes all have corresponding @tt .java@rm  sources in the class path.\\n\
To search for other classes, select @bf Edit@symbol \\256@bf JDB Settings@rm\\n\
and add their directories to the class path.\\n\
\\n\
Click on @bf Open@rm  to open the selected class.\\n\
Click on @bf Update@rm  to scan the class path once more.",
"Ddd*sources.dialogTitle: DDD: Open Source",
"Ddd*sources.listLabelString: Sources",
"Ddd*sources.selectionLabelString: Open Source",
"Ddd*sources*label.labelString: Filter",
"Ddd*sources*sharedlibrary.labelString: Load Shared Object Library Symbols",
"Ddd*sources*selectionPolicy: XmSINGLE_SELECT",
"Ddd*sources*okLabelString: Open",
"Ddd*sources*lookup.labelString: Lookup",
"Ddd*sources*applyLabelString: Filter",
"Ddd*sources*helpString: \
@bs Open Source@rm\\n\
\\n\
The dialog shows the currently accessible source files of your program.\\n\
Please select a source to be opened.\\n\
\\n\
Source files from shared libraries are only shown after the library\\n\
has been loaded into @GDB@.  To load shared libraries, click on\\n\
@bf Load Shared Object Library Symbols@rm .\\n\
\\n\
To search for other sources, select @bf Edit@symbol \\256@bf @GDB@ Settings@rm\\n\
and add their directories to the source path.\\n\
\\n\
Click on @bf Open@rm  to open the selected source and close this window.\\n\
Click on @bf Lookup@rm  to lookup the selected source.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*sessions_to_open.dialogTitle: DDD: Open Session",
"Ddd*sessions_to_open.listLabelString: Sessions",
"Ddd*sessions_to_open.selectionLabelString: Open Session",
"Ddd*sessions_to_open*selectionPolicy: XmSINGLE_SELECT",
"Ddd*sessions_to_open*okLabelString: Open",
"Ddd*sessions_to_open*applyLabelString: Delete",
"Ddd*sessions_to_open*helpString: \
@bs Open Session@rm\\n\
\\n\
The dialog shows your DDD sessions.\\n\
Enter the name of a DDD session in the argument field.\\n\
\\n\
A DDD session records the state of a debugging session,\\n\
such that you can exit debugging sessions and resume later.\\n\
\\n\
Click on @bf Open@rm  to open the selected session.\\n\
Click on @bf Delete@rm  to delete the selected session.",
"Ddd*sessions_to_save.dialogTitle: DDD: Save Session",
"Ddd*sessions_to_save.listLabelString: Sessions",
"Ddd*sessions_to_save.selectionLabelString: Save Session",
"Ddd*sessions_to_save*selectionPolicy: XmSINGLE_SELECT",
"Ddd*sessions_to_save*okLabelString: Save",
"Ddd*sessions_to_save*applyLabelString: Delete",
"Ddd*sessions_to_save*dump.labelString: Include Core Dump",
"Ddd*sessions_to_save*dump.alignment: XmALIGNMENT_BEGINNING",
"Ddd*sessions_to_save*method.labelString: via",
"Ddd*sessions_to_save*kill.labelString: Killing the Debuggee",
"Ddd*sessions_to_save*ptrace.labelString: The ptrace() call",
"Ddd*sessions_to_save*gcore.labelString: The `gcore\' Command",
"Ddd*sessions_to_save*helpString: \
@bs Save Session@rm\\n\
\\n\
The dialog shows your DDD sessions.\\n\
Enter the name of a DDD session in the argument field.\\n\
\\n\
A DDD session records the state of a debugging session,\\n\
such that you can exit debugging sessions and resume later.\\n\
\\n\
If @bf Include Core Dump@rm  is set, DDD includes a core dump of the\\n\
program being debugged.  This allows DDD to restore memory\\n\
contents and data displays when restoring the session.\\n\
\\n\
DDD provides up to three ways to get a core dump:\\n\
@tt \\267 @bf Killing the Debuggee@rm  @tt -@rm  kill the debugged program..\\n\
    Works fine, but loses the current process.\\n\
@tt \\267 @bf The `gcore\' Command@rm  @tt -@rm  an external program to get a core\\n\
    file from a running process..\\n\
    The process may continue for a few steps after the `gcore\'\\n\
    command is done.\\n\
@tt \\267 @bf The ptrace() call@rm  @tt -@rm  a system call to get a core file.\\n\
    Safe, but may result in a hanging GDB.\\n\
\\n\
Click on @bf Save@rm  to save the current DDD session.\\n\
Click on @bf Delete@rm  to delete the selected session.",
"Ddd*export_data.dialogTitle: DDD: Save Plot Data",
"Ddd*export_data.okLabelString: Save",
"Ddd*export_data.selectionLabelString: Data File",
"Ddd*export_data*helpString: \
@rm You can save the plot data in a file.\\n\
Enter the file name in the argument field.\\n\
\\n\
Click on @bf Save@rm  to save the plot data.\\n\
Click on @bf Filter@rm  to apply the given filter.",
"Ddd*edit_breakpoints_dialog.dialogTitle: DDD: Breakpoints and Watchpoints",
"Ddd*edit_breakpoints_dialog.listLabelString: Breakpoints and Watchpoints",
"Ddd*edit_breakpoints_dialog*buttons.orientation: XmHORIZONTAL",
"Ddd*edit_breakpoints_dialog.okLabelString: Close",
"Ddd*edit_breakpoints_dialog*buttons*labelType: XmPIXMAP",
"Ddd*edit_breakpoints_dialog.childPlacement: XmPLACE_TOP",
"Ddd*edit_breakpoints_dialog*helpString: \
@bs Breakpoint and Watchpoint Editor@rm\\n\
\\n\
@tt \\267 @bf Props...@rm  @tt -@rm  set or modify an item\'s properties.\\n\
@tt \\267 @bf Lookup@rm  @tt -@rm  lookup selected item.\\n\
@tt \\267 @bf Print@rm  @tt -@rm  print value of selected breakpoint.\\n\
@tt \\267 @bf Break...@rm  @tt -@rm  create a new breakpoint.\\n\
@tt \\267 @bf Watch...@rm  @tt -@rm  create a new watchpoint.\\n\
@tt \\267 @bf Enable@rm  @tt -@rm  enable all selected items.\\n\
@tt \\267 @bf Disable@rm  @tt -@rm  disable all selected items.\\n\
@tt \\267 @bf Delete@rm  @tt -@rm  delete all selected items.\\n\
\\n\
Use @key Ctrl@rm +@bs mouse button 1@rm  to toggle selections.",
"Ddd*edit_breakpoints_dialog*new_bp.labelString: New Breakpoint...",
"Ddd*edit_breakpoints_dialog*new_bp.labelPixmap: new_break",
"Ddd*edit_breakpoints_dialog*new_bp.labelInsensitivePixmap: new_break-xx",
"Ddd*edit_breakpoints_dialog*new_bp.armPixmap: new_break-arm",
"Ddd*edit_breakpoints_dialog*new_bp.highlightPixmap: new_break-hi",
"Ddd*edit_breakpoints_dialog*new_bp.tipString: \
@rm Set new breakpoint",
"Ddd*edit_breakpoints_dialog*new_bp.documentationString: \
@rm Set breakpoint at specified line or function",
"Ddd*edit_breakpoints_dialog*new_wp.labelString: New Watchpoint...",
"Ddd*edit_breakpoints_dialog*new_wp.labelPixmap: new_watch",
"Ddd*edit_breakpoints_dialog*new_wp.labelInsensitivePixmap: new_watch-xx",
"Ddd*edit_breakpoints_dialog*new_wp.armPixmap: new_watch-arm",
"Ddd*edit_breakpoints_dialog*new_wp.highlightPixmap: new_watch-hi",
"Ddd*edit_breakpoints_dialog*new_wp.tipString: \
@rm Set new watchpoint",
"Ddd*edit_breakpoints_dialog*new_wp.documentationString: \
@rm Set watchpoint on specified variable",
"Ddd*edit_breakpoints_dialog*lookup.labelString: Lookup",
"Ddd*edit_breakpoints_dialog*lookup.labelPixmap: lookup",
"Ddd*edit_breakpoints_dialog*lookup.labelInsensitivePixmap: lookup-xx",
"Ddd*edit_breakpoints_dialog*lookup.armPixmap: lookup-arm",
"Ddd*edit_breakpoints_dialog*lookup.highlightPixmap: lookup-hi",
"Ddd*edit_breakpoints_dialog*lookup.tipString: \
@rm Lookup selected item",
"Ddd*edit_breakpoints_dialog*lookup.documentationString: \
@rm Lookup selected item in the source",
"Ddd*edit_breakpoints_dialog*print.labelString: Print",
"Ddd*edit_breakpoints_dialog*print.labelPixmap: print",
"Ddd*edit_breakpoints_dialog*print.labelInsensitivePixmap: print-xx",
"Ddd*edit_breakpoints_dialog*print.armPixmap: print-arm",
"Ddd*edit_breakpoints_dialog*print.highlightPixmap: print-hi",
"Ddd*edit_breakpoints_dialog*print.tipString: \
@rm Print watched expression",
"Ddd*edit_breakpoints_dialog*print.documentationString: \
@rm Print value of watched expression in the @GDB@ console",
"Ddd*edit_breakpoints_dialog*enable.labelString: Enable",
"Ddd*edit_breakpoints_dialog*enable.labelPixmap: enable",
"Ddd*edit_breakpoints_dialog*enable.labelInsensitivePixmap: enable-xx",
"Ddd*edit_breakpoints_dialog*enable.armPixmap: enable-arm",
"Ddd*edit_breakpoints_dialog*enable.highlightPixmap: enable-hi",
"Ddd*edit_breakpoints_dialog*enable.tipString: \
@rm Enable selected items",
"Ddd*edit_breakpoints_dialog*enable.documentationString: \
@rm Enable the selected items",
"Ddd*edit_breakpoints_dialog*disable.labelString: Disable",
"Ddd*edit_breakpoints_dialog*disable.labelPixmap: disable",
"Ddd*edit_breakpoints_dialog*disable.labelInsensitivePixmap: disable-xx",
"Ddd*edit_breakpoints_dialog*disable.armPixmap: disable-arm",
"Ddd*edit_breakpoints_dialog*disable.highlightPixmap: disable-hi",
"Ddd*edit_breakpoints_dialog*disable.tipString: \
@rm Disable selected items",
"Ddd*edit_breakpoints_dialog*disable.documentationString: \
@rm Disable the selected items",
"Ddd*edit_breakpoints_dialog*properties.labelString: Properties...",
"Ddd*edit_breakpoints_dialog*properties.labelPixmap: properties",
"Ddd*edit_breakpoints_dialog*properties.labelInsensitivePixmap: properties-xx",
"Ddd*edit_breakpoints_dialog*properties.armPixmap: properties-arm",
"Ddd*edit_breakpoints_dialog*properties.highlightPixmap: properties-hi",
"Ddd*edit_breakpoints_dialog*properties.tipString: \
@rm Edit properties",
"Ddd*edit_breakpoints_dialog*properties.documentationString: \
@rm Specify the properties of the selected items",
"Ddd*edit_breakpoints_dialog*delete.labelString: Delete",
"Ddd*edit_breakpoints_dialog*delete.labelPixmap: delete",
"Ddd*edit_breakpoints_dialog*delete.labelInsensitivePixmap: delete-xx",
"Ddd*edit_breakpoints_dialog*delete.armPixmap: delete-arm",
"Ddd*edit_breakpoints_dialog*delete.highlightPixmap: delete-hi",
"Ddd*edit_breakpoints_dialog*delete.tipString: \
@rm Delete selected items",
"Ddd*edit_breakpoints_dialog*delete.documentationString: \
@rm Delete the selected items",
"Ddd*new_breakpoint_dialog.dialogTitle: DDD: New Breakpoint",
"Ddd*new_breakpoint_dialog*label.labelString: Set Breakpoint at",
"Ddd*new_breakpoint_dialog.okLabelString: Set",
"Ddd*new_breakpoint_dialog.textAccelerators:",
"Ddd*new_breakpoint_dialog*helpString: \
\
@rm You can now enter a breakpoint you want to set.\\n\
Enter its name in the argument field.\\n\
\\n\
The argument may be a @sl line number@rm , a @sl function name@rm ,\
 or `@tt *@rm\' and an address.\\n\
If a @sl line number@rm  is specified, break at start of code for that line.\\n\
If a @sl function name@rm  is specified, break at start of code\
 for that function.\\n\
If an @sl address@rm  is specified, break at that exact address.\\n\
Without argument, use current execution address of selected stack frame.\\n\
This is useful for breaking on return to a stack frame.\\n\
\\n\
Multiple breakpoints at one place are permitted, and useful if conditional.\\n\
\\n\
Click on @bf Set@rm  to set the specified breakpoint.",
"Ddd*new_watchpoint_dialog.dialogTitle: DDD: New Watchpoint",
"Ddd*new_watchpoint_dialog*set.labelString: Set",
"Ddd*new_watchpoint_dialog*cwatch.labelString: Watchpoint",
"Ddd*new_watchpoint_dialog*rwatch.labelString: Read Watchpoint",
"Ddd*new_watchpoint_dialog*awatch.labelString: Access Watchpoint",
"Ddd*new_watchpoint_dialog*on.labelString: on",
"Ddd*new_watchpoint_dialog.okLabelString: Set",
"Ddd*new_watchpoint_dialog.textAccelerators:",
"Ddd*new_watchpoint_dialog*helpString: \
@rm You can now enter a variable whose value you want to watch.\\n\
Enter its name in the argument field.\\n\
\\n\
@tt \\267 @bf Set Watchpoint@rm  @tt -@rm  stop whenever the variable value changes.\\n\
@tt \\267 @bf Set Read Watchpoint@rm  @tt -@rm  stop whenever the variable is read.\\n\
@tt \\267 @bf Set Access Watchpoint@rm  @tt -@rm  \
stop whenever the variable is either read or written.\\n\
\\n\
Click on @bf Set@rm  to set the specified watchpoint.",
"Ddd*breakpoint_properties.dialogTitle: DDD: Properties",
"Ddd*breakpoint_properties.cancelLabelString: Close",
"Ddd*breakpoint_properties*title.labelString: Breakpoint",
"Ddd*breakpoint_properties*titleMenu.marginWidth: 0",
"Ddd*breakpoint_properties*titleMenu.marginWidth: 0",
"Ddd*breakpoint_properties*titlePanel.marginWidth: 0",
"Ddd*breakpoint_properties*titlePanel.marginHeight: 0",
"Ddd*breakpoint_properties*enabled.labelString: Enabled",
"Ddd*breakpoint_properties*temporary.labelString: Temporary",
"Ddd*breakpoint_properties*lookup.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*lookup.labelString: Lookup",
"Ddd*breakpoint_properties*lookup.labelPixmap: lookup",
"Ddd*breakpoint_properties*lookup.labelInsensitivePixmap: lookup-xx",
"Ddd*breakpoint_properties*lookup.armPixmap: lookup-arm",
"Ddd*breakpoint_properties*lookup.highlightPixmap: lookup-hi",
"Ddd*breakpoint_properties*lookup.tipString: \
@rm Lookup breakpoint",
"Ddd*breakpoint_properties*print.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*print.labelString: Print",
"Ddd*breakpoint_properties*print.labelPixmap: print",
"Ddd*breakpoint_properties*print.labelInsensitivePixmap: print-xx",
"Ddd*breakpoint_properties*print.armPixmap: print-arm",
"Ddd*breakpoint_properties*print.highlightPixmap: print-hi",
"Ddd*breakpoint_properties*print.tipString: \
@rm Print watchpoint value",
"Ddd*breakpoint_properties*enable.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*enable.labelString: Enable",
"Ddd*breakpoint_properties*enable.labelPixmap: enable",
"Ddd*breakpoint_properties*enable.labelInsensitivePixmap: enable-xx",
"Ddd*breakpoint_properties*enable.armPixmap: enable-arm",
"Ddd*breakpoint_properties*enable.highlightPixmap: enable-hi",
"Ddd*breakpoint_properties*enable.tipString: \
@rm Enable breakpoint",
"Ddd*breakpoint_properties*disable.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*disable.labelString: Disable",
"Ddd*breakpoint_properties*disable.labelPixmap: disable",
"Ddd*breakpoint_properties*disable.labelInsensitivePixmap: disable-xx",
"Ddd*breakpoint_properties*disable.armPixmap: disable-arm",
"Ddd*breakpoint_properties*disable.highlightPixmap: disable-hi",
"Ddd*breakpoint_properties*disable.tipString: \
@rm Disable breakpoint",
"Ddd*breakpoint_properties*temporary.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*temporary.labelString: Temp ",
"Ddd*breakpoint_properties*temporary.labelPixmap: maketemp",
"Ddd*breakpoint_properties*temporary.labelInsensitivePixmap: maketemp-xx",
"Ddd*breakpoint_properties*temporary.armPixmap: maketemp-arm",
"Ddd*breakpoint_properties*temporary.highlightPixmap: maketemp-hi",
"Ddd*breakpoint_properties*temporary.tipString: \
@rm Make breakpoint temporary",
"Ddd*breakpoint_properties*temporary.documentationString: \
@rm Make breakpoint temporary, such that it will be deleted when hit",
"Ddd*breakpoint_properties*delete.labelType: XmPIXMAP",
"Ddd*breakpoint_properties*delete.labelString: Delete",
"Ddd*breakpoint_properties*delete.labelPixmap: delete",
"Ddd*breakpoint_properties*delete.labelInsensitivePixmap: delete-xx",
"Ddd*breakpoint_properties*delete.armPixmap: delete-arm",
"Ddd*breakpoint_properties*delete.highlightPixmap: delete-hi",
"Ddd*breakpoint_properties*delete.tipString: \
@rm Delete breakpoint",
"Ddd*breakpoint_properties*condition.label.labelString: Condition",
"Ddd*breakpoint_properties*condition*text*columns: 30",
"Ddd*breakpoint_properties*ignore.label.labelString: Ignore Count",
"Ddd*breakpoint_properties*ignore*text.columns: 4",
"Ddd*breakpoint_properties*ignore*text.maximumValue: 9999",
"Ddd*breakpoint_properties*spinBoxChildType: XmNUMERIC",
"Ddd*breakpoint_properties*arrowLayout: XmARROWS_END",
"Ddd*breakpoint_properties*spin.marginWidth: 0",
"Ddd*breakpoint_properties*spin.marginHeight: 0",
"Ddd*breakpoint_properties*commands.labelString: Commands",
"Ddd*breakpoint_properties*commandsMenu.packing: XmPACK_COLUMN",
"Ddd*breakpoint_properties*commandsMenu.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*breakpoint_properties*record.labelString: \\ \\ \\ Record\\ \\ \\ ",
"Ddd*breakpoint_properties*end.labelString: End",
"Ddd*breakpoint_properties*edit.labelString: Edit @small>>",
"Ddd*breakpoint_properties*record.tipString: \
@rm Record breakpoint commands",
"Ddd*breakpoint_properties*record.documentationString: \
@rm Record commands to be executed when breakpoint is hit",
"Ddd*breakpoint_properties*end.tipString: \
@rm End recording",
"Ddd*breakpoint_properties*end.documentationString: \
@rm End command recording",
"Ddd*breakpoint_properties*edit.tipString: \
@rm Edit breakpoint commands",
"Ddd*breakpoint_properties*text.columns: 40",
"Ddd*breakpoint_properties*scrollBarDisplayPolicy: XmAS_NEEDED",
"Ddd*breakpoint_properties*helpString: \
@rm @bs Breakpoint Properties@rm\\n\
\\n\
@tt \\267 @bf Lookup@rm  @tt -@rm  lookup the breakpoint..\\n\
@tt \\267 @bf Print@rm  @tt -@rm  print the value of the watched expression..\\n\
@tt \\267 @bf Enable@rm  @tt -@rm  enable the breakpoint..\\n\
@tt \\267 @bf Disable@rm  @tt -@rm  disable the breakpoint..\\n\
@tt \\267 @bf Temp@rm  @tt -@rm  make the breakpoint temporary..\\n\
@tt \\267 @bf Delete@rm  @tt -@rm  delete the breakpoint..\\n\
\\n\
@tt \\267 @bf Condition@rm  @tt -@rm  specify a breakpoint condition.\\n\
    The breakpoint breaks only if the condition evaluates to non-zero.\\n\
@tt \\267 @bf Ignore Count@rm  @tt -@rm  set an ignore count @sl count@rm .\\n\
    The next @sl count@rm  hits of the breakpoint will be ignored.\\n\
@tt \\267 @bf Commands@rm  @tt -@rm  record and edit @GDB@ command sequences.\\n\
    These commands will be executed when the breakpoint is hit.\\n\
    To record a command sequence, follow these steps:\\n\
    @tt -@rm  Click on @bf Record@rm  to begin the recording.\\n\
    @tt -@rm  Now interact with DDD.\\n\
       The recorded @GDB@ commands are shown in the @GDB@ console.\\n\
    @tt -@rm  Click on @bf End@rm  to stop the recording.\\n\
    @tt -@rm  Use @bf Edit @small>>@rm  to edit the recorded commands.\\n\
\\n\
Click on @bf Apply@rm  to apply the changes you made.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*define_command.dialogTitle: DDD: Define Command",
"Ddd*define_command.applyLabelString: Execute",
"Ddd*define_command.cancelLabelString: Close",
"Ddd*define_command*name.labelString: Command",
"Ddd*define_command*name*text*columns: 25",
"Ddd*define_command*arg.labelString: ()",
"Ddd*define_command*arg*indicatorOn: off",
"Ddd*define_command*arg*shadowThickness: 2",
"Ddd*define_command*arg.tipString: \
@rm Toggle symbolic argument",
"Ddd*define_command*arg.documentationString: \
@rm When enabled, use @bf ()@rm  as symbolic argument",
"Ddd*define_command*commands.labelString: Definition",
"Ddd*define_command*commandsMenu.packing: XmPACK_COLUMN",
"Ddd*define_command*commandsMenu.entryAlignment: XmALIGNMENT_CENTER",
"Ddd*define_command*record.labelString: \\ \\ \\ Record\\ \\ \\ ",
"Ddd*define_command*end.labelString: End",
"Ddd*define_command*edit.labelString: Edit @small>>",
"Ddd*define_command*record.tipString: \
@rm Record command definition",
"Ddd*define_command*record.documentationString: \
@rm Record command definition",
"Ddd*define_command*end.tipString: \
@rm End recording",
"Ddd*define_command*end.documentationString: \
@rm End command recording",
"Ddd*define_command*edit.tipString: \
@rm Edit command definition",
"Ddd*define_command*text.columns: 40",
"Ddd*define_command*scrollBarDisplayPolicy: XmAS_NEEDED",
"Ddd*define_command*button.labelString: Button",
"Ddd*define_command*console.labelString: Console",
"Ddd*define_command*source.labelString: Source",
"Ddd*define_command*data.labelString: Data",
"Ddd*define_command*helpString: \
@rm @bs Define Command@rm\\n\
\\n\
@tt \\267 @bf Command@rm  @tt -@rm  the name of the @GDB@ command being defined.\\n\
@tt \\267 @bf Definition@rm  @tt -@rm  record and edit the command definition.\\n\
@tt \\267 @bf Button@rm  @tt -@rm  assign a button to this command.\\n\
\\n\
To define a @GDB@ command, follow these steps:\\n\
@tt \\267 @rm Enter the command name in the @bf Command@rm  field.\\n\
@tt \\267 @rm Click on @bf Record@rm  to begin the recording.\\n\
@tt \\267 @rm Now interact with DDD.\\n\
   The recorded @GDB@ commands are shown in the @GDB@ console.\\n\
@tt \\267 @rm Click on @bf End@rm  to stop the recording.\\n\
@tt \\267 @rm Use @bf Edit @small>>@rm  to edit the command definition.\\n\
@tt \\267 @rm Use @bf Button@rm  to place the new command on a button.\\n\
\\n\
To define a command with argument, enable the @bf ()@rm  toggle.\\n\
This will make the command use @bf ()@rm  as symbolic argument.\\n\
\\n\
Click on @bf Execute@rm  to run the new command.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*stack_dialog.dialogTitle: DDD: Backtrace",
"Ddd*stack_dialog.listLabelString: Backtrace",
"Ddd*stack_dialog.okLabelString: Up",
"Ddd*stack_dialog.applyLabelString: Down",
"Ddd*stack_dialog.cancelLabelString: Close",
"Ddd*stack_dialog*visibleItemCount: 10",
"Ddd*stack_dialog*helpString: \
@bs Backtrace@rm\\n\
\\n\
The backtrace is a summary of how your program got where it is.\\n\
It shows one line per stack frame, for many frames, starting with\\n\
the initial calling function (usually @tt main()@rm ), the function\\n\
called by @tt main()@rm , the function called by this function and\\n\
so on down the stack, down to the currently executing frame.\\n\
\\n\
You can make a specific frame the current one by selecting it\\n\
in this window.  You can also move around by pressing \
@bf Up@rm  or @bf Down@rm .",
"Ddd*register_dialog.dialogTitle: DDD: Registers",
"Ddd*register_dialog.listLabelString: Registers",
"Ddd*register_dialog.okLabelString: Close",
"Ddd*register_dialog.listVisibleItemCount: 12",
"Ddd*register_dialog*box.orientation: XmHORIZONTAL",
"Ddd*register_dialog*box.marginHeight: 0",
"Ddd*register_dialog*box.marginWidth: 0",
"Ddd*register_dialog*all_registers.labelString: All registers",
"Ddd*register_dialog*int_registers.labelString: Integer registers",
"Ddd*register_dialog*helpString: \
@bs Machine Registers@rm\\n\
\\n\
Select any register to have its name copied to the argument @bf ()@rm .\\n\
\\n\
If @bf Integer registers@rm  is set, integer registers are shown.\\n\
If @bf All registers@rm  is set, all registers are shown.",
"Ddd*thread_dialog.dialogTitle: DDD: Threads",
"Ddd*thread_dialog.listLabelString: Threads",
"Ddd*thread_dialog.cancelLabelString: Close",
"Ddd*thread_dialog.okLabelString: Suspend",
"Ddd*thread_dialog.applyLabelString: Resume",
"Ddd*thread_dialog.listVisibleItemCount: 10",
"Ddd*thread_dialog*box.orientation: XmHORIZONTAL",
"Ddd*thread_dialog*box.marginHeight: 0",
"Ddd*thread_dialog*box.marginWidth: 0",
"Ddd*thread_dialog*helpString: \
@bs Execution Threads@rm\\n\
\\n\
The current thread is highlighted.\\n\
All debugging commands show information from the perspective\\n\
of the current thread.\\n\
\\n\
Select any thread to make it the current thread.\\n\
\\n\
In JDB, you can also\\n\
@tt \\267 @rm select a threadgroup to switch between viewing all threads\\n\
    and the threads of the selected threadgroup.\\n\
@tt \\267 @rm click on @bf Suspend@rm  to suspend execution of the selected threads.\\n\
@tt \\267 @rm click on @bf Resume@rm  to resume execution of the selected threads.",
"Ddd*history_dialog.dialogTitle: DDD: Command History",
"Ddd*history_dialog.listLabelString: Command History",
"Ddd*history_dialog*visibleItemCount: 10",
"Ddd*history_dialog.cancelLabelString: Close",
"Ddd*history_dialog*helpString: \
@bs Command History@rm\\n\
\\n\
DDD keeps track of the commands you type during your debugging\\n\
sessions, so that you can be certain of precisely what happened.\\n\
Use this window to manage the DDD command history facility.\\n\
\\n\
Select a specific command to have it copied at the @GDB@ prompt.\\n\
Click on @bf Apply@rm  to execute the current command.",
"Ddd*edit_displays_dialog.dialogTitle: DDD: Displays",
"Ddd*edit_displays_dialog*listLabelString: Displays",
"Ddd*edit_displays_dialog*buttons.orientation: XmHORIZONTAL",
"Ddd*edit_displays_dialog.okLabelString: Close",
"Ddd*edit_displays_dialog.childPlacement: XmPLACE_TOP",
"Ddd*edit_displays_dialog*buttons*labelType: XmPIXMAP",
"Ddd*edit_displays_dialog*helpString: \
@bs Display Editor@rm\\n\
\\n\
Columns:\\n\
@tt \\267 @bf Num@rm  @tt -@rm  the display number.\\n\
@tt \\267 @bf Expression@rm  @tt -@rm  the display expression.\\n\
@tt \\267 @bf State@rm  @tt -@rm  the display state (enabled, disabled, alias, or deferred).\\n\
@tt \\267 @bf Scope@rm  @tt -@rm  the scope in which the display was created.\\n\
@tt \\267 @bf Address@rm  @tt -@rm  the location of the display expression in memory.\\n\
\\n\
Buttons:\\n\
@tt \\267 @bf Display...@rm  @tt -@rm  create a new display.\\n\
@tt \\267 @bf Disp *@rm  @tt -@rm  dereference the selected display.\\n\
@tt \\267 @bf Show@rm  @tt -@rm  show the details of all selected displays.\\n\
@tt \\267 @bf Hide@rm  @tt -@rm  hide the details of all selected displays.\\n\
@tt \\267 @bf Set@rm  @tt -@rm  change a value in the selected display.\\n\
@tt \\267 @bf Undisp@rm  @tt -@rm  delete all selected displays.\\n\
\\n\
Use @key Ctrl@rm +@bs mouse button 1@rm  to toggle selections.",
"Ddd*edit_displays_dialog*new.labelString: New...",
"Ddd*edit_displays_dialog*new.labelPixmap: new_display",
"Ddd*edit_displays_dialog*new.labelInsensitivePixmap: new_display-xx",
"Ddd*edit_displays_dialog*new.armPixmap: new_display-arm",
"Ddd*edit_displays_dialog*new.highlightPixmap: new_display-hi",
"Ddd*edit_displays_dialog*new.tipString: \
@rm Create new display",
"Ddd*edit_displays_dialog*new.documentationString: \
@rm Create new data display (possibly depending on the selected data display)",
"Ddd*edit_displays_dialog*dereference.labelString: Display *",
"Ddd*edit_displays_dialog*dereference.labelPixmap: dispref",
"Ddd*edit_displays_dialog*dereference.labelInsensitivePixmap: dispref-xx",
"Ddd*edit_displays_dialog*dereference.armPixmap: dispref-arm",
"Ddd*edit_displays_dialog*dereference.highlightPixmap: dispref-hi",
"Ddd*edit_displays_dialog*dereference.tipString: \
@rm Dereference selected display",
"Ddd*edit_displays_dialog*dereference.documentationString: \
@rm Dereference the selected data display",
"Ddd*edit_displays_dialog*show_detail.labelString: Show Detail",
"Ddd*edit_displays_dialog*show_detail.labelPixmap: show",
"Ddd*edit_displays_dialog*show_detail.labelInsensitivePixmap: show-xx",
"Ddd*edit_displays_dialog*show_detail.armPixmap: show-arm",
"Ddd*edit_displays_dialog*show_detail.highlightPixmap: show-hi",
"Ddd*edit_displays_dialog*show_detail.tipString: \
@rm Show selected details",
"Ddd*edit_displays_dialog*show_detail.documentationString: \
@rm Show detail on the selected data displays",
"Ddd*edit_displays_dialog*hide_detail.labelString: Hide Detail",
"Ddd*edit_displays_dialog*hide_detail.labelPixmap: hide",
"Ddd*edit_displays_dialog*hide_detail.labelInsensitivePixmap: hide-xx",
"Ddd*edit_displays_dialog*hide_detail.armPixmap: hide-arm",
"Ddd*edit_displays_dialog*hide_detail.highlightPixmap: hide-hi",
"Ddd*edit_displays_dialog*hide_detail.tipString: \
@rm Hide selected details",
"Ddd*edit_displays_dialog*hide_detail.documentationString: \
@rm Hide detail on the selected data displays",
"Ddd*edit_displays_dialog*set.labelString: Set Value",
"Ddd*edit_displays_dialog*set.labelPixmap: set",
"Ddd*edit_displays_dialog*set.labelInsensitivePixmap: set-xx",
"Ddd*edit_displays_dialog*set.armPixmap: set-arm",
"Ddd*edit_displays_dialog*set.highlightPixmap: set-hi",
"Ddd*edit_displays_dialog*set.tipString: \
@rm Set display value",
"Ddd*edit_displays_dialog*set.documentationString: \
@rm Change a value in the selected data display",
"Ddd*edit_displays_dialog*cluster.labelString: Cluster",
"Ddd*edit_displays_dialog*cluster.labelPixmap: cluster",
"Ddd*edit_displays_dialog*cluster.labelInsensitivePixmap: cluster-xx",
"Ddd*edit_displays_dialog*cluster.armPixmap: cluster-arm",
"Ddd*edit_displays_dialog*cluster.highlightPixmap: cluster-hi",
"Ddd*edit_displays_dialog*cluster.tipString: \
@rm Cluster displays",
"Ddd*edit_displays_dialog*cluster.documentationString: \
@rm Cluster the selected data displays into one",
"Ddd*edit_displays_dialog*uncluster.labelString: Uncluster",
"Ddd*edit_displays_dialog*uncluster.labelPixmap: uncluster",
"Ddd*edit_displays_dialog*uncluster.labelInsensitivePixmap: uncluster-xx",
"Ddd*edit_displays_dialog*uncluster.armPixmap: uncluster-arm",
"Ddd*edit_displays_dialog*uncluster.highlightPixmap: uncluster-hi",
"Ddd*edit_displays_dialog*uncluster.tipString: \
@rm Uncluster displays",
"Ddd*edit_displays_dialog*uncluster.documentationString: \
@rm Move the selected displays out of its cluster",
"Ddd*edit_displays_dialog*delete.labelString: Undisplay",
"Ddd*edit_displays_dialog*delete.labelPixmap: undisplay",
"Ddd*edit_displays_dialog*delete.labelInsensitivePixmap: undisplay-xx",
"Ddd*edit_displays_dialog*delete.armPixmap: undisplay-arm",
"Ddd*edit_displays_dialog*delete.highlightPixmap: undisplay-hi",
"Ddd*edit_displays_dialog*delete.tipString: \
@rm Delete selected displays",
"Ddd*edit_displays_dialog*delete.documentationString: \
@rm Delete the selected data displays",
"Ddd*new_display_dialog.dialogTitle: DDD: New Display",
"Ddd*new_display_dialog.okLabelString: Display",
"Ddd*new_display_dialog*label.labelString: Display Expression",
"Ddd*new_display_dialog*shortcut.labelString: Include in ",
"Ddd*new_display_dialog*display.labelType: XmPIXMAP",
"Ddd*new_display_dialog*display.labelString: `Display ()\'",
"Ddd*new_display_dialog*display.labelPixmap: display",
"Ddd*new_display_dialog*menu.labelString: menu",
"Ddd*new_display_dialog*helpString: @rm You can now enter an expression in the argument field.\\n\
The value of the expression is displayed each time the program stops.\\n\
\\n\
Variables accessible are those of the lexical environment of the current\\n\
stack frame, plus all those whose scope is global or an entire file.\\n\
\\n\
If @bf Include in `Display ()\' Menu@rm  is set, the new display expression\\n\
becomes an item in the @bf Display ()@rm  menu.",
"Ddd*dependent_display_dialog.dialogTitle: DDD: New Dependent Display",
"Ddd*dependent_display_dialog.okLabelString: Display",
"Ddd*dependent_display_dialog*label.labelString: Display Expression",
"Ddd*dependent_display_dialog*shortcut.labelString: Include in ",
"Ddd*dependent_display_dialog*display.labelType: XmPIXMAP",
"Ddd*dependent_display_dialog*display.labelString: `Display ()\'",
"Ddd*dependent_display_dialog*display.labelPixmap: display",
"Ddd*dependent_display_dialog*menu.labelString: menu",
"Ddd*dependent_display_dialog*helpString: @rm You can now enter an expression in the argument field.\\n\
The value of the expression is displayed each time the program stops.\\n\
\\n\
Variables accessible are those of the lexical environment of the current\\n\
stack frame, plus all those whose scope is global or an entire file.\\n\
\\n\
If @bf Include in `Display ()\' Menu@rm  is set, the new display expression\\n\
becomes an item in the @bf Display ()@rm  menu.\\n\
\\n\
The new display will be made dependent on the currently selected display.",
" ",
"Ddd*examine_dialog.dialogTitle: DDD: Examine Memory",
"Ddd*examine_dialog*examine.label.labelString: Examine",
"Ddd*examine_dialog*examine*text.columns: 4",
"Ddd*examine_dialog*examine*text.maximumValue: 9999",
"Ddd*examine_dialog*examine*text.minimumValue: 1",
"Ddd*examine_dialog*spinBoxChildType: XmNUMERIC",
"Ddd*examine_dialog*arrowLayout: XmARROWS_END",
"Ddd*examine_dialog*spin.marginWidth: 0",
"Ddd*examine_dialog*spin.marginHeight: 0",
"Ddd*examine_dialog*o.labelString: octal",
"Ddd*examine_dialog*x.labelString: hex",
"Ddd*examine_dialog*d.labelString: decimal",
"Ddd*examine_dialog*u.labelString: unsigned",
"Ddd*examine_dialog*t.labelString: binary",
"Ddd*examine_dialog*f.labelString: float",
"Ddd*examine_dialog*a.labelString: address",
"Ddd*examine_dialog*i.labelString: instruction",
"Ddd*examine_dialog*c.labelString: char",
"Ddd*examine_dialog*C.labelString: wide char",
"Ddd*examine_dialog*s.labelString: string",
"Ddd*examine_dialog*W.labelString: wide string",
"Ddd*examine_dialog*b.labelString: bytes",
"Ddd*examine_dialog*h.labelString: halfwords (2)",
"Ddd*examine_dialog*w.labelString: words (4)",
"Ddd*examine_dialog*g.labelString: giants (8)",
"Ddd*examine_dialog*G.labelString: longs (16)",
"Ddd*examine_dialog*address.label.labelString: from",
"Ddd*examine_dialog.okLabelString: Print",
"Ddd*examine_dialog.applyLabelString: Display",
"Ddd*examine_dialog.cancelLabelString: Close",
"Ddd*examine_dialog*helpString: \
@rm You can examine memory in any of several formats,\\n\
independently of your program\'s data types.\\n\
\\n\
You can select the number of items to examine, the format,\\n\
and the starting address.\\n\
\\n\
Click on @bf Print@rm  to print the items in the debugger console.\\n\
Click on @bf Display@rm  to display the items in the data window.\\n\
Click on @bf Close@rm  to close this window.",
"Ddd*run_dialog.dialogTitle: DDD: Run Program",
"Ddd*run_dialog.listLabelString: Arguments",
"Ddd*run_dialog.selectionLabelString: Run with Arguments",
"Ddd*run_dialog.okLabelString: Run",
"Ddd*run_dialog*selectionPolicy: XmSINGLE_SELECT",
"Ddd*run_dialog*helpString: \
@rm You can now run the debugged program.\\n\
\\n\
DDD keeps track of the arguments you gave to the debugged program,\\n\
such that you can re-use them at a later time.\\n\
Select specific arguments to have them copied to the argument prompt.\\n\
\\n\
Click on @bf Run@rm  to start the debugged program with the selected arguments.",
"Ddd*make_dialog.dialogTitle: DDD: Make",
"Ddd*make_dialog.listLabelString: Targets",
"Ddd*make_dialog.selectionLabelString: Make Target",
"Ddd*make_dialog.okLabelString: Make",
"Ddd*make_dialog*selectionPolicy: XmSINGLE_SELECT",
"Ddd*make_dialog*helpString: \
@rm You can now start the make program.\\n\
\\n\
DDD keeps track of the arguments you gave to the make program,\\n\
such that you can re-use them at a later time.\\n\
Select specific arguments to have them copied to the argument prompt.\\n\
\\n\
Click on @bf Make@rm  to start the make program with the selected arguments.",
"Ddd*cd_dialog.dialogTitle: DDD: Change Directory",
"Ddd*cd_dialog.listLabelString: Directories",
"Ddd*cd_dialog.selectionLabelString: Change Directory To",
"Ddd*cd_dialog.okLabelString: Change Dir",
"Ddd*cd_dialog*selectionPolicy: XmSINGLE_SELECT",
"Ddd*cd_dialog*helpString: \
@rm You can now change the current directory.\\n\
\\n\
DDD keeps track of the directories you gave to the cd command,\\n\
such that you can re-use them at a later time.\\n\
Select specific directories to have them copied to the argument prompt.\\n\
\\n\
Click on @bf Change Dir@rm  to change the current directory.",
"Ddd*tictactoe.dialogTitle: Tic Tac Toe",
"Ddd*tictactoe.okLabelString: New Game",
"Ddd*tictactoe*field.foreground: grey60",
"Ddd*tictactoe*helpString: \
@bs Tic Tac Toe@rm\\n\
\\n\
Try to get three stop signs in a row.",
"Ddd*busy_dialog.dialogTitle: DDD: Debugger Busy",
"Ddd*busy_dialog.messageString: \
@rm @GDB@ is busy!",
"Ddd*busy_dialog*helpString: \
@rm @GDB@ is busy on some debugger action.\\n\
\\n\
You may wish to wait until the @GDB@ prompt appears,\\n\
or interrupt the current debugging command by selecting\\n\
@bf Program@symbol \\256@bf Interrupt@rm  (or typing @key Esc@rm ).\\n\
\\n\
If @GDB@ is busy running your debugged program, interrupting\\n\
@GDB@ means to interrupt program execution, such that you can\\n\
examine the current program state.\\n\
\\n\
If @GDB@ is busy recording commands, simply enter `@tt end@rm\' ",
"at the @GDB@ prompt.",
"Ddd*quit_dialog.dialogTitle: DDD: Debugger Still Busy",
"Ddd*quit_dialog*okLabelString: Yes",
"Ddd*quit_dialog*cancelLabelString: No",
"Ddd*quit_dialog*defaultButtonType: XmDIALOG_OK_BUTTON",
"Ddd*quit_dialog*helpString: \
@rm @GDB@ is busy and does not react to the `@tt quit@rm\' command.\\n\
The debugged program may be still running.\\n\
\\n\
Before killing a running @GDB@, you should try to interrupt it\\n\
(by selecting @bf Program@symbol \\256@bf Interrupt@rm ).",
"Ddd*shutdown_dialog.dialogTitle: DDD: Program Running",
"Ddd*shutdown_dialog*okLabelString: Yes",
"Ddd*shutdown_dialog*cancelLabelString: No",
"Ddd*shutdown_dialog*defaultButtonType: XmDIALOG_OK_BUTTON",
"Ddd*shutdown_dialog*helpString: \
@rm Your program is still running.\\n\
\\n\
Shutting down DDD now will kill your program.\\n\
Please confirm that this is what you want.",
"Ddd*terminated_dialog.dialogTitle: DDD: Debugger Terminated",
"Ddd*terminated_dialog*okLabelString: Restart @GDB@",
"Ddd*terminated_dialog*cancelLabelString: Exit",
"Ddd*terminated_dialog*helpString: \
@rm @GDB@ terminated abnormally.  Without @GDB@, DDD cannot run.\\n\
\\n\
Click on @bf Restart @GDB@@rm  to restart @GDB@.\\n\
Click on @bf Exit@rm  to exit DDD.",
"Ddd*exception_dialog.dialogTitle: DDD: Internal Debugger Exception",
"Ddd*exception_dialog*okLabelString: Restart @GDB@",
"Ddd*exception_dialog*cancelLabelString: Exit",
"Ddd*exception_dialog*helpString: \
@rm @GDB@ caught an internal exception and may be in an undefined state.\\n\
\\n\
DDD users have reported that this frequently happens when @GDB@ attempts\\n\
to access undefined variables.  You can avoid this by disabling the\\n\
automatic display of variable values\\n\
(via @bf Edit@symbol \\256@bf Preferences@symbol \\256@bf General@symbol \\256@bf Automatic Display of Variable Values@rm ).\\n\
\\n\
Click on @bf Restart @GDB@@rm  to restart @GDB@.\\n\
Click on @bf Exit@rm  to exit DDD.",
"Ddd*exited_dialog.dialogTitle: DDD: Debugger Exited",
"Ddd*exited_dialog*okLabelString: Restart @GDB@",
"Ddd*exited_dialog*cancelLabelString: Exit",
"Ddd*exited_dialog*helpString: \
@rm @GDB@ has exited.  Without @GDB@, DDD cannot run.\\n\
\\n\
Click on @bf Restart @GDB@@rm  to restart @GDB@.\\n\
Click on @bf Exit@rm  to exit DDD.",
"Ddd*done_dialog.dialogTitle: DDD: Program Exited",
"Ddd*done_dialog*okLabelString: Restart @GDB@",
"Ddd*done_dialog*cancelLabelString: Exit",
"Ddd*done_dialog*helpString: \
@rm Your program has exited, and so did @GDB@.\\n\
\\n\
Click on @bf Restart @GDB@@rm  to restart @GDB@.\\n\
Click on @bf Exit@rm  to exit DDD.",
"Ddd*no_debugger_dialog.dialogTitle: DDD: No Debugger",
"Ddd*no_debugger_dialog*okLabelString: Exit",
"Ddd*no_debugger_dialog*helpString: \
@rm @GDB@ could not be started.\\n\
\\n\
DDD needs some inferior debugger to run.\\n\
You may wish to examine the diagnostic messages before exiting DDD.\\n\
\\n\
Here are some hints that may help you out:\\n\
@tt \\267 @rm If DDD looked for the wrong inferior debugger, re-invoke DDD,\\n\
    but use `@tt --auto@rm\' to have DDD infer the correct inferior debugger.\\n\
@tt \\267 @rm If @GDB@ is the correct inferior debugger, but could not be found,\\n\
    re-invoke DDD, but use the `@tt --debugger @sl path@rm @rm\' option to specify\\n\
    the full @GDB@ path @sl path@rm .\\n\
@tt \\267 @rm If you started DDD without arguments, re-invoke DDD,\\n\
    but give it an executable as argument.  XDB and some DBX versions\\n\
    require being invoked with an executable.\\n\
@tt \\267 @rm DDD passes all unknown options to @GDB@.  If @GDB@ choked on\\n\
    some options intended for DDD, use the DDD `@tt --help@rm\' option to\\n\
    get a list of valid DDD options.\\n\
@tt \\267 @rm If @GDB@ could not be invoked due to some communication failure,\\n\
    try changing the `@tt .blockTTYInput@rm\' resource.\\n\
For details on options and resources, see the DDD manual: select\\n\
@bf Help@symbol \\256@bf DDD Reference@rm  \
or invoke DDD with the `@tt --manual@rm\' option.\\n\
\\n\
Click on @bf Exit@rm  to exit DDD.",
"Ddd*no_plotter_dialog.dialogTitle: DDD: No Plot",
"Ddd*no_plotter_dialog*helpString: \
@rm The Gnuplot program could not be started.\\n\
\\n\
DDD requires the Gnuplot program to create plots.\\n\
Please install Gnuplot (available from any GNU site)\\n\
or enter its path in @bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Plot@rm .",
"Ddd*fatal_dialog.dialogTitle: DDD: Oops",
"Ddd*fatal_dialog.messageString: \
@rm Internal error",
"Ddd*fatal_dialog*okLabelString: Restart",
"Ddd*fatal_dialog*debug.labelString: Debug",
"Ddd*fatal_dialog*exit.labelString: Exit",
"Ddd*fatal_dialog*cancelLabelString: Ignore",
"Ddd*fatal_dialog*helpString: \
@rm Oops!  You have found a bug in DDD.\\n\
You should better restart DDD now; DDD may fail again soon.\\n\
\\n\
If you can reproduce this bug, please send a bug report\\n\
to @tt<ddd@gnu.org>@rm , giving a subject like\\n\
\\n\
    DDD 3.3.12 (@THEHOST@) gets @CAUSE@\\n\
\\n\
To enable us to fix the bug, you should include the following information:\\n\
@tt \\267 @rm What you were doing to get this message.  Report all the facts.\\n\
@tt \\267 @rm The `@tt ~/.ddd/log@rm\' file as generated by this session.\\n\
Please read also the section ``Reporting Bugs\'\' in the DDD manual.\\n\
\\n\
Thanks in advance for your support.\\n\
\\n\
Click on @bf Restart@rm  to restart DDD from scratch.\\n\
Click on @bf Exit@rm  to exit DDD.\\n\
Click on @bf Ignore@rm  to resume your current DDD session.",
"Ddd*yn_dialog.dialogTitle: DDD: Debugger Question",
"Ddd*yn_dialog*okLabelString: Yes",
"Ddd*yn_dialog*cancelLabelString: No",
"Ddd*yn_dialog*defaultButtonType: XmDIALOG_OK_BUTTON",
"Ddd*yn_dialog*helpString: \
@bs @GDB@ Question@rm\\n\
\\n\
@GDB@ requires confirmation for a potentially dangerous operation.\\n\
The @GDB@ documentation has details on why this is dangerous.\\n\
Click on @bf Yes@rm  or @bf No@rm , or enter `@tt yes@rm\' or `@tt no@rm\' \
in the @GDB@ console.\\n\
\\n\
To turn off these confirmations in GDB, unset\\n\
@bf Edit@symbol \\256@bf GDB Settings@symbol \\256@bf Confirm potentially dangerous operations@rm .",
"Ddd*gdb_message_dialog.dialogTitle: DDD: Debugger Message",
"Ddd*gdb_message_dialog*helpString: \
@bs @GDB@ Message@rm\\n\
\\n\
For details on this @GDB@ message, consult the @GDB@ documentation.",
"Ddd*gdb_selection_dialog.dialogTitle: DDD: Selection",
"Ddd*gdb_selection_dialog*listLabelString: Selection",
"Ddd*gdb_selection_dialog*helpString: \
@bs @GDB@ Selection Menu@rm\\n\
\\n\
Please select an item from the list and click on @bf OK@rm .\\n\
For more details, consult the @GDB@ documentation.",
"Ddd*confirm_overwrite_dialog.dialogTitle: DDD: File Exists",
"Ddd*confirm_overwrite_dialog*messageString: \
@rm Overwrite existing file?",
"Ddd*confirm_overwrite_dialog*okLabelString: Yes",
"Ddd*confirm_overwrite_dialog*cancelLabelString: No",
"Ddd*confirm_overwrite_dialog*defaultButtonType: XmDIALOG_OK_BUTTON",
"Ddd*confirm_overwrite_dialog*helpString: \
@rm The file already exists.\\n\
Click on @bf Yes@rm  to overwrite the existing file.",
"Ddd*restart_dialog.dialogTitle: DDD: Restart",
"Ddd*restart_dialog.messageString: \
@rm DDD startup preferences were modified.\\n\
Restart DDD to see their effect?",
"Ddd*restart_dialog*okLabelString: Yes",
"Ddd*restart_dialog*cancelLabelString: No",
"Ddd*restart_dialog*defaultButtonType: XmDIALOG_OK_BUTTON",
"Ddd*restart_dialog*helpString: \
@rm You have changed some DDD startup preferences.\\n\
\\n\
To make your changes take effect, you can\\n\
@tt \\267 @rm @sl Save Options@rm , affecting all future DDD sessions.\\n\
@tt \\267 @rm @sl Restart DDD@rm , affecting the restarted DDD session only.\\n\
\\n\
To see your changes take effect, click on @bf Yes@rm  to restart DDD.\\n\
Otherwise, click on @bf No@rm  and be sure to save your changes\\n\
using @bf Edit@symbol \\256@bf Save Options@rm .",
"Ddd*set_dialog.dialogTitle: DDD: Set Value",
"Ddd*set_dialog.textAccelerators:",
"Ddd*set_dialog*helpString: \
@rm You can now change the value of the variable in @bf ()@rm .\\n\
If you want to keep it unchanged, click on @bf Cancel@rm .",
"Ddd*kill_to_save_dialog.dialogTitle: DDD: Save Session",
"Ddd*kill_to_save_dialog.messageString: \
@rm Kill the program being debugged?",
"Ddd*kill_to_save_dialog.okLabelString: Yes",
"Ddd*kill_to_save_dialog.cancelLabelString: No",
"Ddd*kill_to_save_dialog*helpString: \
@rm In order to restore the current memory contents and the\\n\
current execution position, DDD requires a core dump.\\n\
Unfortunately, DDD must kill the program for that.\\n\
\\n\
To kill your program and save memory contents, click on @bf Yes@rm .\\n\
To cancel saving the session, click on @bf No@rm .",
"Ddd*confirm_restart_dialog.dialogTitle: DDD: Restart Session",
"Ddd*confirm_restart_dialog.messageString: \
@rm The program being debugged has been started already.\\n\
Restart anyway (and kill it)?",
"Ddd*confirm_restart_dialog.okLabelString: Yes",
"Ddd*confirm_restart_dialog.cancelLabelString: No",
"Ddd*confirm_restart_dialog*helpString: \
@bs Restart Session@rm\\n\
\\n\
For details on this @GDB@ message, consult the @GDB@ documentation.",
"Ddd*confirm_restart_gdb_dialog.dialogTitle: DDD: Restart Debugger",
"Ddd*confirm_restart_gdb_dialog.messageString: \
@rm The program being debugged has been started already.\\n\
Start it from the beginning (and restart @GDB@)?",
"Ddd*confirm_restart_gdb_dialog.okLabelString: Yes",
"Ddd*confirm_restart_gdb_dialog.cancelLabelString: No",
"Ddd*confirm_restart_gdb_dialog*helpString: \
@bs Restart Debugger@rm\\n\
\\n\
@GDB@ can only handle one program run per session.\\n\
To rerun the program being debugged, DDD must restart @GDB@.\\n\
Essential @GDB@ settings (such as breakpoints) will be restored,\\n\
but other settings may be lost.\\n\
\\n\
To rerun your program (and restart @GDB@), click on @bf Yes@rm .\\n\
To cancel restarting the program, click on @bf No@rm .",
"Ddd*data_not_saved_dialog.dialogTitle: DDD: Save Session",
"Ddd*data_not_saved_dialog.messageString: \
@rm Without a core dump, the current execution position\\n\
and memory contents will not be saved.  Proceed anyway?",
"Ddd*data_not_saved_dialog.okLabelString: Yes",
"Ddd*data_not_saved_dialog.cancelLabelString: No",
"Ddd*data_not_saved_dialog*helpString: \
@rm In order to restore the current execution position and memory contents,\\n\
DDD requires a core dump of the debugged program.\\n\
\\n\
Without a core dump,\\n\
@tt \\267 @rm The current execution position and memory contents will be lost.\\n\
    The debugged program must be restarted when restoring the session.\\n\
@tt \\267 @rm The current data displays will be deferred.\\n\
    When restoring the session and running the program, they will be created\\n\
    as soon as their current scope is reached.\\n\
\\n\
To save the entire state without a core dump, click on @bf Yes@rm .\\n\
To cancel saving the session, click on @bf No@rm .",
"Ddd*reload_options_dialog.dialogTitle: DDD: Reload Options",
"Ddd*reload_options_dialog.messageString: \
@rm Options have changed on disk.  Reload them?",
"Ddd*reload_options_dialog*helpString: \
@rm The options file has changed on disk.\\n\
\\n\
This typically happens when\\n\
@tt \\267 @rm options were saved from another DDD instance, or\\n\
@tt \\267 @rm the options file has been edited using a text editor.\\n\\n\
To load the changed options file into this DDD instance, click on @bf OK@rm .\\n\
To ignore the changed options file, click on @bf Cancel@rm .\\n\
\\n\
Use @bf File@symbol \\256@bf Save Session@rm  to save the current options in a session.",
"Ddd*overwrite_options_dialog.dialogTitle: DDD: Overwrite Options",
"Ddd*overwrite_options_dialog.messageString: \
@rm Options have changed on disk.  Overwrite them?",
"Ddd*overwrite_options_dialog*helpString: \
@rm The options file has changed on disk.\\n\
\\n\
This typically happens when\\n\
@tt \\267 @rm options were saved from another DDD instance, or\\n\
@tt \\267 @rm the options file has been edited using a text editor.\\n\\n\
To overwrite the changed options file, click on @bf OK@rm .\\n\
To cancel saving options, click on @bf Cancel@rm .\\n\
\\n\
Use @bf File@symbol \\256@bf Save Session@rm  to save the current options in a session.",
"Ddd*lock_dialog.dialogTitle: DDD: There can be only one",
"Ddd*lock_dialog*helpString: \
@rm Another DDD is running, sharing state with this DDD instance.\\n\
\\n\
To resume execution of this DDD, click on @bf Continue@rm .\\n\
To kill the other DDD instance, click on @bf Kill@rm .\\n\
Otherwise, click on @bf Exit@rm .\\n\
\\n\
You can disable this warning by disabling\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf General@symbol \\256@bf Warn if multiple @@@@DDD@@@@ instances are running@rm .",
"Ddd*lock_dialog.okLabelString: Continue",
"Ddd*lock_dialog*kill.labelString: Kill",
"Ddd*lock_dialog.cancelLabelString: Exit",
"Ddd*select_apply_theme_dialog.dialogTitle: DDD: Apply Theme",
"Ddd*select_apply_theme_dialog.okLabelString: Apply on all",
"Ddd*select_apply_theme_dialog*apply.labelString: Apply on this",
"Ddd*select_apply_theme_dialog*messageString: \
@rm Apply @sl @THEME_DOC@@rm  on all\\n\
expressions matching @tt \"@PATTERN@\"@rm ?",
"Ddd*select_apply_theme_dialog*helpString: \
@bs Apply Theme@rm\\n\
\\n\
You are about to apply a theme to an expression or a pattern.\\n\
\\n\
Applying a theme is @sl permanent@rm ; that is, it will be applied to all\\n\
present and future occurrences of the expression. (You can always\\n\
unapply the theme via @bf Data@symbol \\256@bf Themes@rm .)\\n\\n\
You can choose where @sl @THEME_DOC@@rm  should be applied:\\n\
\\n\
@tt \\267 @rm To apply @sl @THEME_DOC@@rm  on all expressions \
matching @tt \"@PATTERN@\"@rm ,\\n\
    click on @bf Apply on all@rm .\\n\
@tt \\267 @rm To apply @sl @THEME_DOC@@rm  on @tt @EXPR@@rm  only,\\n\
    click on @bf Apply on this@rm .\\n\
@tt \\267 @rm To cancel applying the theme, click on @bf Cancel@rm .",
"Ddd*confirm_apply_theme_dialog.dialogTitle: DDD: Apply Theme",
"Ddd*confirm_apply_theme_dialog.okLabelString: Apply",
"Ddd*confirm_apply_theme_dialog*messageString: \
@rm Apply @sl @THEME_DOC@@rm  on all expressions @tt \"@EXPR@\"@rm ?",
"Ddd*confirm_apply_theme_dialog*helpString: \
@bs Apply Theme@rm\\n\
\\n\
You are about to apply a theme to an expression or a pattern.\\n\
\\n\
Applying a theme is @sl permanent@rm ; that is, it will be applied to all\\n\
present and future occurrences of the expression. (You can always\\n\
unapply the theme via @bf Data@symbol \\256@bf Themes@rm .)\\n\\n\
To apply @sl @THEME_DOC@@rm  on @tt @EXPR@@rm , click on @bf Apply@rm .\\n\
To cancel applying the theme, click on @bf Cancel@rm .",
"Ddd*launch_tty_dialog.dialogTitle: DDD: Starting Execution Window",
"Ddd*launch_tty_dialog.messageString: \
@rm Starting Execution Window...",
"Ddd*launch_plot_dialog.dialogTitle: DDD: Starting Plot",
"Ddd*bad_version_warning.dialogTitle: DDD: Version Mismatch",
"Ddd*bad_version_warning*helpString: \
@rm This DDD version does not match the version of the\\n\
app-defaults file `@tt Ddd@rm\' or your `@tt ~/.ddd/init@rm\' file.\\n\
\\n\
@tt \\267 @rm If the app-defaults file `@tt Ddd@rm\' is out of date, DDD may not work as \
expected.\\n\
    For instance, this message (being specified in an app-defaults file) may \
be\\n\
    out of date.  Please install a recent app-defaults file, or better yet,\\n\
    remove it: DDD works perfectly without app-defaults file.  Instead, use \
a\\n\
    personal `@tt ~/.ddd/init@rm\' file to customize DDD.\\n\
\\n\
@tt \\267 @rm If your personal `@tt ~/.ddd/init@rm\' file or some session \
`@tt init@rm\' file is out of date,\\n\
    use @bf Edit@symbol \\256@bf Save Options@rm  to update it.",
"Ddd*class_error.dialogTitle: DDD: No Class",
"Ddd*class_error*helpString: \
@rm The given class could not be loaded.\\n\
Please check the @GDB@ search path via @bf Edit@symbol \\256@bf @GDB@ settings@rm .",
"Ddd*source_file_error.dialogTitle: DDD: No Source",
"Ddd*source_file_error*helpString: \
@rm The given source file could not be loaded.\\n\
Please check the @GDB@ search path via @bf Edit@symbol \\256@bf @GDB@ settings@rm .",
"Ddd*remote_file_error.dialogTitle: DDD: No Remote Source",
"Ddd*remote_file_error*helpString: \
@rm The given source file could not be loaded from the remote host.\\n\
Please check the @GDB@ search path via @bf Edit@symbol \\256@bf @GDB@ settings@rm .",
"Ddd*source_file_from_gdb_warning.dialogTitle: DDD: Source From Debugger",
"Ddd*source_file_from_gdb_warning*helpString: \
@rm The given source file could not be loaded directly.\\n\
Instead, the source was obtained from @GDB@ via the `@tt list@rm\' command.\\n\
Please proceed as usual.",
"Ddd*source_trunc_error.dialogTitle: DDD: Source Truncated",
"Ddd*source_trunc_error*helpString: \
@rm The given source file could not be loaded entirely;\\n\
the file size has changed during loading.\\n\
Please try again as soon as the source file contents are stable.",
"Ddd*source_empty_warning.dialogTitle: DDD: Empty Source",
"Ddd*source_empty_warning*helpString: \
@rm The given source file contains no data.\\n\
This is very unusual for source files.\\n\
Please verify the file name and try again.",
"Ddd*source_binary_warning.dialogTitle: DDD: Binary Source",
"Ddd*source_binary_warning*helpString: \
@rm The given source file contains NUL characters.\\n\
You probably loaded a binary file instead of a source file.\\n\
Please verify the file name and try again.",
"Ddd*manual_find_error.dialogTitle: DDD: Not Found",
"Ddd*manual_find_error*helpString: \
@rm The given search key @bf ()@rm  can not be found in the on-line manual.\\n\
Please use an alternate key and tru again.",
"Ddd*no_source_error.dialogTitle: DDD: No Source",
"Ddd*no_source_error*helpString: \
@rm There is no current source text in which to search.\\n\
Please open a program first, using @bf File@symbol \\256@bf Open Program@rm .",
"Ddd*no_source_edit_error.dialogTitle: DDD: No Source",
"Ddd*no_source_edit_error*helpString: \
@rm There is no current source text to edit.\\n\
Please open a program first, using @bf File@symbol \\256@bf Open Program@rm .",
"Ddd*no_such_line_error.dialogTitle: DDD: No such line",
"Ddd*no_such_line_error*helpString: \
@rm There is no such line in the current source text.\\n\
Please try another line number.",
"Ddd*no_such_breakpoint_error.dialogTitle: DDD: No Such Breakpoint",
"Ddd*no_such_breakpoint_error*helpString: \
@rm There is no such breakpoint in the current program.\\n\
Please verify the breakpoint number.",
"Ddd*no_completion_error.dialogTitle: DDD: No Completion",
"Ddd*no_completion_error*helpString: \
@rm @GDB@ does not support command and argument completion.\\n\
\\n\
Command completion requires the GDB `@tt complete@rm\' command,\\n\
which is present in GDB 4.13 and later.\\n\
\\n\
To use command completion, upgrade to a recent @GDB@ version.",
"Ddd*no_program.dialogTitle: DDD: No Program",
"Ddd*no_program*helpString: \
@rm You have not opened any program yet.  @GDB@ needs a debuggee\\n\
to access core dumps, source files, or attaching to processes.\\n\
\\n\
You can ignore this warning and proceed, but @GDB@ may be unable\\n\
to display symbolic values and determine locations.\\n\
\\n\
To open a program, use @bf File@symbol \\256@bf Open Program@rm .",
"Ddd*print_empty_graph_error.dialogTitle: DDD: Nothing to Print",
"Ddd*print_empty_graph_error*helpString: \
@rm There is nothing to print.\\n\
The printing has been cancelled.\\n\
\\n\
Please print again as soon as there is some data to print.",
"Ddd*print_failed_error.dialogTitle: DDD: Printing Failed",
"Ddd*print_failed_error*helpString: \
@rm The file holding the graph picture could not be written.\\n\
The printing has been cancelled.\\n\
\\n\
Please try another file name and try again.",
"Ddd*export_failed_error.dialogTitle: DDD: Export Failed",
"Ddd*export_failed_error*helpString: \
@rm The file holding the plot data could not be written.\\n\
The export has been cancelled.\\n\
\\n\
Please try another file name and try again.",
"Ddd*unknown_plot_term_type_error: DDD: Unknown Plot Terminal Type",
"Ddd*unknown_plot_term_type_error*helpString: \
@rm DDD does not know the plot terminal type specified in the\\n\
`@tt .plotTermType@rm\' resource.\\n\
Possible `@tt .plotTermType@rm\' values include `@tt xlib@rm\' and `@tt x11@rm\'.\\n\
\\n\
Please set up the `@tt .plotTermType@rm\' resource\\n\
in your `@tt ~/.ddd/init@rm\' file and try again.",
"Ddd*tty_exec_error.dialogTitle: DDD: No Execution Window",
"Ddd*tty_exec_error*helpString: \
@rm The terminal emulator for the execution window\\n\
could not be invoked.  The debugged process will\\n\
execute in the @GDB@ console instead.\\n\
\\n\
Please verify the contents of the\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Execution Window@rm\\n\
setting and make sure that the given\\n\
terminal program is within your executable path.",
"Ddd*tty_command_error.dialogTitle: DDD: TTY Failed",
"Ddd*tty_command_error*helpString: \
@rm DDD sent a `@tt tty@rm\' command to @GDB@ in order to redirect\\n\
input/output of the debugged process to the execution window.\\n\
This command failed.\\n\
\\n\
DDD will now redirect the process I/O explicitly.  This means that\\n\
the command window remains the controlling terminal.\\n\
\\n\
You can tell DDD to not use the `@tt tty@rm\' command, but to use explicit\\n\
redirection instead, using shell redirection operators.\\n\
To do so, include a line\\n\
\\n\
@tt Ddd*useTTYCommand: off@rm\\n\
\\n\
in your `@tt ~/.ddd/init@rm\' file and restart DDD.",
"Ddd*tty_type_error.dialogTitle: DDD: Term Failed",
"Ddd*tty_type_error*helpString: \
@rm DDD could not set the TERM environment variable\\n\
to the type of the execution window.  This means that\\n\
your program will execute with a terminal type\\n\
set to `@tt dumb@rm\' instead of `@tt xterm@rm\'.\\n\
Please see `@tt ~/.ddd/log@rm\' for further diagnostics.",
"Ddd*history_save_error.dialogTitle: DDD: Save History Failed",
"Ddd*history_save_error*helpString: \
@rm The command history could not be saved.\\n\
Please verify whether `@tt ~/.ddd/history@rm\' is writable and try again.",
"Ddd*options_save_error.dialogTitle: DDD: Save Options Failed",
"Ddd*options_save_error*helpString: \
@rm The DDD options could not be saved.\\n\
Please verify whether `@tt ~/.ddd/init@rm\' is writable and try again.",
"Ddd*no_license_error.dialogTitle: DDD: No License",
"Ddd*no_license_error*helpString: \
@rm The DDD license could not be uncompressed.\\n\
\\n\
Please verify the contents of the\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Uncompress@rm\\n\
setting and make sure that the given\\n\
uncompressing program is within your executable path.",
"Ddd*no_news_error.dialogTitle: DDD: No news is good news",
"Ddd*no_news_error*helpString: \
@rm The DDD news could not be uncompressed.\\n\
\\n\
Please verify the contents of the\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Uncompress@rm\\n\
setting and make sure that the given\\n\
uncompressing program is within your executable path.",
"Ddd*no_ddd_manual_error.dialogTitle: DDD: No Manual",
"Ddd*no_ddd_manual_error*helpString: \
@rm The DDD manual could not be uncompressed.\\n\
\\n\
Please verify the contents of the\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Uncompress@rm\\n\
setting and make sure that the given\\n\
uncompressing program is within your executable path.",
"Ddd*no_ddd_man_page_error.dialogTitle: DDD: No Manual",
"Ddd*no_ddd_man_page_error*helpString: \
@rm It seems the DDD manual page is not installed.\\n\
Please install the DDD manual page and try again.",
"Ddd*startup_warning.dialogTitle: DDD: New Startup Required",
"Ddd*startup_warning*helpString: \
@rm This setting cannot be changed while DDD is running.\\n\
Please save options and restart DDD to see the effects.",
"Ddd*grab_warning.dialogTitle: DDD: Pointer Frozen",
"Ddd*grab_warning*helpString: \
@rm DDD has detected a frozen (grabbed) mouse pointer.\\n\
\\n\
This may be because @GDB@ has interrupted the debuggee\\n\
while it was grabbing the mouse pointer.\\n\
If DDD remains in this state, further interaction will\\n\
probably be impossible.",
"Ddd*no_display_number_warning.dialogTitle: DDD: No Display Number",
"Ddd*no_display_number_warning*helpString: \
@rm DDD could not determine the number of the new display\\n\
as assigned by @GDB@.  DDD will use a default number instead.",
"Ddd*invalid_range_error.dialogTitle: DDD: Invalid Range",
"Ddd*invalid_range_error*helpString: \
@rm The displays to be created have an invalid range @sl x@rm ..@sl y@rm .\\n\
The range must be where @sl x@rm ..@sl y@rm  with @sl x@rm  < @sl y@rm .\\n\
Please verify the range and try again.",
"Ddd*expired_warning.dialogTitle: DDD: DDD Expired",
"Ddd*expired_warning*helpString: \
@rm DDD 3.3.12 has been superseded by a newer DDD version.\\n\
DDD 3.3.12 should no longer be used.\\n\
\\n\
Please upgrade to a recent DDD version.\\n\
For details, see the @bf Help@symbol \\256@bf DDD WWW Page@rm .",
"Ddd*core_missing_warning.dialogTitle: DDD: Core Missing",
"Ddd*core_missing_warning*helpString: \
@rm DDD could not get a core dump of the debugged program.\\n\
This means that the current memory contents and execution position\\n\
will be lost when restoring the session.\\n\
\\n\
Please verify the settings in\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Helpers@symbol \\256@bf Get Core File@rm ;\\n\
try again without helper if appropriate.\\n\
\\n\
Also be sure that you have not disabled core dumps\\n\
(hint: look for `@tt limit@rm\' and `@tt ulimit@rm\' commands \
in your shell startup file)",
"Ddd*program_name_missing_warning.dialogTitle: DDD: Program Name Missing",
"Ddd*program_name_missing_warning*helpString: \
@rm DDD could not determine the name of the current debuggee.\\n\
Please try again when @GDB@ is ready.",
"Ddd*breakpoint_missing_warning.dialogTitle: DDD: Breakpoints Missing",
"Ddd*breakpoint_missing_warning*helpString: \
@rm DDD could not save the current breakpoint state.\\n\
Please try again when @GDB@ is ready.",
"Ddd*displays_missing_warning.dialogTitle: DDD: Data Displays Missing",
"Ddd*displays_missing_warning*helpString: \
@rm DDD could not save the entire data display state.\\n\
Please try again when @GDB@ is ready.",
"Ddd*no_sessions_error.dialogTitle: DDD: No Sessions",
"Ddd*no_sessions_error*helpString: \
@rm DDD could not access the session repository.\\n\
Please verify whether the `@tt ~/.ddd/sessions/@rm\' is accessible.",
"Ddd*delete_session_error.dialogTitle: DDD: Delete Session Failed",
"Ddd*delete_session_error*helpString: \
@rm DDD could not entirely remove the session directory from the repository.\\n\
Please verify whether the `@tt ~/.ddd/sessions/@rm\' is writable.",
"Ddd*too_many_shortcuts_warning.dialogTitle: DDD: Too many Shortcuts",
"Ddd*too_many_shortcuts_warning*helpString: \
@rm DDD has not enough room for all display shortcuts and will\\n\
only display the most recently created shortcuts.\\n\
Please edit the list of display shortcuts, using @bf Display@symbol \\256@bf Edit Menu@rm .",
"Ddd*gdb_io_error.dialogTitle: DDD: I/O Error",
"Ddd*gdb_io_error*helpString: \
@rm The communication between @GDB@ and DDD does not work correctly.\\n\
This is probably due to a bad DDD configuration.\\n\
\\n\
DDD cannot work around this problem, so you may not be able to continue.\\n\
Restart DDD and try again.",
"Ddd*gdb_io_warning.dialogTitle: DDD: I/O Warning",
"Ddd*gdb_io_warning*helpString: \
@rm The communication between @GDB@ and DDD does not work correctly.\\n\
This is probably due to a bad DDD configuration.\\n\
\\n\
DDD can work around this problem, so you may continue working.",
"Ddd*out_of_glyphs_warning.dialogTitle: DDD: Out of Glyphs",
"Ddd*out_of_glyphs_warning*helpString: \
@rm DDD can only display a limited amount of breakpoint symbols at one time.\\n\
The other breakpoints are still maintained, but not visible right now.\\n\
\\n\
To increase the maximum number @sl N@rm  of displayed breakpoint symbols, \
include a line\\n\
\\n\
@tt Ddd*maxGlyphs: @sl N@rm @rm\\n\
\\n\
in your `@tt ~/.ddd/init@rm\' file and restart DDD.",
"Ddd*no_vsllib_error.dialogTitle: DDD: Could not load VSL library",
"Ddd*no_vsllib_error*helpString: \
@rm DDD could not load its VSL library\\n\
and will not be able to show data displays.\\n\
\\n\
This error typically happens when DDD installation is (yet) incomplete.\\n\
Did you already type @bf make install@rm ?\\n\
\\n\
If you don\'t want to install DDD, you can work around this error by\\n\
@tt \\267 @rm installing the file `@tt vsllib/ddd.vsl@rm\'\\n\
    into `@tt @ROOT@/vsllib/ddd.vsl@rm\', or\\n\
@tt \\267 @rm have the environment variable @sl DDD_HOME@rm  point at the place\\n\
    where the `@tt vsllib@rm\' directory resides.\\n\
\\n\
To get a DDD demo before installation, simply type @bf make check@rm .\\n\
If this error persists, something else has gone wrong.",
"Ddd*vsl_message.dialogTitle: DDD: VSL Messages",
"Ddd*vsl_message*helpString: \
The VSL interpreter issued a message while parsing and/or evaluating\\n\
VSL expressions.  Your data displays may not be rendered successfully.\\n\
\\n\
@bf Please note:@rm  This dialog only lists the @sl first@rm  problem encountered.\\n\
For further diagnostics, see the status line (and the `@tt ~/.ddd/log@rm\' file).",
"Ddd*no_themes_warning.dialogTitle: DDD: No Themes",
"Ddd*no_themes_warning*helpString: \
@rm The specified directory could not be found.\\n\
\\n\
This error typically happens when DDD installation is (yet) incomplete.\\n\
Did you already type @bf make install@rm ?\\n\
\\n\
Please verify whether the directories in the `@tt vslPath@rm\' resource\\n\
(including your home directory) exist.\\n\
\\n\
If you work on Windows, be sure not to have `@tt :@rm\' in your HOME environment\\n\
variable.",
"Ddd*no_program.helpString: \
@rm You have not opened any program yet.  @GDB@ needs a debuggee\\n\
to access core dumps, source files, or attaching to processes.\\n\
\\n\
To open a program, use @bf File@symbol \\256@bf Open Program@rm .",
"Ddd*no_source_and_no_code.helpString: \
@rm @GDB@ cannot find the source code of your program.\\n\
\\n\
Here are some hints that may help you out:\\n\
@tt \\267 @rm Use @bf File@symbol \\256@bf Open Source@rm  to select a source file.\\n\
@tt \\267 @rm If this does not work, your program may lack debugging information.\\n\
    Without debugging information, @GDB@ will be unable to locate the source\\n\
    code.  To request debugging information, specify the `@tt -g@rm\' option\\n\
    when you run the compiler.\\n\
@tt \\267 @rm You may need to tell @GDB@ where the source code files are.\\n\
    Invoke @bf Edit@symbol \\256@bf @GDB@ Settings@rm  and look for appropriate entries.\\n\
    Using GDB, you can also create a local `@tt .gdbinit@rm\' file that contains\\n\
    `@tt directory @sl path@rm @rm\', where @sl path@rm  is the source path.\\n\
@tt \\267 @rm Using GDB, you can continue at machine code level \
by enabling the\\n\
    Machine Code Window.  Use @bf Source@symbol \\256@bf Display Machine Code@rm .",
"Ddd*recording.helpString: \
@rm @GDB@ is recording commands.\\n\
\\n\
While recording, commands are not executed; instead, \
@GDB@ @sl records@rm  them\\n\
for execution when a breakpoint is reached or for user-defined commands.\\n\
\\n\
@tt \\267 @rm To end the recording, click on @bf End@rm  \
or enter `@tt end@rm\' at the @GDB@ prompt.\\n\
@tt \\267 @rm To cancel the recording, select @bf Program@symbol \\256@bf Interrupt@rm  \
or press @key Esc@rm .",
"Ddd*busy.helpString: \
@rm @GDB@ is busy on some debugger action.\\n\
\\n\
You may\\n\
@tt \\267 @rm wish to wait until the @GDB@ prompt appears, or\\n\
@tt \\267 @rm interrupt the current debugging command by selecting\\n\
    @bf Program@symbol \\256@bf Interrupt@rm  (or typing @key Esc@rm ).",
"Ddd*running.helpString: \
@rm @GDB@ is executing the debugged program.\\n\
\\n\
You may\\n\
@tt \\267 @rm interact with the program until a breakpoint is reached, or\\n\
@tt \\267 @rm interrupt program execution by selecting\\n\
    @bf Program@symbol \\256@bf Interrupt@rm  (or typing @key Esc@rm ).",
"Ddd*program_not_running.helpString: \
@rm Your program is not running.\\n\
\\n\
You may now choose between the following:\\n\
@tt \\267 @rm Start the program, using @bf Program@symbol \\256@bf Run@rm . \
You may wish to\\n\
    set some breakpoints beforehand, using @bf Break at ()@rm  and\\n\
    @bf Source@symbol \\256@bf Edit Breakpoints@rm .\\n\
    To find specific functions, use @bf Lookup ()@rm .\\n\
@tt \\267 @rm If your program is already running outside of DDD, you can\\n\
    attach to its running process, using @bf File@symbol \\256@bf Attach to Process@rm .\\n\
@tt \\267 @rm If some previous invocation of your program has failed, and\\n\
    you want to know why, use @bf File@symbol \\256@bf Open Core Dump@rm  to open\\n\
    its core dump.",
"Ddd*item_selected.helpString: \
@rm You have selected some item from the program source code.\\n\
\\n\
@tt \\267 @rm To look up further occurences in the source code, use @charset Find@small<< @charset()@rm\\n\
    and @charset Find@small>> @charset()@rm .  \
@bf Lookup ()@rm  leads you to the item\'s definition.\\n\
@tt \\267 @rm To display the value, use @bf Print ()@rm  (for simple values)\\n\
    and @bf Display ()@rm  (for complex values and dynamic displays).",
"Ddd*display_selected.helpString: \
@rm You have selected some data display.\\n\
\\n\
@tt \\267 @rm To examine further members of this data structure,\\n\
     use @bf New Display ()@rm  and @bf Display *()@rm .\\n\
@tt \\267 @rm To modify the appearance of the selected display,\\n\
     use @bf Hide ()@rm  and @bf Rotate ()@rm .\\n\
@tt \\267 @rm To view numerical data as a plot, use @bf Plot ()@rm .\\n\
@tt \\267 @rm To change the value of the selected display, use @bf Set ()@rm .\\n\
@tt \\267 @rm To delete the selected displays, use @bf Delete ()@rm .\\n\
@tt \\267 @rm Use @bf Data@symbol \\256@bf Edit Displays@rm  for further editing.",
"Ddd*command_entered.helpString: \
@rm You have entered some command at the @GDB@ prompt.\\n\
\\n\
@tt \\267 @rm To execute the current command, press @key RETURN @symbol \\277@rm .\\n\
@tt \\267 @rm To complete the current word, use @key TAB@rm .\\n\
@tt \\267 @rm To move through the command history, use @key Up@rm  and @key Down@rm .\\n\
@tt \\267 @rm To clear the current line, use @key Ctrl+U@rm .\\n\
@tt \\267 @rm For further options, see the @bf Commands@rm  menu.",
"Ddd*code_but_no_source.helpString: \
@rm Your program @PROGRAM_STATE@,\\n\
and there is no source code for the current execution position.\\n\
\\n\
Here are some hints that may help you out:\\n\
@tt \\267 @rm Use @bf Status@symbol \\256@bf Up@rm  to step out of libraries \
and to enter your own functions.\\n\
@tt \\267 @rm Use @bf File@symbol \\256@bf Open Source@rm  to select a source file.\\n\
@tt \\267 @rm If this does not work, your program may lack debugging information.\\n\
    Without debugging information, @GDB@ will be unable to locate the source\\n\
    code.  To request debugging information, specify the `@tt -g@rm\' option\\n\
    when you run the compiler.\\n\
@tt \\267 @rm You may need to tell @GDB@ where the source code files are.\\n\
    Invoke @bf Edit@symbol \\256@bf @GDB@ Settings@rm  and look for appropriate entries.\\n\
    Using GDB, you can also create a local `@tt .gdbinit@rm\' file that contains\\n\
    `@tt directory @sl path@rm @rm\', where @sl path@rm  is the source path.\\n\
@tt \\267 @rm Using GDB, you can continue at machine code level \
by enabling the\\n\
    Machine Code Window.  Use @bf Source@symbol \\256@bf Display Machine Code@rm .",
"Ddd*stopped_at_passed_signal.helpString: \
@rm Your program @PROGRAM_STATE@.\\n\
\\n\
@tt \\267 @rm To find out how you got here, use @bf Status@symbol \\256@bf Backtrace@rm .\\n\
@tt \\267 @rm To examine a variable value, select it first (click on an \
occurrence).\\n\
    Then use @bf Print ()@rm  (simple values) or @bf Display ()@rm  \
(complex values).\\n\
    Press @bs mouse button 3@rm  on the variable name for a shortcut.\\n\
@tt \\267 @rm You can display all local variables at once using\\n\
    @bf Data@symbol \\256@bf Display Local Variables@rm .\\n\
@tt \\267 @rm To set and clear further breakpoints, use \
@bf Source@symbol \\256@bf Edit Breakpoints@rm .\\n\
    Press @bs mouse button 3@rm  on a location or breakpoint to get a shortcut.\\n\
\\n\
When resuming execution, the @SIGNAL_DESCRIPTION@ signal\\n\
will be passed to the program.\\n\
@tt \\267 @rm To continue execution without giving a @SIGNAL@ signal,\\n\
    use @bf Commands@symbol \\256@bf Continue Without Signal@rm .\\n\
@tt \\267 @rm To see or change the current signal handling, use @bf Status@symbol \\256@bf Signals@rm .",
"Ddd*stopped_at_ignored_signal.helpString: \
@rm Your program @PROGRAM_STATE@.\\n\
\\n\
@tt \\267 @rm To find out how you got here, use @bf Status@symbol \\256@bf Backtrace@rm .\\n\
@tt \\267 @rm To examine a variable value, select it first (click on an \
occurrence).\\n\
    Then use @bf Print ()@rm  (simple values) or @bf Display ()@rm  \
(complex values).\\n\
    Press @bs mouse button 3@rm  on the variable name for a shortcut.\\n\
@tt \\267 @rm You can display all local variables at once using\\n\
    @bf Data@symbol \\256@bf Display Local Variables@rm .\\n\
@tt \\267 @rm To set and clear further breakpoints, use \
@bf Source@symbol \\256@bf Edit Breakpoints@rm .\\n\
    Press @bs mouse button 3@rm  on a location or breakpoint to get a shortcut.\\n\
\\n\
When resuming execution, the @SIGNAL_DESCRIPTION@ signal \
will @sl not@rm  be passed to the program.\\n\
@tt \\267 @rm To pass this signal to the program, \
use the @GDB@ command `@tt signal @SIGNAL@@rm\'.\\n\
@tt \\267 @rm To see or change the current signal handling, use @bf Status@symbol \\256@bf Signals@rm .",
"Ddd*stopped.helpString: \
@rm Your program @PROGRAM_STATE@.\\n\
\\n\
@tt \\267 @rm To find out how you got here, use @bf Status@symbol \\256@bf Backtrace@rm .\\n\
@tt \\267 @rm To examine a variable value, select it first (click on an \
occurrence).\\n\
    Then use @bf Print ()@rm  (simple values) or @bf Display ()@rm  \
(complex values).\\n\
    Press @bs mouse button 3@rm  on the variable name for a shortcut.\\n\
@tt \\267 @rm You can display all local variables at once using\\n\
    @bf Data@symbol \\256@bf Display Local Variables@rm .\\n\
@tt \\267 @rm To set and clear further breakpoints, use \
@bf Source@symbol \\256@bf Edit Breakpoints@rm .\\n\
    Press @bs mouse button 3@rm  on a location or breakpoint to get a shortcut.\\n\
@tt \\267 @rm Use the functions of the @bf Program@rm  menu to resume execution\\n\
    and step through your program.",
"Ddd*showing_earlier_state.helpString: \
@rm DDD is showing an earlier state of your program.\\n\
\\n\
This happens when you undo a command affecting the program state.\\n\
DDD cannot restore the earlier program state.  Instead, DDD goes into\\n\
@sl historic mode@rm  showing you all it remembers about this state.\\n\
\\n\
Most normal DDD commands that would query further information\\n\
are disabled in historic mode.  However, you can examine\\n\
the current execution position, or the active displays.\\n\
\\n\
@tt \\267 @rm To revert to the current program state, use @bf Edit@symbol \\256@bf Redo@rm .\\n\
@tt \\267 @rm To view even earlier states of your program, use @bf Edit@symbol \\256@bf Undo@rm .",
"Ddd*tip_dialog.dialogTitle: DDD Tip of the Day",
"Ddd*tip_dialog*helpString: \
@rm This is the DDD tip of the day.",
"Ddd*set_startup_tips.labelString: \
@small Show Tip of the Day when starting DDD",
"Ddd*set_startup_tips.alignment: XmALIGNMENT_BEGINNING",
"Ddd*tip_dialog.applyLabelString: Turn Off",
"Ddd*tip_dialog.cancelLabelString: Prev Tip",
"Ddd*tip_dialog.helpLabelString: Next Tip",
"Ddd*tip_dialog.symbolPixmap: ddd",
"Ddd*tip0: \
@rm If you have any more DDD tips of the day,\\n\
please send them to the DDD developers @tt<ddd@ gnu.org>@rm .",
"Ddd*tip1: \
@rm Welcome to DDD!\\n\
You can get help on all items by pointing at them and pressing F1.\\n\
And don\'t worry, you can undo most mistakes...",
"Ddd*tip2: \
@rm Whenever you\'re stuck, try @bf Help@symbol \\256@bf What Now@rm .  This will analyze the\\n\
current DDD state and give you some hints on what to do next.",
"Ddd*tip3: \
@rm Buttons with a small triangle in the upper right corner are special:\\n\
pressing and holding @bs mouse button 1@rm  on them will pop up a menu\\n\
with additional options.",
"Ddd*tip4: \
@rm You can interrupt @GDB@ and the current program by clicking on\\n\
@bf Program@symbol \\256@bf Interrupt@rm  or pressing @key Esc@rm .",
"Ddd*tip5: \
@rm If you made a mistake, try @bf Edit@symbol \\256@bf Undo@rm .  This will undo the most\\n\
recent debugger command and redisplay the previous program state.",
"Ddd*tip6: \
@rm There are three ways to show the value of a variable:\\n\
@tt \\267 @rm You can view its value, simply by pointing at it;\\n\
@tt \\267 @rm You can print its value in the debugger console, using @bf Print ()@rm ;\\n\
@tt \\267 @rm You can display it graphically, using @bf Display ()@rm .",
"Ddd*tip7: \
@rm A quick way to manipulate variables, breakpoints, and displays\\n\
is to press @bs mouse button 3@rm  on them.",
"Ddd*tip8: \
@rm Double-clicking on any value in the data display\\n\
will toggle more details.",
"Ddd*tip9: \
@rm If your program needs special terminal capabilities such as readline\\n\
or curses, let it run in the separate execution window\\n\
(@bf Program@symbol \\256@bf Run in Execution Window@rm ).",
"Ddd*tip10: \
@rm You can save space in the data window by\\n\
@tt \\267 @rm hiding details (@bf Show/Hide@rm ),\\n\
@tt \\267 @rm rotating structs (@bf Rotate@rm ), and\\n\
@tt \\267 @rm clustering variables (@bf Undisp@symbol \\256@bf Cluster@rm ).",
"Ddd*tip11: \
@rm If you want to customize the DDD fonts, see\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Fonts@rm .",
"Ddd*tip12: \
@rm To change the text background color, write into `@tt ~/.ddd/init@rm\':\\n\
@tt Ddd*XmText.background: @rm  @sl color@rm\\n\
@tt Ddd*XmTextField.background: @rm  @sl color@rm\\n\
@tt Ddd*XmList.background: @rm  @sl color@rm ",
"Ddd*tip13: \
@rm When using GDB, all text fields have command and argument completion\\n\
with @key Tab@rm , just like the shell.  In a file selection box, type part of\\n\
a filename, hit @key Tab@rm , and voila!  It\'s completed.",
"Ddd*tip14: \
@rm You can always recenter the command tool\\n\
by selecting @bf View@symbol \\256@bf Command Tool@rm ,\\n\
or by pressing @key Alt+8@rm .",
"Ddd*tip15: \
@rm To scroll the data display, most users find a @sl panner@rm\\n\
much more convenient than two scrollbars.\\n\
Check out @bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Startup@symbol \\256@bf Data Scrolling@rm .",
"Ddd*tip16: \
@rm To limit the number of array elements in a data display, set\\n\
@bf Edit@symbol \\256@bf GDB Settings@symbol \\256@bf Limit on array elements to print@rm .",
"Ddd*tip17: \
@rm If DDD cannot find a source, set the @GDB@ source path via\\n\
@bf Edit@symbol \\256@bf @GDB@ Settings@rm  or enter\\n\
`@tt dir sourcedir_1:sourcedir_2:...:sourcedir_n@rm\' at the GDB prompt.",
"Ddd*tip18: \
@rm You can quickly set breakpoints\\n\
by double-clicking in the breakpoint area.",
"Ddd*tip19: \
@rm To see the @sl actual@rm  type of a C++ object in GDB, set\\n\
@bf Edit@symbol \\256@bf GDB Settings@symbol \\256@bf Set printing of object\'s derived type@rm .",
"Ddd*tip20: \
@rm To display @sl data@rm  in hexadecimal format, display it and choose\\n\
@bf Convert to Hex@rm  from the @bf Display ()@rm  menu,\\n\
or enter `@tt graph display /x @sl data@rm @rm\' at the GDB prompt.",
"Ddd*tip21: \
@rm To send a signal to your program,\\n\
use @bf Status@symbol \\256@bf Signals@symbol \\256@bf Send@rm .",
"Ddd*tip22: \
@rm To quickly display variable values,\\n\
double-click on the variable name.",
"Ddd*tip23: \
@rm After looking up an item or stepping through the program, you can use\\n\
@bf Edit@symbol \\256@bf Undo@rm  and @bf Edit@symbol \\256@bf Redo@rm  to return to earlier locations.",
"Ddd*tip24: \
@rm You can repeat the last command by hitting @key RETURN @symbol \\277@rm .\\n\
Use @key Ctrl+B@rm  and @key Ctrl+F@rm  to search the command history.",
"Ddd*tip25: \
@rm You can move breakpoints by dragging them.\\n\
Just press and hold @bs mouse button 1@rm  on a breakpoint,\\n\
move it to the new position and release @bs mouse button 1@rm  again.",
"Ddd*tip26: \
@rm To make your program ignore signals, use @bf Status@symbol \\256@bf Signals@rm  and\\n\
unset the @bf Pass@rm  button for the appropriate signal.",
"Ddd*tip27: \
@rm You can save space by disabling toolbar captions.\\n\
See @bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Startup@symbol \\256@bf Toolbar Appearance@rm .",
"Ddd*tip28: \
@rm To quickly edit breakpoint properties,\\n\
double-click on a breakpoint symbol.",
"Ddd*tip29: \
@rm To have GDB start your program automatically upon startup,\\n\
put the following lines in your `@tt .gdbinit@rm\' file:\\n\
@tt break main@rm       - or some other initial function\\n\
@tt run       @rm       - possibly giving arguments here",
"Ddd*tip30: \
@rm To get rid of these tips of the day, unset\\n\
@bf Edit@symbol \\256@bf Preferences@symbol \\256@bf Startup@symbol \\256@bf Show Tip of the Day@rm .",
"Ddd*tip31: \
@rm To redirect stderr from the execution window to the debugger console,\\n\
add `@tt 2>/dev/tty@rm\' to the arguments of your program.",
"Ddd*tip32: \
@rm To display the first @sl n@rm  elements of a variable-length array @sl ptr@rm ,\\n\
enter `@tt graph display @sl ptr@rm \\1330\\135@ @sl n@rm @rm\' at the GDB prompt.",
"Ddd*tip33: \
@rm To undisplay a specific record member once and for all, select it in a\\n\
display and click on @bf Undisp@rm .  Confirming with @bf Apply to All@rm\\n\
suppresses the member in other displays, too.",
"Ddd*tip34: \
@rm To display data in a smaller font, try @bf Data@symbol \\256@bf Themes@symbol \\256@bf Small Values@rm .\\n\
The pattern describes the expressions you want to see in smaller font:\\n\
`@tt *@rm\' matches all expressions.",
"Ddd*tip35: \
@rm You can have each of DDD, @GDB@ and the debugged program run on\\n\
different machines.  See the DDD `@tt --rhost@rm\' option for details.",
"Ddd*tip36: \
@rm You can copy breakpoints by dragging them while pressing @key Shift@rm .\\n\
Just press and hold @key Shift@rm +@bs mouse button 1@rm  on a breakpoint,\\n\
move it to the new position and release @bs mouse button 1@rm  again.",
"Ddd*tip37: \
@rm To save and restore data displays, cut, copy and paste them via\\n\
the @bf Edit@rm  menu.  Together with @tt xclipboard@rm , you can manage\\n\
arbitrary collections of data displays.",
"Ddd*tip38: \
@rm Do you want to stop this debugging session and resume later?\\n\
Use @bf File@symbol \\256@bf Save Session@rm !",
"Ddd*tip39: \
@rm You can interact with DDD even while the debuggee is executing:\\n\
DDD automatically interrupts program execution for a moment.\\n\
This works whenever program execution is initiated by @bf Run@rm  or @bf Cont@rm .",
"Ddd*tip40: \
@rm To debug a child process, put a call to `@tt sleep@rm\' in the child right\\n\
after the `@tt fork@rm\' call.  Run the program and attach to the child process\\n\
using @bf File@symbol \\256@bf Attach to Process@rm .",
"Ddd*tip41: \
@rm If your program prints a lot of text on standard error, try\\n\
redirecting standard error to a file (via `@tt 2> @sl FILE@rm @rm\'), or add\\n\
to `@tt ~/.ddd/init@rm\': @tt Ddd*lineBufferedConsole: off@rm .",
"Ddd*tip42: \
@rm If the inferior debugger does not support stderr redirection, try\\n\
invoking DDD using `@tt --debugger \'@sl NAME@rm  2> @sl FILE@rm \'@rm\'.",
"Ddd*tip43: \
@rm Using GDB, you can define your own canned sequences of commands.\\n\
Try @bf Commands@symbol \\256@bf Define Command@rm .",
"Ddd*tip44: \
@rm To use GDB with Solaris CC, compile with `@tt -xs@rm\'.\\n\
GDB wants debugging info in the executable.",
"Ddd*tip45: \
@rm To use GDB with G77, compile with `@tt -fdebug-kludge@rm\'.  This gives\\n\
rudimentary information on COMMON and EQUIVALENCE variables in GDB.\\n\
See the G77 documentation for details.",
"Ddd*tip46: \
@rm Double-clicking on a function call will lead you to the definition of\\n\
the function.  Use @bf Edit@symbol \\256@bf Undo@rm  to return to the function call.",
"Ddd*tip47: \
@rm Disabled breakpoints can be used as bookmarks.\\n\
Use @bf Source@symbol \\256@bf Edit Breakpoints@rm  to list all breakpoints;\\n\
then, click on @bf Lookup@rm  to jump to a breakpoint location.",
"Ddd*tip48: \
@rm You can assign user-defined buttons to frequently used commands.\\n\
Try @bf Commands@symbol \\256@bf Edit Buttons@rm .",
"Ddd*tip49: \
@rm In the Breakpoint and Display Editors,\\n\
you can toggle the selection with @key Ctrl@rm +@bs mouse button 1@rm .\\n\
This allows you to select non-contiguous ranges of items.",
"Ddd*tip50: \
@rm To change the properties of multiple breakpoints at once,\\n\
select them in the breakpoint editor (@bf Source@symbol \\256@bf Edit Breakpoints@rm )\\n\
and click on @bf Properties@rm .",
"Ddd*tip51: \
@rm Even while in the source window,\\n\
you can enter and edit GDB commands:\\n\
Just type the command and press @key RETURN @symbol \\277@rm .",
"Ddd*tip52: \
@rm You can record commands to be executed when a breakpoint is hit.\\n\
In the @bf Breakpoint Properties@rm  panel, try @bf Record@rm  and @bf End@rm .",
"Ddd*tip53: \
@rm You can easily resume a saved DDD @sl session@rm\\n\
by invoking DDD as `@tt ddd =@sl session@rm @rm\'.",
"Ddd*tip54: \
@rm If the DDD source window keeps on scrolling until the end of source is\\n\
reached, try changing the `@tt glyphUpdateDelay@rm\' resource.  See the\\n\
DDD manual for details.",
"Ddd*tip55: \
@rm To customize display appearance, you can write your own themes.\\n\
For details, see the  manual \"Writing DDD Themes\".",
"Ddd*tip56: \
@rm For further DDD customization (e.g. colors), see the `@tt Ddd@rm\'\\n\
app-defaults file from the DDD WWW Site or the DDD source\\n\
distribution.  Copy resources to `@tt ~/.ddd/init@rm\' and edit as desired.",
"Ddd*tip57: \
@rm In GCC, `@tt -Wall@rm\' does not enable all warnings.  See the GCC\\n\
documentation for other warnings you might consider useful.\\n\
\\n        - @sl J.H.M. Dassen@rm  @tt<jdassen@ wi.leidenuniv.nl>@rm ",
"Ddd*tip58: \
@rm To get a global idea of what a process or program does or is doing,\\n\
use a system call tracer, like `@tt strace@rm\', `@tt truss@rm\', or `@tt trace@rm\'.\\n\
\\n        - @sl J.H.M. Dassen@rm  @tt<jdassen@ wi.leidenuniv.nl>@rm ",
"Ddd*tip59: \
@rm If you suspect memory corruption caused by problematic pointers,\\n\
try linking with Electric Fence `@tt efence@rm\' or the `@tt dbmalloc@rm\' library.\\n\
See the DDD WWW page for links.\\n\
\\n        - @sl J.H.M. Dassen@rm  @tt<jdassen@ wi.leidenuniv.nl>@rm ",
"Ddd*tip60: \
@rm Prevention is better than cure.  Document your assumptions using\\n\
@tt <assert.h>@rm  or GNU NANA.  See the DDD WWW page for links.\\n\
\\n        - @sl J.H.M. Dassen@rm  @tt<jdassen@ wi.leidenuniv.nl>@rm ",
"Ddd*tip61: \
@rm The debugger isn\'t a substitute for good thinking.  But, in some\\n\
cases, thinking isn\'t a substitute for a good debugger either.  The\\n\
most effective combination is good thinking and a good debugger.\\n\
\\n        - @sl Steve McConnell@rm , Code Complete",
"Ddd*tip62: \
@rm When you\'re totally stuck, try to find a helpful ear.  In my experience,\\n\
nothing helps you more in debugging than to try to explain your problem\\n\
(what your code should do, and what it actually does) to someone else.\\n\
\\n        - @sl J.H.M. Dassen@rm  @tt<jdassen@ wi.leidenuniv.nl>@rm ",
