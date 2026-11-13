# LaTeX Documentation

## 1. Introduction

LaTeX is a document preparation system used to create professional-quality technical and academic documents. It is particularly useful for documents containing mathematical equations, tables, figures, references, and structured content.

Unlike traditional word processors, LaTeX uses markup commands to define the structure and formatting of a document.

## 2. Basic Document Structure

Every LaTeX document follows a standard structure consisting of two main parts:

### 2.1 Preamble

The preamble is everything written before `\begin{document}`.

It contains:
- Document class declaration.
- Packages required for additional functionality.
- Formatting configurations.

Example:

```latex
\documentclass[12pt,a4paper]{article}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{amsmath}
```

### 2.2 Document Body

The document body starts with `\begin{document}` and ends with `\end{document}`.

It contains the actual content that appears in the generated document.

### 2.3 Complete Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{amsmath}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}

LaTeX is used to create professional documents.

\section{Features}

LaTeX supports equations, tables and images.

\end{document}
```

### 2.4 Explanation of Important Commands

| Command | Description |
|---|---|
| `\documentclass{}` | Defines the document type |
| `\usepackage{}` | Includes additional packages |
| `\title{}` | Defines the document title |
| `\author{}` | Specifies the author |
| `\date{}` | Specifies the date |
| `\begin{document}` | Starts the document body |
| `\maketitle` | Generates the title |
| `\end{document}` | Ends the document |

**Note:** LaTeX commands generally begin with a backslash (`\`). Curly braces `{}` are used to provide arguments to commands.

## 3. Document Classes

A document class defines the overall structure and formatting of a LaTeX document. It is specified using the `\documentclass{}` command in the preamble.

### Syntax

```latex
\documentclass[options]{class}
```

- `class`: Specifies the type of document.
- `options`: Specifies additional formatting options, such as font size and paper size.

### Common Document Classes

| Class | Purpose |
|---|---|
| `article` | Articles, assignments, short reports and research papers. |
| `report` | Longer reports, projects and dissertations. |
| `book` | Books and lengthy documents divided into chapters. |
| `beamer` | Creating presentations and slides. |
| `letter` | Writing formal letters. |
| `exam` | Preparing question papers and examinations. |

### Example: Article Class

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}

\section{Introduction}
This is an article document.

\subsection{Overview}
This is a subsection.

\end{document}
```


## 4. Title Page and Abstract

A title page contains basic information about a document, such as its title, author and date.

### Important Commands

| Command | Purpose |
|---|---|
| `\title{}` | Specifies the document title. |
| `\author{}` | Specifies the author's name. |
| `\date{}` | Specifies the date. |
| `\maketitle` | Generates the title section using the information provided. |
| `\today` | Automatically inserts the current date. |

### Example: Creating a Title

```latex
\documentclass{article}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is my document.

\end{document}
```

### Abstract

An abstract is a short summary of the main purpose and content of a document.

LaTeX provides the `abstract` environment to create one.

**Syntax:**

```latex
\begin{abstract}
Write a brief summary of your document here.
\end{abstract}
```

### Complete Example

```latex
\documentclass{article}

\title{Introduction to LaTeX}
\author{Your Name}
\date{\today}

\begin{document}

\maketitle

\begin{abstract}
This document introduces the basics of LaTeX
and its applications in document preparation.
\end{abstract}

\section{Introduction}
LaTeX is a document preparation system.

\end{document}
```

**Remember:**
- Define title, author and date in the preamble.
- Use `\maketitle` inside the document body.
- The abstract environment is generally placed after the title and before the main sections.

## 5. Text Formatting and Styling

LaTeX provides commands to change the appearance of text, including bold, italic, underline, font size and alignment.

### Basic Text Formatting

| Command | Output / Purpose |
|---|---|
| `\textbf{Text}` | **Bold text** |
| `\textit{Text}` | *Italic text* |
| `\underline{Text}` | Underlined text |
| `\texttt{Text}` | Monospaced text |
| `\emph{Text}` | Emphasized text |

### Example

```latex
\documentclass{article}

\begin{document}

This is normal text.

\textbf{This is bold text.}

\textit{This is italic text.}

\underline{This is underlined text.}

\texttt{This is monospaced text.}

\emph{This is emphasized text.}

\end{document}
```

### Font Sizes

LaTeX provides predefined commands to change font size.

| Command | Size |
|---|---|
| `\tiny` | Very small |
| `\scriptsize` | Script size |
| `\footnotesize` | Footnote size |
| `\small` | Small |
| `\normalsize` | Normal |
| `\large` | Large |
| `\Large` | Larger |
| `\LARGE` | Very large |
| `\huge` | Huge |
| `\Huge` | Largest |

Example:

```latex
{\Large This text is large.}

{\small This text is small.}
```

Curly braces restrict the font-size change to the text inside them.

### Text Alignment

| Environment | Purpose |
|---|---|
| `center` | Centers the text. |
| `flushleft` | Aligns text to the left. |
| `flushright` | Aligns text to the right. |

Example:

```latex
\begin{center}
This text is centered.
\end{center}

\begin{flushleft}
This text is left aligned.
\end{flushleft}

\begin{flushright}
This text is right aligned.
\end{flushright}
```

### Useful Styling Packages

| Package | Purpose |
|---|---|
| `sectsty` | Customizes section heading fonts. |
| `fontspec` | Provides access to system fonts (typically with XeLaTeX or LuaLaTeX). |
| `xcolor` | Adds text and page colours. |

Example of changing text colour:

```latex
\usepackage{xcolor}

\textcolor{red}{This text is red.}
```

**Remember:** Packages must be loaded in the preamble, before `\begin{document}`.

## 6. Text and Page Layout

LaTeX provides commands to control paragraphs, line breaks, page breaks and text positioning.

### Line Breaks and Paragraphs

| Command | Purpose |
|---|---|
| `\\` | Starts a new line. |
| `\newline` | Starts a new line. |
| `\par` | Ends the current paragraph. |
| Blank line | Creates a new paragraph. |

Example:

```latex
This is the first line.\\
This is the second line.

This is a new paragraph.

This is another paragraph.
```

### Page Breaks

| Command | Purpose |
|---|---|
| `\newpage` | Starts a new page. |
| `\pagebreak` | Suggests a page break. |
| `\clearpage` | Starts a new page after processing pending floating figures and tables. |

Example:

```latex
This is the first page.

\newpage

This is the second page.
```

## 7. Lists and Environments

LaTeX provides environments for organizing content.

- `itemize` – Bulleted lists.
- `enumerate` – Numbered lists.
- `description` – Description lists.

The `enumitem` package can customize list appearance, indentation, and labels.

## 8. Mathematical Expressions

LaTeX provides mathematical notation through math mode.

- Inline mathematics: `\( ... \)`
- Display mathematics: `\[ ... \]`

Common mathematical commands:

| Command | Purpose |
|---|---|
| `\frac{a}{b}` | Fractions |
| `\sqrt{x}` | Square root |
| `\sum` | Summation |
| `\prod` | Product |
| `\int` | Integral |
| `\alpha`, `\beta` | Greek letters |
| `\leq`, `\neq` | Mathematical relations |

## 9. Arrays and Matrices

LaTeX supports arrays and different matrix formats.

Common matrix environments:

- `pmatrix` – Parentheses.
- `bmatrix` – Square brackets.
- `Bmatrix` – Curly braces.
- `vmatrix` – Single vertical bars.
- `Vmatrix` – Double vertical bars.

## 10. Tables

Tables are created using the `tabular` environment.

Important commands:

- `&` – Separates columns.
- `\\` – Ends a row.
- `\hline` – Adds a horizontal line.
- `\multicolumn{}` – Combines columns.
- `\multirow{}` – Combines rows.

The `table` environment can be used for captions, labels, and positioning.

## 11. Figures and Pictures

The `graphicx` package allows images to be inserted into LaTeX documents.

Important commands:

- `\includegraphics{}` – Inserts an image.
- `\caption{}` – Adds a figure caption.
- `\label{}` – Creates a reference label.
- `\ref{}` – References a figure or table.
- `\scalebox{}` – Resizes an image.

The `figure` environment supports positioning and captions. LaTeX also provides a `picture` environment for creating basic diagrams using commands such as `\put`, `\framebox`, and `\vector`.

## 12. Colours in LaTeX

The `xcolor` package provides colour support.

Important commands:

- `\textcolor{red}{Text}` – Changes text colour.
- `\color{blue}` – Changes the current text colour.
- `\definecolor{}` – Defines custom colours.
- `\colorbox{}` – Adds a coloured background.
- `\fcolorbox{}` – Adds a coloured border and background.
- `\pagecolor{}` – Changes the page background.

## 13. References and Learning Resources

The documentation is based primarily on the course materials provided for Technical Writing.

- Introduction to LaTeX (Cntd..)
- Introduction to LaTeX (Mathematical Notations, Equations, Array, Matrices, List)
- Exploring Table Styles in LaTeX
- Introduction to LaTeX (Colours, Figures and Picture Environment)
- FigureHelp1 – Creating Figures and Graphs with LaTeX

