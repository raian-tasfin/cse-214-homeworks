#  commands
LATEX = latexmk -pdf
RM = -rm -f

# files and directoriesaa
SUBFILES := $(shell ls ./subfiles/*.tex)
GRAPHICS := $(shell ls ./graphics/*)
DATA     := $(shell ls ./data/*.csv)

main.pdf: main.tex $(SUBFILES) $(GRAPHICS) $(DATA)
	echo $(FILES)
	$(LATEX) $<

./data/dog-data.csv: ./data/dogs/dogs-synth.py ./data/dogs/Economist_dogs.csv
	$(RM) $@
	$^ $@

clean:
	latexmk -c
