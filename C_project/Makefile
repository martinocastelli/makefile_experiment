CC = gcc
CFLAGS = -Wall -O3 -g
LDFLAGS = -Wall -O3

EXEC = main.out

BUILD_DIR := ./build
SRC_DIR := ./src
SEARCH_DEPTH := 10

SRCS := $(shell find $(SRC_DIR) -maxdepth $(SEARCH_DEPTH) -name "*.c") # find source
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o) # gen object
DEPS := $(OBJS:.o=.d) # map autogen dependencies

CFLAGS += -MMD -MP

# linker
$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@ 

# compile objects
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(BUILD_DIR)/$(shell dirname $<)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

.PHONY: clean
clean:
	$(RM) -r $(BUILD_DIR) $(EXEC)

.PHONY: clean_build
clean_build: clean $(EXEC)

.PHONY: all
all: clean_build

.PHONY: build_clean
build_clean: $(EXEC)
	$(RM) -r $(BUILD_DIR)

.PHONY: run
run: $(EXEC)
	./$(EXEC) 

