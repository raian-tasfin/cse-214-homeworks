SHELL = fish
BASE_NAMES = $(shell for x in (seq 1 3); echo task-$$x/main.pdf; end)
LATEX = latexmk

$(BASE_NAMES): task-%/main.pdf: task-%/main.tex
	$(LATEX) -cd $<

clean:
	for x in (seq 1 3); cd task-$$x && latexmk -c && cd ..; end
