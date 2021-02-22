# vector-plus-plus
Tasks and misc data

TODOs:
- Tasks
  - !!! Test data
  - !!! Solutions
  - PDF generation from docx (pandoc probably)
  - in future, move to markdown template, to get rid from docx
  - make generators for tasks if this is needed 
- Compilation
  - Separete process with timeout
  - enable most useful warnings and flags (to check): -std=c++11 -Wall -Wextra -pedantic -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector
  - enable warnings as errors
- Execution
  - Separate process with timeout
  - Memory monitoring
- CI\CD 
  - preparing PDF with test data by script 
  - Forwarding tasks to cms.vector-plus-plus.ru
