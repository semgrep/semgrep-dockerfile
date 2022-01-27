#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_NONE = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_variable = 8,
  anon_sym_SLASHtcp = 9,
  anon_sym_SLASHudp = 10,
  anon_sym_AT = 11,
  anon_sym_DASH_DASH = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_BSLASH_LF = 16,
  anon_sym_POUND = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_BSLASH = 19,
  sym_escape_sequence = 20,
  sym_non_newline_whitespace = 21,
  sym_comment = 22,
  sym_semgrep_metavariable = 23,
  sym_semgrep_ellipsis = 24,
  sym_imm_tok_pat_24a1611 = 25,
  sym_imm_tok_pat_3d340f6 = 26,
  sym_imm_tok_pat_589b0f8 = 27,
  sym_imm_tok_pat_bcfc287 = 28,
  sym_imm_tok_pat_d2727a0 = 29,
  sym_imm_tok_pat_f43f746 = 30,
  sym_imm_tok_pat_f6e1de8 = 31,
  sym_pat_030af88 = 32,
  sym_pat_0c7fc22 = 33,
  sym_pat_1167a92 = 34,
  sym_pat_18946a5 = 35,
  sym_pat_1c663f5 = 36,
  sym_pat_217c202 = 37,
  sym_pat_239fcac = 38,
  sym_pat_2b37705 = 39,
  sym_pat_4128122 = 40,
  sym_pat_433746d = 41,
  sym_pat_441cd81 = 42,
  sym_pat_4a2f38a = 43,
  sym_pat_4b81dfc = 44,
  sym_pat_4de4cb9 = 45,
  sym_pat_4fd4a56 = 46,
  sym_pat_56bd329 = 47,
  sym_pat_5cf3c2c = 48,
  sym_pat_5eaae97 = 49,
  sym_pat_660c06c = 50,
  sym_pat_79b8891 = 51,
  sym_pat_808c5a1 = 52,
  sym_pat_8165e5f = 53,
  sym_pat_8713919 = 54,
  sym_pat_9374c10 = 55,
  sym_pat_9818882 = 56,
  sym_pat_985c208 = 57,
  sym_pat_9a14b5c = 58,
  sym_pat_9c0a769 = 59,
  sym_pat_a368b76 = 60,
  sym_pat_a6040bb = 61,
  sym_pat_aa82a08 = 62,
  sym_pat_ed84199 = 63,
  sym_pat_f05eb95 = 64,
  sym_pat_f2a2f8f = 65,
  sym_pat_fd0037e = 66,
  sym_source_file = 67,
  sym_instruction = 68,
  sym_from_instruction = 69,
  sym_run_instruction = 70,
  sym_cmd_instruction = 71,
  sym_label_instruction = 72,
  sym_expose_instruction = 73,
  sym_env_instruction = 74,
  sym_add_instruction = 75,
  sym_copy_instruction = 76,
  sym_entrypoint_instruction = 77,
  sym_volume_instruction = 78,
  sym_user_instruction = 79,
  sym_user_name_or_group = 80,
  sym_workdir_instruction = 81,
  sym_arg_instruction = 82,
  sym_onbuild_instruction = 83,
  sym_stopsignal_instruction = 84,
  sym_stopsignal_value = 85,
  sym_healthcheck_instruction = 86,
  sym_shell_instruction = 87,
  sym_maintainer_instruction = 88,
  sym_cross_build_instruction = 89,
  sym_path = 90,
  sym_expansion = 91,
  sym_env_pair = 92,
  sym_spaced_env_pair = 93,
  sym_env_key = 94,
  sym_expose_port = 95,
  sym_label_pair = 96,
  sym_image_spec = 97,
  sym_image_name = 98,
  sym_image_tag = 99,
  sym_image_digest = 100,
  sym_param = 101,
  sym_image_alias = 102,
  sym_string_array = 103,
  sym_shell_command = 104,
  sym_shell_fragment = 105,
  sym_line_continuation = 106,
  sym_required_line_continuation = 107,
  sym_comment_line = 108,
  sym_anon_comment = 109,
  sym_double_quoted_string = 110,
  sym_unquoted_string = 111,
  sym_array_element = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_label_instruction_repeat1 = 114,
  aux_sym_expose_instruction_repeat1 = 115,
  aux_sym_env_instruction_repeat1 = 116,
  aux_sym_add_instruction_repeat1 = 117,
  aux_sym_volume_instruction_repeat1 = 118,
  aux_sym_user_name_or_group_repeat1 = 119,
  aux_sym_stopsignal_value_repeat1 = 120,
  aux_sym_healthcheck_instruction_repeat1 = 121,
  aux_sym_path_repeat1 = 122,
  aux_sym_image_name_repeat1 = 123,
  aux_sym_image_tag_repeat1 = 124,
  aux_sym_image_digest_repeat1 = 125,
  aux_sym_image_alias_repeat1 = 126,
  aux_sym_string_array_repeat1 = 127,
  aux_sym_shell_command_repeat1 = 128,
  aux_sym_shell_command_repeat2 = 129,
  aux_sym_shell_fragment_repeat1 = 130,
  aux_sym_double_quoted_string_repeat1 = 131,
  aux_sym_unquoted_string_repeat1 = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_NONE] = "NONE",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [sym_pat_030af88] = "pat_030af88",
  [sym_pat_0c7fc22] = "pat_0c7fc22",
  [sym_pat_1167a92] = "pat_1167a92",
  [sym_pat_18946a5] = "pat_18946a5",
  [sym_pat_1c663f5] = "pat_1c663f5",
  [sym_pat_217c202] = "pat_217c202",
  [sym_pat_239fcac] = "pat_239fcac",
  [sym_pat_2b37705] = "pat_2b37705",
  [sym_pat_4128122] = "pat_4128122",
  [sym_pat_433746d] = "pat_433746d",
  [sym_pat_441cd81] = "pat_441cd81",
  [sym_pat_4a2f38a] = "pat_4a2f38a",
  [sym_pat_4b81dfc] = "pat_4b81dfc",
  [sym_pat_4de4cb9] = "pat_4de4cb9",
  [sym_pat_4fd4a56] = "pat_4fd4a56",
  [sym_pat_56bd329] = "pat_56bd329",
  [sym_pat_5cf3c2c] = "pat_5cf3c2c",
  [sym_pat_5eaae97] = "pat_5eaae97",
  [sym_pat_660c06c] = "pat_660c06c",
  [sym_pat_79b8891] = "pat_79b8891",
  [sym_pat_808c5a1] = "pat_808c5a1",
  [sym_pat_8165e5f] = "pat_8165e5f",
  [sym_pat_8713919] = "pat_8713919",
  [sym_pat_9374c10] = "pat_9374c10",
  [sym_pat_9818882] = "pat_9818882",
  [sym_pat_985c208] = "pat_985c208",
  [sym_pat_9a14b5c] = "pat_9a14b5c",
  [sym_pat_9c0a769] = "pat_9c0a769",
  [sym_pat_a368b76] = "pat_a368b76",
  [sym_pat_a6040bb] = "pat_a6040bb",
  [sym_pat_aa82a08] = "pat_aa82a08",
  [sym_pat_ed84199] = "pat_ed84199",
  [sym_pat_f05eb95] = "pat_f05eb95",
  [sym_pat_f2a2f8f] = "pat_f2a2f8f",
  [sym_pat_fd0037e] = "pat_fd0037e",
  [sym_source_file] = "source_file",
  [sym_instruction] = "instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_user_name_or_group] = "user_name_or_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_stopsignal_value] = "stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym_spaced_env_pair] = "spaced_env_pair",
  [sym_env_key] = "env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_imm_tok_pat_24a1611] = sym_imm_tok_pat_24a1611,
  [sym_imm_tok_pat_3d340f6] = sym_imm_tok_pat_3d340f6,
  [sym_imm_tok_pat_589b0f8] = sym_imm_tok_pat_589b0f8,
  [sym_imm_tok_pat_bcfc287] = sym_imm_tok_pat_bcfc287,
  [sym_imm_tok_pat_d2727a0] = sym_imm_tok_pat_d2727a0,
  [sym_imm_tok_pat_f43f746] = sym_imm_tok_pat_f43f746,
  [sym_imm_tok_pat_f6e1de8] = sym_imm_tok_pat_f6e1de8,
  [sym_pat_030af88] = sym_pat_030af88,
  [sym_pat_0c7fc22] = sym_pat_0c7fc22,
  [sym_pat_1167a92] = sym_pat_1167a92,
  [sym_pat_18946a5] = sym_pat_18946a5,
  [sym_pat_1c663f5] = sym_pat_1c663f5,
  [sym_pat_217c202] = sym_pat_217c202,
  [sym_pat_239fcac] = sym_pat_239fcac,
  [sym_pat_2b37705] = sym_pat_2b37705,
  [sym_pat_4128122] = sym_pat_4128122,
  [sym_pat_433746d] = sym_pat_433746d,
  [sym_pat_441cd81] = sym_pat_441cd81,
  [sym_pat_4a2f38a] = sym_pat_4a2f38a,
  [sym_pat_4b81dfc] = sym_pat_4b81dfc,
  [sym_pat_4de4cb9] = sym_pat_4de4cb9,
  [sym_pat_4fd4a56] = sym_pat_4fd4a56,
  [sym_pat_56bd329] = sym_pat_56bd329,
  [sym_pat_5cf3c2c] = sym_pat_5cf3c2c,
  [sym_pat_5eaae97] = sym_pat_5eaae97,
  [sym_pat_660c06c] = sym_pat_660c06c,
  [sym_pat_79b8891] = sym_pat_79b8891,
  [sym_pat_808c5a1] = sym_pat_808c5a1,
  [sym_pat_8165e5f] = sym_pat_8165e5f,
  [sym_pat_8713919] = sym_pat_8713919,
  [sym_pat_9374c10] = sym_pat_9374c10,
  [sym_pat_9818882] = sym_pat_9818882,
  [sym_pat_985c208] = sym_pat_985c208,
  [sym_pat_9a14b5c] = sym_pat_9a14b5c,
  [sym_pat_9c0a769] = sym_pat_9c0a769,
  [sym_pat_a368b76] = sym_pat_a368b76,
  [sym_pat_a6040bb] = sym_pat_a6040bb,
  [sym_pat_aa82a08] = sym_pat_aa82a08,
  [sym_pat_ed84199] = sym_pat_ed84199,
  [sym_pat_f05eb95] = sym_pat_f05eb95,
  [sym_pat_f2a2f8f] = sym_pat_f2a2f8f,
  [sym_pat_fd0037e] = sym_pat_fd0037e,
  [sym_source_file] = sym_source_file,
  [sym_instruction] = sym_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_user_name_or_group] = sym_user_name_or_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_stopsignal_value] = sym_stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym_spaced_env_pair] = sym_spaced_env_pair,
  [sym_env_key] = sym_env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_non_newline_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_030af88] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_18946a5] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_1c663f5] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_239fcac] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_433746d] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4b81dfc] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_56bd329] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5cf3c2c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_5eaae97] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_660c06c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_79b8891] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_808c5a1] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9374c10] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9818882] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_985c208] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_9c0a769] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a368b76] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_a6040bb] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_aa82a08] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_ed84199] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f05eb95] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_f2a2f8f] = {
    .visible = true,
    .named = true,
  },
  [sym_pat_fd0037e] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_anon_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_user, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_key, 0},
    {field_value, 2},
  [11] =
    {field_as, 3},
  [12] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [15] =
    {field_default, 3},
    {field_name, 1},
  [17] =
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(203);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(203);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(234);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(245);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(249);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(249);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_imm_tok_pat_3d340f6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_imm_tok_pat_589b0f8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_imm_tok_pat_bcfc287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_imm_tok_pat_d2727a0);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-') ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(173);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_imm_tok_pat_f43f746);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_imm_tok_pat_f6e1de8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_pat_030af88);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_pat_0c7fc22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_pat_1167a92);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_pat_1167a92);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_pat_18946a5);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_pat_8713919);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_pat_9374c10);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_pat_9818882);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_pat_985c208);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_pat_9a14b5c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pat_9c0a769);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_pat_a368b76);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_pat_a6040bb);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_pat_aa82a08);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_pat_ed84199);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_pat_f05eb95);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_pat_f2a2f8f);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_pat_fd0037e);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 161},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 161},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 161},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 161},
  [80] = {.lex_state = 42},
  [81] = {.lex_state = 42},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 161},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 38},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 161},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 42},
  [130] = {.lex_state = 161},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 161},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 161},
  [149] = {.lex_state = 27},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 27},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 50},
  [160] = {.lex_state = 50},
  [161] = {.lex_state = 27},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 27},
  [164] = {.lex_state = 161},
  [165] = {.lex_state = 50},
  [166] = {.lex_state = 161},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 50},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 34},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 50},
  [173] = {.lex_state = 50},
  [174] = {.lex_state = 50},
  [175] = {.lex_state = 50},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 50},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 161},
  [180] = {.lex_state = 23},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 161},
  [183] = {.lex_state = 32},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 23},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 46},
  [189] = {.lex_state = 161},
  [190] = {.lex_state = 50},
  [191] = {.lex_state = 23},
  [192] = {.lex_state = 161},
  [193] = {.lex_state = 161},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 161},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 53},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 161},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 237},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 161},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 237},
  [221] = {.lex_state = 161},
  [222] = {.lex_state = 237},
  [223] = {.lex_state = 54},
  [224] = {.lex_state = 161},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 161},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 54},
  [229] = {.lex_state = 161},
  [230] = {.lex_state = 161},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 161},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 161},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 161},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 161},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 161},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 161},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 161},
  [245] = {.lex_state = 54},
  [246] = {.lex_state = 161},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 161},
  [249] = {.lex_state = 53},
  [250] = {.lex_state = 161},
  [251] = {.lex_state = 53},
  [252] = {.lex_state = 161},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 53},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 53},
  [261] = {.lex_state = 53},
  [262] = {.lex_state = 53},
  [263] = {.lex_state = 52},
  [264] = {.lex_state = 52},
  [265] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_semgrep_metavariable] = ACTIONS(1),
    [sym_imm_tok_pat_f43f746] = ACTIONS(1),
    [sym_pat_1167a92] = ACTIONS(1),
    [sym_pat_8165e5f] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(217),
    [sym_instruction] = STATE(227),
    [sym_from_instruction] = STATE(225),
    [sym_run_instruction] = STATE(225),
    [sym_cmd_instruction] = STATE(225),
    [sym_label_instruction] = STATE(225),
    [sym_expose_instruction] = STATE(225),
    [sym_env_instruction] = STATE(225),
    [sym_add_instruction] = STATE(225),
    [sym_copy_instruction] = STATE(225),
    [sym_entrypoint_instruction] = STATE(225),
    [sym_volume_instruction] = STATE(225),
    [sym_user_instruction] = STATE(225),
    [sym_workdir_instruction] = STATE(225),
    [sym_arg_instruction] = STATE(225),
    [sym_onbuild_instruction] = STATE(225),
    [sym_stopsignal_instruction] = STATE(225),
    [sym_healthcheck_instruction] = STATE(225),
    [sym_shell_instruction] = STATE(225),
    [sym_maintainer_instruction] = STATE(225),
    [sym_cross_build_instruction] = STATE(225),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_semgrep_metavariable] = ACTIONS(9),
    [sym_semgrep_ellipsis] = ACTIONS(9),
    [sym_pat_030af88] = ACTIONS(11),
    [sym_pat_1c663f5] = ACTIONS(13),
    [sym_pat_239fcac] = ACTIONS(15),
    [sym_pat_433746d] = ACTIONS(17),
    [sym_pat_4a2f38a] = ACTIONS(19),
    [sym_pat_56bd329] = ACTIONS(21),
    [sym_pat_5cf3c2c] = ACTIONS(23),
    [sym_pat_5eaae97] = ACTIONS(25),
    [sym_pat_808c5a1] = ACTIONS(27),
    [sym_pat_9374c10] = ACTIONS(29),
    [sym_pat_9818882] = ACTIONS(31),
    [sym_pat_985c208] = ACTIONS(33),
    [sym_pat_9c0a769] = ACTIONS(35),
    [sym_pat_a368b76] = ACTIONS(37),
    [sym_pat_a6040bb] = ACTIONS(39),
    [sym_pat_aa82a08] = ACTIONS(41),
    [sym_pat_ed84199] = ACTIONS(43),
    [sym_pat_f2a2f8f] = ACTIONS(45),
    [sym_pat_fd0037e] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_continuation,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(225), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [101] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_pat_030af88,
    ACTIONS(62), 1,
      sym_pat_1c663f5,
    ACTIONS(65), 1,
      sym_pat_239fcac,
    ACTIONS(68), 1,
      sym_pat_433746d,
    ACTIONS(71), 1,
      sym_pat_4a2f38a,
    ACTIONS(74), 1,
      sym_pat_56bd329,
    ACTIONS(77), 1,
      sym_pat_5cf3c2c,
    ACTIONS(80), 1,
      sym_pat_5eaae97,
    ACTIONS(83), 1,
      sym_pat_808c5a1,
    ACTIONS(86), 1,
      sym_pat_9374c10,
    ACTIONS(89), 1,
      sym_pat_9818882,
    ACTIONS(92), 1,
      sym_pat_985c208,
    ACTIONS(95), 1,
      sym_pat_9c0a769,
    ACTIONS(98), 1,
      sym_pat_a368b76,
    ACTIONS(101), 1,
      sym_pat_a6040bb,
    ACTIONS(104), 1,
      sym_pat_aa82a08,
    ACTIONS(107), 1,
      sym_pat_ed84199,
    ACTIONS(110), 1,
      sym_pat_f2a2f8f,
    ACTIONS(113), 1,
      sym_pat_fd0037e,
    STATE(227), 1,
      sym_instruction,
    ACTIONS(56), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(225), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [200] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      sym_pat_030af88,
    ACTIONS(13), 1,
      sym_pat_1c663f5,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(17), 1,
      sym_pat_433746d,
    ACTIONS(19), 1,
      sym_pat_4a2f38a,
    ACTIONS(21), 1,
      sym_pat_56bd329,
    ACTIONS(23), 1,
      sym_pat_5cf3c2c,
    ACTIONS(25), 1,
      sym_pat_5eaae97,
    ACTIONS(27), 1,
      sym_pat_808c5a1,
    ACTIONS(29), 1,
      sym_pat_9374c10,
    ACTIONS(31), 1,
      sym_pat_9818882,
    ACTIONS(33), 1,
      sym_pat_985c208,
    ACTIONS(35), 1,
      sym_pat_9c0a769,
    ACTIONS(37), 1,
      sym_pat_a368b76,
    ACTIONS(39), 1,
      sym_pat_a6040bb,
    ACTIONS(41), 1,
      sym_pat_aa82a08,
    ACTIONS(43), 1,
      sym_pat_ed84199,
    ACTIONS(45), 1,
      sym_pat_f2a2f8f,
    ACTIONS(47), 1,
      sym_pat_fd0037e,
    STATE(4), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(225), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [292] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(51), 23,
      ts_builtin_sym_end,
      sym_comment,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_030af88,
      sym_pat_1c663f5,
      sym_pat_239fcac,
      sym_pat_433746d,
      sym_pat_4a2f38a,
      sym_pat_56bd329,
      sym_pat_5cf3c2c,
      sym_pat_5eaae97,
      sym_pat_808c5a1,
      sym_pat_9374c10,
      sym_pat_9818882,
      sym_pat_985c208,
      sym_pat_9c0a769,
      sym_pat_a368b76,
      sym_pat_a6040bb,
      sym_pat_aa82a08,
      sym_pat_ed84199,
      sym_pat_f2a2f8f,
      sym_pat_fd0037e,
  [324] = 11,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym_imm_tok_pat_24a1611,
    STATE(6), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(34), 1,
      sym_expansion,
    ACTIONS(126), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
    STATE(139), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [360] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(145), 1,
      sym_shell_fragment,
    STATE(209), 1,
      sym_anon_comment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(195), 2,
      sym_string_array,
      sym_shell_command,
  [396] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(145), 1,
      sym_shell_fragment,
    STATE(209), 1,
      sym_anon_comment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(210), 2,
      sym_string_array,
      sym_shell_command,
  [432] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(145), 1,
      sym_shell_fragment,
    STATE(209), 1,
      sym_anon_comment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(202), 2,
      sym_string_array,
      sym_shell_command,
  [468] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      sym_imm_tok_pat_24a1611,
    STATE(27), 1,
      sym_expansion,
    STATE(10), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(144), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [496] = 9,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      anon_sym_BSLASH,
    ACTIONS(157), 1,
      sym_imm_tok_pat_24a1611,
    STATE(10), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(11), 1,
      sym_line_continuation,
    STATE(27), 1,
      sym_expansion,
    ACTIONS(155), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [526] = 9,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(124), 1,
      anon_sym_BSLASH,
    ACTIONS(128), 1,
      sym_imm_tok_pat_24a1611,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_line_continuation,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(34), 1,
      sym_expansion,
    ACTIONS(155), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [555] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_BSLASH,
    ACTIONS(165), 1,
      sym_imm_tok_pat_24a1611,
    STATE(34), 1,
      sym_expansion,
    ACTIONS(144), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [582] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(172), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(233), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [609] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(209), 1,
      sym_anon_comment,
    STATE(219), 1,
      sym_shell_fragment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [638] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      sym_pat_2b37705,
    ACTIONS(180), 1,
      sym_pat_79b8891,
    STATE(16), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_image_name_repeat1,
    STATE(61), 1,
      sym_expansion,
    ACTIONS(174), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [665] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(182), 1,
      anon_sym_DOLLAR,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(17), 1,
      sym_line_continuation,
    STATE(27), 1,
      sym_expansion,
    ACTIONS(153), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(128), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [692] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      sym_pat_2b37705,
    ACTIONS(188), 1,
      sym_pat_79b8891,
    STATE(18), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_image_name_repeat1,
    STATE(61), 1,
      sym_expansion,
    ACTIONS(186), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [719] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(150), 1,
      sym_shell_fragment,
    STATE(209), 1,
      sym_anon_comment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [748] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(172), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(218), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [775] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_shell_command_repeat1,
    STATE(114), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_comment_line,
    STATE(209), 1,
      sym_anon_comment,
    STATE(239), 1,
      sym_shell_fragment,
    ACTIONS(134), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [804] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      sym_pat_2b37705,
    ACTIONS(198), 1,
      sym_pat_79b8891,
    STATE(61), 1,
      sym_expansion,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [829] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      sym_semgrep_ellipsis,
    ACTIONS(208), 1,
      sym_pat_217c202,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(121), 2,
      sym_expansion,
      sym_expose_port,
  [853] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(219), 1,
      sym_pat_79b8891,
    STATE(90), 1,
      sym_expansion,
    ACTIONS(211), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [877] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH,
    ACTIONS(225), 1,
      sym_pat_1167a92,
    STATE(25), 1,
      sym_line_continuation,
    STATE(68), 1,
      sym_param,
    STATE(69), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
  [905] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      anon_sym_DASH_DASH,
    ACTIONS(231), 1,
      sym_pat_8165e5f,
    STATE(16), 1,
      sym_expansion,
    STATE(26), 1,
      sym_line_continuation,
    STATE(59), 1,
      sym_image_name,
    STATE(84), 1,
      sym_param,
    STATE(191), 1,
      sym_image_spec,
  [933] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(27), 1,
      sym_line_continuation,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(235), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [951] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH,
    ACTIONS(225), 1,
      sym_pat_1167a92,
    STATE(28), 1,
      sym_line_continuation,
    STATE(74), 1,
      sym_param,
    STATE(75), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
  [979] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH,
    STATE(29), 1,
      sym_line_continuation,
    STATE(79), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(193), 1,
      sym_param,
    STATE(198), 1,
      sym_cmd_instruction,
    ACTIONS(237), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [1005] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(243), 1,
      anon_sym_DOLLAR,
    ACTIONS(245), 1,
      sym_semgrep_ellipsis,
    ACTIONS(247), 1,
      sym_pat_217c202,
    STATE(23), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(121), 2,
      sym_expansion,
      sym_expose_port,
  [1031] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(251), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1049] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(257), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(259), 1,
      sym_pat_79b8891,
    STATE(24), 1,
      aux_sym_image_tag_repeat1,
    STATE(32), 1,
      sym_line_continuation,
    STATE(90), 1,
      sym_expansion,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1075] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(263), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [1093] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(235), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [1110] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(269), 1,
      sym_semgrep_ellipsis,
    STATE(35), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_label_instruction_repeat1,
    STATE(125), 1,
      sym_label_pair,
    ACTIONS(267), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
  [1133] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(276), 1,
      sym_semgrep_ellipsis,
    STATE(125), 1,
      sym_label_pair,
    ACTIONS(273), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
    STATE(36), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [1154] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment_line,
    STATE(209), 1,
      sym_anon_comment,
    ACTIONS(282), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1175] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(292), 1,
      sym_pat_79b8891,
    STATE(113), 1,
      sym_expansion,
    STATE(38), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1198] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 1,
      sym_semgrep_ellipsis,
    ACTIONS(298), 1,
      sym_pat_18946a5,
    STATE(39), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_env_instruction_repeat1,
    STATE(153), 1,
      sym_env_pair,
    STATE(199), 1,
      sym_env_key,
  [1223] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_array_element,
    STATE(189), 1,
      sym_double_quoted_string,
    ACTIONS(304), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1246] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      sym_pat_0c7fc22,
    STATE(41), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(306), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1269] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(310), 1,
      sym_pat_0c7fc22,
    STATE(42), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_path_repeat1,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(312), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1292] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym_escape_sequence,
    ACTIONS(322), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(99), 1,
      sym_expansion,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1315] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(44), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(99), 1,
      sym_expansion,
  [1340] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(99), 1,
      sym_expansion,
  [1365] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(341), 1,
      sym_pat_79b8891,
    STATE(38), 1,
      aux_sym_image_digest_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym_expansion,
  [1390] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_line_continuation,
    STATE(57), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(99), 1,
      sym_expansion,
  [1415] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(48), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(251), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [1432] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1449] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym_expansion,
  [1474] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      sym_pat_660c06c,
    STATE(51), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(119), 1,
      sym_expansion,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1497] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(263), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_18946a5,
  [1514] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      sym_semgrep_ellipsis,
    ACTIONS(355), 1,
      sym_pat_18946a5,
    STATE(39), 1,
      aux_sym_env_instruction_repeat1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(153), 1,
      sym_env_pair,
    STATE(188), 1,
      sym_env_key,
    STATE(215), 1,
      sym_spaced_env_pair,
  [1539] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      sym_pat_0c7fc22,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(357), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1560] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(368), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1581] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      sym_semgrep_ellipsis,
    ACTIONS(376), 1,
      sym_pat_18946a5,
    STATE(153), 1,
      sym_env_pair,
    STATE(199), 1,
      sym_env_key,
    STATE(56), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1604] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym_expansion,
  [1629] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(58), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym_path,
    STATE(212), 1,
      sym_string_array,
  [1654] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      sym_pat_79b8891,
    STATE(59), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym_image_tag,
    STATE(185), 1,
      sym_image_digest,
  [1679] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(172), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1702] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(61), 1,
      sym_line_continuation,
    ACTIONS(395), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(397), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1719] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    ACTIONS(401), 1,
      sym_semgrep_ellipsis,
    ACTIONS(403), 1,
      sym_pat_217c202,
    STATE(30), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(62), 1,
      sym_line_continuation,
    STATE(121), 2,
      sym_expansion,
      sym_expose_port,
  [1742] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(410), 1,
      sym_pat_660c06c,
    STATE(119), 1,
      sym_expansion,
    ACTIONS(405), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(63), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1763] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(415), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [1782] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(65), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym_expansion,
  [1807] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1824] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      sym_pat_660c06c,
    STATE(51), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(119), 1,
      sym_expansion,
    STATE(247), 1,
      sym_user_name_or_group,
  [1846] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      sym_pat_1167a92,
    STATE(68), 1,
      sym_line_continuation,
    STATE(70), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
  [1868] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(69), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_add_instruction_repeat1,
    STATE(162), 1,
      sym_path,
  [1890] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(70), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_add_instruction_repeat1,
    STATE(171), 1,
      sym_path,
  [1912] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    ACTIONS(423), 1,
      sym_pat_660c06c,
    STATE(51), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(119), 1,
      sym_expansion,
    STATE(194), 1,
      sym_user_name_or_group,
  [1934] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_DOLLAR,
    ACTIONS(428), 1,
      sym_pat_1167a92,
    STATE(95), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
    STATE(72), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [1954] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    ACTIONS(436), 1,
      sym_pat_0c7fc22,
    STATE(141), 1,
      sym_expansion,
    STATE(73), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1974] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      sym_pat_1167a92,
    STATE(74), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_add_instruction_repeat1,
    STATE(95), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
  [1996] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(72), 1,
      aux_sym_add_instruction_repeat1,
    STATE(75), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym_path,
  [2018] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(267), 1,
      sym_pat_4128122,
    ACTIONS(269), 1,
      sym_semgrep_ellipsis,
    ACTIONS(439), 1,
      sym_semgrep_metavariable,
    STATE(35), 1,
      aux_sym_label_instruction_repeat1,
    STATE(76), 1,
      sym_line_continuation,
    STATE(125), 1,
      sym_label_pair,
  [2040] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [2056] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2072] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(239), 1,
      anon_sym_DASH_DASH,
    STATE(79), 1,
      sym_line_continuation,
    STATE(123), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(193), 1,
      sym_param,
    STATE(237), 1,
      sym_cmd_instruction,
  [2094] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      sym_non_newline_whitespace,
    ACTIONS(445), 1,
      sym_pat_0c7fc22,
    STATE(80), 1,
      sym_line_continuation,
    STATE(81), 1,
      aux_sym_path_repeat1,
    STATE(154), 1,
      sym_expansion,
  [2116] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      sym_non_newline_whitespace,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    ACTIONS(450), 1,
      sym_pat_0c7fc22,
    STATE(154), 1,
      sym_expansion,
    STATE(81), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2136] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(72), 1,
      aux_sym_add_instruction_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(161), 1,
      sym_path,
  [2158] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      sym_pat_0c7fc22,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(83), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_expansion,
  [2180] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_DOLLAR,
    ACTIONS(231), 1,
      sym_pat_8165e5f,
    STATE(16), 1,
      sym_expansion,
    STATE(59), 1,
      sym_image_name,
    STATE(84), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym_image_spec,
  [2202] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_line_continuation,
    STATE(166), 1,
      sym_array_element,
    STATE(189), 1,
      sym_double_quoted_string,
    ACTIONS(304), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2222] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      sym_pat_9a14b5c,
    STATE(86), 1,
      sym_line_continuation,
    STATE(88), 1,
      aux_sym_image_alias_repeat1,
    STATE(138), 1,
      sym_expansion,
    STATE(235), 1,
      sym_image_alias,
  [2244] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 1,
      sym_pat_441cd81,
    STATE(87), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(137), 1,
      sym_expansion,
  [2266] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      sym_pat_9a14b5c,
    STATE(88), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_image_alias_repeat1,
    STATE(138), 1,
      sym_expansion,
  [2288] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      sym_pat_0c7fc22,
    ACTIONS(471), 1,
      anon_sym_LF,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_expansion,
  [2310] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(473), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(475), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2326] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2342] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      sym_pat_9a14b5c,
    STATE(88), 1,
      aux_sym_image_alias_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(138), 1,
      sym_expansion,
    STATE(231), 1,
      sym_image_alias,
  [2364] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(482), 1,
      sym_pat_9a14b5c,
    STATE(138), 1,
      sym_expansion,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2384] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      sym_pat_441cd81,
    STATE(87), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    STATE(137), 1,
      sym_expansion,
    STATE(206), 1,
      sym_stopsignal_value,
  [2406] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      sym_pat_0c7fc22,
    ACTIONS(471), 1,
      sym_non_newline_whitespace,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(95), 1,
      sym_line_continuation,
    STATE(154), 1,
      sym_expansion,
  [2428] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 1,
      sym_pat_441cd81,
    STATE(137), 1,
      sym_expansion,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [2448] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [2464] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(495), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2477] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(499), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(497), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2492] = 4,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(100), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2507] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(251), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2522] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      anon_sym_DOLLAR,
    ACTIONS(510), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(102), 1,
      sym_line_continuation,
    STATE(197), 1,
      sym_path,
  [2541] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(257), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_image_tag_repeat1,
    STATE(90), 1,
      sym_expansion,
    STATE(103), 1,
      sym_line_continuation,
  [2560] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(233), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2575] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2590] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2605] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2620] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(251), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2633] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2648] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(514), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      aux_sym_image_digest_repeat1,
    STATE(110), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym_expansion,
  [2667] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(516), 1,
      anon_sym_LF,
    ACTIONS(518), 1,
      sym_pat_79b8891,
    STATE(111), 1,
      sym_line_continuation,
    STATE(180), 1,
      sym_image_digest,
  [2686] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(263), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2699] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(520), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(522), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2714] = 5,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(528), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2731] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(532), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2746] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(536), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2761] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(263), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2776] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(540), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2791] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(542), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(544), 2,
      anon_sym_DOLLAR,
      sym_pat_660c06c,
  [2806] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(548), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2821] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(552), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2836] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(415), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2851] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(554), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      sym_pat_239fcac,
    STATE(193), 1,
      sym_param,
    STATE(123), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2868] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(263), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2883] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(561), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2898] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(251), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2913] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    ACTIONS(383), 1,
      sym_pat_1167a92,
    STATE(41), 1,
      sym_expansion,
    STATE(127), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym_path,
  [2932] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(563), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(565), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2947] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      sym_non_newline_whitespace,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2961] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_string_array_repeat1,
  [2977] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(263), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2991] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      sym_non_newline_whitespace,
    STATE(132), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3005] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3019] = 4,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      anon_sym_BSLASH_LF,
    STATE(15), 1,
      sym_required_line_continuation,
    STATE(134), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3033] = 5,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      anon_sym_BSLASH_LF,
    STATE(15), 1,
      sym_required_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
    STATE(135), 1,
      sym_line_continuation,
  [3049] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      sym_non_newline_whitespace,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(263), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3063] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(585), 1,
      anon_sym_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(587), 2,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
  [3077] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(591), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3091] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(595), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3105] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(540), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3119] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(495), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3133] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_string_array_repeat1,
    STATE(142), 1,
      sym_line_continuation,
  [3149] = 5,
    ACTIONS(583), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_required_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
    STATE(143), 1,
      sym_line_continuation,
  [3165] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(603), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3177] = 5,
    ACTIONS(583), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_required_line_continuation,
    STATE(143), 1,
      aux_sym_shell_command_repeat2,
    STATE(145), 1,
      sym_line_continuation,
  [3193] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(607), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3205] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(546), 1,
      anon_sym_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(548), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3219] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(148), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3233] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      sym_non_newline_whitespace,
    STATE(132), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(149), 1,
      sym_line_continuation,
  [3249] = 5,
    ACTIONS(583), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_required_line_continuation,
    STATE(135), 1,
      aux_sym_shell_command_repeat2,
    STATE(150), 1,
      sym_line_continuation,
  [3265] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      sym_non_newline_whitespace,
    ACTIONS(618), 1,
      anon_sym_LF,
    STATE(149), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(151), 1,
      sym_line_continuation,
  [3281] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(263), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3295] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(622), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3309] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      sym_non_newline_whitespace,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(495), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3323] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3337] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(624), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3349] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(628), 2,
      sym_semgrep_ellipsis,
      sym_pat_18946a5,
  [3363] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_line_continuation,
  [3376] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      sym_variable,
    STATE(159), 1,
      sym_line_continuation,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      sym_variable,
    STATE(160), 1,
      sym_line_continuation,
  [3402] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      sym_non_newline_whitespace,
    STATE(161), 1,
      sym_line_continuation,
  [3415] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      sym_non_newline_whitespace,
    ACTIONS(646), 1,
      anon_sym_LF,
    STATE(162), 1,
      sym_line_continuation,
  [3428] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      sym_non_newline_whitespace,
    ACTIONS(648), 1,
      anon_sym_LF,
    STATE(163), 1,
      sym_line_continuation,
  [3441] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3452] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3465] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3476] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      sym_variable,
    STATE(167), 1,
      sym_line_continuation,
  [3489] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      sym_variable,
    STATE(168), 1,
      sym_line_continuation,
  [3502] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      sym_variable,
    STATE(169), 1,
      sym_line_continuation,
  [3515] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_DOLLAR,
    ACTIONS(668), 1,
      sym_pat_8165e5f,
    STATE(170), 1,
      sym_line_continuation,
  [3528] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      sym_non_newline_whitespace,
    ACTIONS(670), 1,
      anon_sym_LF,
    STATE(171), 1,
      sym_line_continuation,
  [3541] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
    ACTIONS(674), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
  [3554] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
    ACTIONS(678), 1,
      sym_variable,
    STATE(173), 1,
      sym_line_continuation,
  [3567] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LBRACE,
    ACTIONS(682), 1,
      sym_variable,
    STATE(174), 1,
      sym_line_continuation,
  [3580] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(686), 1,
      sym_variable,
    STATE(175), 1,
      sym_line_continuation,
  [3593] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(571), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [3604] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      sym_variable,
    STATE(177), 1,
      sym_line_continuation,
  [3617] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      sym_variable,
    STATE(178), 1,
      sym_line_continuation,
  [3630] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3641] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(698), 1,
      sym_pat_79b8891,
    STATE(180), 1,
      sym_line_continuation,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_DOLLAR,
    ACTIONS(702), 1,
      sym_pat_1167a92,
    STATE(181), 1,
      sym_line_continuation,
  [3667] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(182), 1,
      sym_line_continuation,
    STATE(201), 1,
      sym_string_array,
  [3680] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(704), 2,
      sym_semgrep_metavariable,
      sym_pat_4de4cb9,
  [3691] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      sym_pat_79b8891,
    STATE(184), 1,
      sym_line_continuation,
  [3704] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      sym_pat_79b8891,
    STATE(185), 1,
      sym_line_continuation,
  [3717] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(714), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [3728] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_DOLLAR,
    ACTIONS(668), 1,
      sym_pat_1167a92,
    STATE(187), 1,
      sym_line_continuation,
  [3741] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_EQ,
    ACTIONS(718), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(188), 1,
      sym_line_continuation,
  [3754] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(720), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3765] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
    ACTIONS(724), 1,
      sym_variable,
    STATE(190), 1,
      sym_line_continuation,
  [3778] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 1,
      sym_pat_79b8891,
    STATE(191), 1,
      sym_line_continuation,
  [3791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(666), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3802] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(730), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3813] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_line_continuation,
  [3826] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3836] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3846] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
  [3856] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3866] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_line_continuation,
  [3876] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      sym_non_newline_whitespace,
    STATE(200), 1,
      sym_line_continuation,
  [3886] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
  [3896] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3906] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      sym_pat_8713919,
    STATE(203), 1,
      sym_line_continuation,
  [3916] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      sym_imm_tok_pat_f43f746,
    STATE(204), 1,
      sym_line_continuation,
  [3926] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3936] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_line_continuation,
  [3946] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
  [3956] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_EQ,
    STATE(208), 1,
      sym_line_continuation,
  [3966] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_line_continuation,
  [3976] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
  [3986] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      sym_pat_4fd4a56,
    STATE(211), 1,
      sym_line_continuation,
  [3996] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [4006] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_line_continuation,
  [4016] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_line_continuation,
  [4026] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_line_continuation,
  [4036] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_EQ,
    STATE(216), 1,
      sym_line_continuation,
  [4046] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_line_continuation,
  [4056] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_line_continuation,
  [4066] = 3,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(780), 1,
      anon_sym_BSLASH_LF,
    STATE(219), 1,
      sym_line_continuation,
  [4076] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      sym_pat_4fd4a56,
    STATE(220), 1,
      sym_line_continuation,
  [4086] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_line_continuation,
  [4096] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      sym_pat_4fd4a56,
    STATE(222), 1,
      sym_line_continuation,
  [4106] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(223), 1,
      sym_line_continuation,
  [4116] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_line_continuation,
  [4126] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [4136] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [4146] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [4156] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(228), 1,
      sym_line_continuation,
  [4166] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_EQ,
    STATE(229), 1,
      sym_line_continuation,
  [4176] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [4186] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LF,
    STATE(231), 1,
      sym_line_continuation,
  [4196] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [4206] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4216] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [4226] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4236] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_line_continuation,
  [4246] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
  [4256] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_line_continuation,
  [4266] = 3,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 1,
      anon_sym_BSLASH_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4276] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_line_continuation,
  [4286] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4296] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_line_continuation,
  [4306] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(243), 1,
      sym_line_continuation,
  [4316] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_line_continuation,
  [4326] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(245), 1,
      sym_line_continuation,
  [4336] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_line_continuation,
  [4346] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4356] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      sym_line_continuation,
  [4366] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      sym_pat_8713919,
    STATE(249), 1,
      sym_line_continuation,
  [4376] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_line_continuation,
  [4386] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym_pat_8713919,
    STATE(251), 1,
      sym_line_continuation,
  [4396] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_EQ,
    STATE(252), 1,
      sym_line_continuation,
  [4406] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(848), 1,
      sym_pat_8713919,
    STATE(253), 1,
      sym_line_continuation,
  [4416] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      sym_pat_8713919,
    STATE(254), 1,
      sym_line_continuation,
  [4426] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_pat_8713919,
    STATE(255), 1,
      sym_line_continuation,
  [4436] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      sym_pat_8713919,
    STATE(256), 1,
      sym_line_continuation,
  [4446] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      sym_pat_8713919,
    STATE(257), 1,
      sym_line_continuation,
  [4456] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      sym_pat_8713919,
    STATE(258), 1,
      sym_line_continuation,
  [4466] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      sym_pat_8713919,
    STATE(259), 1,
      sym_line_continuation,
  [4476] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      sym_pat_8713919,
    STATE(260), 1,
      sym_line_continuation,
  [4486] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      sym_pat_8713919,
    STATE(261), 1,
      sym_line_continuation,
  [4496] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(866), 1,
      sym_pat_8713919,
    STATE(262), 1,
      sym_line_continuation,
  [4506] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      sym_imm_tok_pat_f43f746,
    STATE(263), 1,
      sym_line_continuation,
  [4516] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(870), 1,
      sym_imm_tok_pat_f43f746,
    STATE(264), 1,
      sym_line_continuation,
  [4526] = 1,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 432,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 496,
  [SMALL_STATE(12)] = 526,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 582,
  [SMALL_STATE(15)] = 609,
  [SMALL_STATE(16)] = 638,
  [SMALL_STATE(17)] = 665,
  [SMALL_STATE(18)] = 692,
  [SMALL_STATE(19)] = 719,
  [SMALL_STATE(20)] = 748,
  [SMALL_STATE(21)] = 775,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 829,
  [SMALL_STATE(24)] = 853,
  [SMALL_STATE(25)] = 877,
  [SMALL_STATE(26)] = 905,
  [SMALL_STATE(27)] = 933,
  [SMALL_STATE(28)] = 951,
  [SMALL_STATE(29)] = 979,
  [SMALL_STATE(30)] = 1005,
  [SMALL_STATE(31)] = 1031,
  [SMALL_STATE(32)] = 1049,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1093,
  [SMALL_STATE(35)] = 1110,
  [SMALL_STATE(36)] = 1133,
  [SMALL_STATE(37)] = 1154,
  [SMALL_STATE(38)] = 1175,
  [SMALL_STATE(39)] = 1198,
  [SMALL_STATE(40)] = 1223,
  [SMALL_STATE(41)] = 1246,
  [SMALL_STATE(42)] = 1269,
  [SMALL_STATE(43)] = 1292,
  [SMALL_STATE(44)] = 1315,
  [SMALL_STATE(45)] = 1340,
  [SMALL_STATE(46)] = 1365,
  [SMALL_STATE(47)] = 1390,
  [SMALL_STATE(48)] = 1415,
  [SMALL_STATE(49)] = 1432,
  [SMALL_STATE(50)] = 1449,
  [SMALL_STATE(51)] = 1474,
  [SMALL_STATE(52)] = 1497,
  [SMALL_STATE(53)] = 1514,
  [SMALL_STATE(54)] = 1539,
  [SMALL_STATE(55)] = 1560,
  [SMALL_STATE(56)] = 1581,
  [SMALL_STATE(57)] = 1604,
  [SMALL_STATE(58)] = 1629,
  [SMALL_STATE(59)] = 1654,
  [SMALL_STATE(60)] = 1679,
  [SMALL_STATE(61)] = 1702,
  [SMALL_STATE(62)] = 1719,
  [SMALL_STATE(63)] = 1742,
  [SMALL_STATE(64)] = 1763,
  [SMALL_STATE(65)] = 1782,
  [SMALL_STATE(66)] = 1807,
  [SMALL_STATE(67)] = 1824,
  [SMALL_STATE(68)] = 1846,
  [SMALL_STATE(69)] = 1868,
  [SMALL_STATE(70)] = 1890,
  [SMALL_STATE(71)] = 1912,
  [SMALL_STATE(72)] = 1934,
  [SMALL_STATE(73)] = 1954,
  [SMALL_STATE(74)] = 1974,
  [SMALL_STATE(75)] = 1996,
  [SMALL_STATE(76)] = 2018,
  [SMALL_STATE(77)] = 2040,
  [SMALL_STATE(78)] = 2056,
  [SMALL_STATE(79)] = 2072,
  [SMALL_STATE(80)] = 2094,
  [SMALL_STATE(81)] = 2116,
  [SMALL_STATE(82)] = 2136,
  [SMALL_STATE(83)] = 2158,
  [SMALL_STATE(84)] = 2180,
  [SMALL_STATE(85)] = 2202,
  [SMALL_STATE(86)] = 2222,
  [SMALL_STATE(87)] = 2244,
  [SMALL_STATE(88)] = 2266,
  [SMALL_STATE(89)] = 2288,
  [SMALL_STATE(90)] = 2310,
  [SMALL_STATE(91)] = 2326,
  [SMALL_STATE(92)] = 2342,
  [SMALL_STATE(93)] = 2364,
  [SMALL_STATE(94)] = 2384,
  [SMALL_STATE(95)] = 2406,
  [SMALL_STATE(96)] = 2428,
  [SMALL_STATE(97)] = 2448,
  [SMALL_STATE(98)] = 2464,
  [SMALL_STATE(99)] = 2477,
  [SMALL_STATE(100)] = 2492,
  [SMALL_STATE(101)] = 2507,
  [SMALL_STATE(102)] = 2522,
  [SMALL_STATE(103)] = 2541,
  [SMALL_STATE(104)] = 2560,
  [SMALL_STATE(105)] = 2575,
  [SMALL_STATE(106)] = 2590,
  [SMALL_STATE(107)] = 2605,
  [SMALL_STATE(108)] = 2620,
  [SMALL_STATE(109)] = 2633,
  [SMALL_STATE(110)] = 2648,
  [SMALL_STATE(111)] = 2667,
  [SMALL_STATE(112)] = 2686,
  [SMALL_STATE(113)] = 2699,
  [SMALL_STATE(114)] = 2714,
  [SMALL_STATE(115)] = 2731,
  [SMALL_STATE(116)] = 2746,
  [SMALL_STATE(117)] = 2761,
  [SMALL_STATE(118)] = 2776,
  [SMALL_STATE(119)] = 2791,
  [SMALL_STATE(120)] = 2806,
  [SMALL_STATE(121)] = 2821,
  [SMALL_STATE(122)] = 2836,
  [SMALL_STATE(123)] = 2851,
  [SMALL_STATE(124)] = 2868,
  [SMALL_STATE(125)] = 2883,
  [SMALL_STATE(126)] = 2898,
  [SMALL_STATE(127)] = 2913,
  [SMALL_STATE(128)] = 2932,
  [SMALL_STATE(129)] = 2947,
  [SMALL_STATE(130)] = 2961,
  [SMALL_STATE(131)] = 2977,
  [SMALL_STATE(132)] = 2991,
  [SMALL_STATE(133)] = 3005,
  [SMALL_STATE(134)] = 3019,
  [SMALL_STATE(135)] = 3033,
  [SMALL_STATE(136)] = 3049,
  [SMALL_STATE(137)] = 3063,
  [SMALL_STATE(138)] = 3077,
  [SMALL_STATE(139)] = 3091,
  [SMALL_STATE(140)] = 3105,
  [SMALL_STATE(141)] = 3119,
  [SMALL_STATE(142)] = 3133,
  [SMALL_STATE(143)] = 3149,
  [SMALL_STATE(144)] = 3165,
  [SMALL_STATE(145)] = 3177,
  [SMALL_STATE(146)] = 3193,
  [SMALL_STATE(147)] = 3205,
  [SMALL_STATE(148)] = 3219,
  [SMALL_STATE(149)] = 3233,
  [SMALL_STATE(150)] = 3249,
  [SMALL_STATE(151)] = 3265,
  [SMALL_STATE(152)] = 3281,
  [SMALL_STATE(153)] = 3295,
  [SMALL_STATE(154)] = 3309,
  [SMALL_STATE(155)] = 3323,
  [SMALL_STATE(156)] = 3337,
  [SMALL_STATE(157)] = 3349,
  [SMALL_STATE(158)] = 3363,
  [SMALL_STATE(159)] = 3376,
  [SMALL_STATE(160)] = 3389,
  [SMALL_STATE(161)] = 3402,
  [SMALL_STATE(162)] = 3415,
  [SMALL_STATE(163)] = 3428,
  [SMALL_STATE(164)] = 3441,
  [SMALL_STATE(165)] = 3452,
  [SMALL_STATE(166)] = 3465,
  [SMALL_STATE(167)] = 3476,
  [SMALL_STATE(168)] = 3489,
  [SMALL_STATE(169)] = 3502,
  [SMALL_STATE(170)] = 3515,
  [SMALL_STATE(171)] = 3528,
  [SMALL_STATE(172)] = 3541,
  [SMALL_STATE(173)] = 3554,
  [SMALL_STATE(174)] = 3567,
  [SMALL_STATE(175)] = 3580,
  [SMALL_STATE(176)] = 3593,
  [SMALL_STATE(177)] = 3604,
  [SMALL_STATE(178)] = 3617,
  [SMALL_STATE(179)] = 3630,
  [SMALL_STATE(180)] = 3641,
  [SMALL_STATE(181)] = 3654,
  [SMALL_STATE(182)] = 3667,
  [SMALL_STATE(183)] = 3680,
  [SMALL_STATE(184)] = 3691,
  [SMALL_STATE(185)] = 3704,
  [SMALL_STATE(186)] = 3717,
  [SMALL_STATE(187)] = 3728,
  [SMALL_STATE(188)] = 3741,
  [SMALL_STATE(189)] = 3754,
  [SMALL_STATE(190)] = 3765,
  [SMALL_STATE(191)] = 3778,
  [SMALL_STATE(192)] = 3791,
  [SMALL_STATE(193)] = 3802,
  [SMALL_STATE(194)] = 3813,
  [SMALL_STATE(195)] = 3826,
  [SMALL_STATE(196)] = 3836,
  [SMALL_STATE(197)] = 3846,
  [SMALL_STATE(198)] = 3856,
  [SMALL_STATE(199)] = 3866,
  [SMALL_STATE(200)] = 3876,
  [SMALL_STATE(201)] = 3886,
  [SMALL_STATE(202)] = 3896,
  [SMALL_STATE(203)] = 3906,
  [SMALL_STATE(204)] = 3916,
  [SMALL_STATE(205)] = 3926,
  [SMALL_STATE(206)] = 3936,
  [SMALL_STATE(207)] = 3946,
  [SMALL_STATE(208)] = 3956,
  [SMALL_STATE(209)] = 3966,
  [SMALL_STATE(210)] = 3976,
  [SMALL_STATE(211)] = 3986,
  [SMALL_STATE(212)] = 3996,
  [SMALL_STATE(213)] = 4006,
  [SMALL_STATE(214)] = 4016,
  [SMALL_STATE(215)] = 4026,
  [SMALL_STATE(216)] = 4036,
  [SMALL_STATE(217)] = 4046,
  [SMALL_STATE(218)] = 4056,
  [SMALL_STATE(219)] = 4066,
  [SMALL_STATE(220)] = 4076,
  [SMALL_STATE(221)] = 4086,
  [SMALL_STATE(222)] = 4096,
  [SMALL_STATE(223)] = 4106,
  [SMALL_STATE(224)] = 4116,
  [SMALL_STATE(225)] = 4126,
  [SMALL_STATE(226)] = 4136,
  [SMALL_STATE(227)] = 4146,
  [SMALL_STATE(228)] = 4156,
  [SMALL_STATE(229)] = 4166,
  [SMALL_STATE(230)] = 4176,
  [SMALL_STATE(231)] = 4186,
  [SMALL_STATE(232)] = 4196,
  [SMALL_STATE(233)] = 4206,
  [SMALL_STATE(234)] = 4216,
  [SMALL_STATE(235)] = 4226,
  [SMALL_STATE(236)] = 4236,
  [SMALL_STATE(237)] = 4246,
  [SMALL_STATE(238)] = 4256,
  [SMALL_STATE(239)] = 4266,
  [SMALL_STATE(240)] = 4276,
  [SMALL_STATE(241)] = 4286,
  [SMALL_STATE(242)] = 4296,
  [SMALL_STATE(243)] = 4306,
  [SMALL_STATE(244)] = 4316,
  [SMALL_STATE(245)] = 4326,
  [SMALL_STATE(246)] = 4336,
  [SMALL_STATE(247)] = 4346,
  [SMALL_STATE(248)] = 4356,
  [SMALL_STATE(249)] = 4366,
  [SMALL_STATE(250)] = 4376,
  [SMALL_STATE(251)] = 4386,
  [SMALL_STATE(252)] = 4396,
  [SMALL_STATE(253)] = 4406,
  [SMALL_STATE(254)] = 4416,
  [SMALL_STATE(255)] = 4426,
  [SMALL_STATE(256)] = 4436,
  [SMALL_STATE(257)] = 4446,
  [SMALL_STATE(258)] = 4456,
  [SMALL_STATE(259)] = 4466,
  [SMALL_STATE(260)] = 4476,
  [SMALL_STATE(261)] = 4486,
  [SMALL_STATE(262)] = 4496,
  [SMALL_STATE(263)] = 4506,
  [SMALL_STATE(264)] = 4516,
  [SMALL_STATE(265)] = 4526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(168),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(34),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(177),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(61),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(175),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(122),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(64),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(165),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(90),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(208),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(116),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(211),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(160),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(113),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(169),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(190),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(98),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(159),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(104),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(157),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(229),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(178),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(119),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(174),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(95),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(173),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(141),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(174),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(154),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(167),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(138),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(178),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(137),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(100),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(264),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(127),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(146),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(85),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [776] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
