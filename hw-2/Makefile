#  commands
LATEX = latexmk -pdf

# files and directoriesaa
SUBFILES := $(shell ls ./subfiles/*.tex)
GRAPHICS := $(shell ls ./graphics/*)
DATA     := $(shell ls ./data/*/*.csv)

FILES = $(SUBFILES) $(GRAPHICS) $(DATA)

main.pdf: main.tex $(FILES)
	echo $(FILES)
	$(LATEX) $<

clean:
	latexmk -c
