CC = gcc
CLIBS = -lm
LATEX = latexmk
PREMAKES = join-configs.mk

EXECUTABLES = code/gen-sinx code/add-noise

include $(PREMAKES)

main.pdf: main.tex data/sinx.dat data/noise-sinx.dat
	echo $(DEFINES)
	$(LATEX) $<

data/sinx.dat: code/gen-sinx $(CONFIG_FILES)
	$< > $@

data/noise-sinx.dat: code/add-noise data/sinx.dat
	$< < $(word 2,$^) > $@

$(EXECUTABLES): %: %.c default.config
	$(CC) $(CDEFINE) $< $(CLIBS) -o $@


clean:
	latexmk -c
