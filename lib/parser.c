#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
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
  sym_pat_1c663f5 = 35,
  sym_pat_217c202 = 36,
  sym_pat_239fcac = 37,
  sym_pat_2b37705 = 38,
  sym_pat_4128122 = 39,
  sym_pat_433746d = 40,
  sym_pat_441cd81 = 41,
  sym_pat_4a2f38a = 42,
  sym_pat_4b81dfc = 43,
  sym_pat_4de4cb9 = 44,
  sym_pat_4fd4a56 = 45,
  sym_pat_56bd329 = 46,
  sym_pat_5cf3c2c = 47,
  sym_pat_5eaae97 = 48,
  sym_pat_660c06c = 49,
  sym_pat_79b8891 = 50,
  sym_pat_808c5a1 = 51,
  sym_pat_8165e5f = 52,
  sym_pat_845d48b = 53,
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
  aux_sym_volume_instruction_repeat1 = 117,
  aux_sym_user_name_or_group_repeat1 = 118,
  aux_sym_stopsignal_value_repeat1 = 119,
  aux_sym_healthcheck_instruction_repeat1 = 120,
  aux_sym_path_repeat1 = 121,
  aux_sym_image_name_repeat1 = 122,
  aux_sym_image_tag_repeat1 = 123,
  aux_sym_image_digest_repeat1 = 124,
  aux_sym_image_alias_repeat1 = 125,
  aux_sym_string_array_repeat1 = 126,
  aux_sym_shell_command_repeat1 = 127,
  aux_sym_shell_command_repeat2 = 128,
  aux_sym_shell_fragment_repeat1 = 129,
  aux_sym_double_quoted_string_repeat1 = 130,
  aux_sym_unquoted_string_repeat1 = 131,
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
  [sym_pat_845d48b] = "pat_845d48b",
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
  [sym_pat_845d48b] = sym_pat_845d48b,
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
  [sym_pat_845d48b] = {
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
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(170);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
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
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
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
          lookahead != '[') ADVANCE(233);
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
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
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
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(169);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
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
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
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
          lookahead == 'e') ADVANCE(221);
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
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
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
          lookahead == 'm') ADVANCE(240);
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
          lookahead == 'r') ADVANCE(239);
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
          lookahead == 's') ADVANCE(242);
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
          lookahead == 't') ADVANCE(243);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
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
    case 198:
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
    case 199:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(197);
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
    case 200:
      ACCEPT_TOKEN(sym_imm_tok_pat_24a1611);
      if (lookahead == '.') ADVANCE(198);
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
      ACCEPT_TOKEN(sym_pat_1c663f5);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_pat_217c202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_pat_239fcac);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_pat_2b37705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_pat_4128122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_pat_433746d);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_pat_441cd81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_pat_4a2f38a);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_pat_4b81dfc);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pat_4de4cb9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_pat_4fd4a56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_pat_56bd329);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_pat_5cf3c2c);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_pat_5eaae97);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_pat_660c06c);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_pat_79b8891);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_pat_808c5a1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_pat_8165e5f);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_pat_845d48b);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
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
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 161},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 161},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 161},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 161},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 38},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 42},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 40},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 161},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 161},
  [136] = {.lex_state = 161},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 161},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 161},
  [157] = {.lex_state = 161},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 161},
  [160] = {.lex_state = 50},
  [161] = {.lex_state = 50},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 50},
  [164] = {.lex_state = 50},
  [165] = {.lex_state = 50},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 50},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 50},
  [171] = {.lex_state = 50},
  [172] = {.lex_state = 50},
  [173] = {.lex_state = 161},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 32},
  [176] = {.lex_state = 46},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 161},
  [182] = {.lex_state = 161},
  [183] = {.lex_state = 161},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 161},
  [188] = {.lex_state = 161},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 161},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 53},
  [194] = {.lex_state = 161},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 161},
  [209] = {.lex_state = 54},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 161},
  [219] = {.lex_state = 236},
  [220] = {.lex_state = 161},
  [221] = {.lex_state = 236},
  [222] = {.lex_state = 54},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 54},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 161},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 161},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 161},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 161},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 161},
  [238] = {.lex_state = 236},
  [239] = {.lex_state = 161},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 161},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 161},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 161},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 161},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 161},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 161},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 53},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 53},
  [261] = {.lex_state = 53},
  [262] = {.lex_state = 52},
  [263] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(215),
    [sym_instruction] = STATE(226),
    [sym_from_instruction] = STATE(224),
    [sym_run_instruction] = STATE(224),
    [sym_cmd_instruction] = STATE(224),
    [sym_label_instruction] = STATE(224),
    [sym_expose_instruction] = STATE(224),
    [sym_env_instruction] = STATE(224),
    [sym_add_instruction] = STATE(224),
    [sym_copy_instruction] = STATE(224),
    [sym_entrypoint_instruction] = STATE(224),
    [sym_volume_instruction] = STATE(224),
    [sym_user_instruction] = STATE(224),
    [sym_workdir_instruction] = STATE(224),
    [sym_arg_instruction] = STATE(224),
    [sym_onbuild_instruction] = STATE(224),
    [sym_stopsignal_instruction] = STATE(224),
    [sym_healthcheck_instruction] = STATE(224),
    [sym_shell_instruction] = STATE(224),
    [sym_maintainer_instruction] = STATE(224),
    [sym_cross_build_instruction] = STATE(224),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_pat_030af88,
    ACTIONS(60), 1,
      sym_pat_1c663f5,
    ACTIONS(63), 1,
      sym_pat_239fcac,
    ACTIONS(66), 1,
      sym_pat_433746d,
    ACTIONS(69), 1,
      sym_pat_4a2f38a,
    ACTIONS(72), 1,
      sym_pat_56bd329,
    ACTIONS(75), 1,
      sym_pat_5cf3c2c,
    ACTIONS(78), 1,
      sym_pat_5eaae97,
    ACTIONS(81), 1,
      sym_pat_808c5a1,
    ACTIONS(84), 1,
      sym_pat_9374c10,
    ACTIONS(87), 1,
      sym_pat_9818882,
    ACTIONS(90), 1,
      sym_pat_985c208,
    ACTIONS(93), 1,
      sym_pat_9c0a769,
    ACTIONS(96), 1,
      sym_pat_a368b76,
    ACTIONS(99), 1,
      sym_pat_a6040bb,
    ACTIONS(102), 1,
      sym_pat_aa82a08,
    ACTIONS(105), 1,
      sym_pat_ed84199,
    ACTIONS(108), 1,
      sym_pat_f2a2f8f,
    ACTIONS(111), 1,
      sym_pat_fd0037e,
    STATE(226), 1,
      sym_instruction,
    ACTIONS(54), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(224), 19,
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
  [99] = 27,
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
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(224), 19,
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
    STATE(198), 1,
      sym_instruction,
    ACTIONS(9), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(224), 19,
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
    ACTIONS(49), 23,
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
  [324] = 9,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      sym_imm_tok_pat_24a1611,
    STATE(6), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(27), 1,
      sym_expansion,
    ACTIONS(124), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [354] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      anon_sym_DOLLAR,
    ACTIONS(133), 1,
      anon_sym_BSLASH,
    ACTIONS(138), 1,
      sym_imm_tok_pat_24a1611,
    STATE(27), 1,
      sym_expansion,
    STATE(7), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(136), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [382] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(8), 1,
      sym_line_continuation,
    STATE(27), 1,
      sym_expansion,
    ACTIONS(122), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(126), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [409] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(132), 1,
      sym_comment_line,
    STATE(232), 1,
      sym_anon_comment,
    STATE(236), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [438] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      sym_pat_2b37705,
    ACTIONS(155), 1,
      sym_pat_79b8891,
    STATE(10), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_image_name_repeat1,
    STATE(65), 1,
      sym_expansion,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [465] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(95), 1,
      sym_expansion,
    ACTIONS(161), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(217), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [492] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym_expansion,
    ACTIONS(165), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(138), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [519] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(95), 1,
      sym_expansion,
    ACTIONS(161), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(216), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [546] = 9,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_BSLASH,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(169), 1,
      sym_imm_tok_pat_24a1611,
    STATE(14), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym_expansion,
    ACTIONS(124), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [575] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(153), 1,
      sym_pat_2b37705,
    ACTIONS(173), 1,
      sym_pat_79b8891,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(15), 1,
      sym_line_continuation,
    STATE(65), 1,
      sym_expansion,
    ACTIONS(171), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [602] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_shell_command_repeat1,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(132), 1,
      sym_comment_line,
    STATE(232), 1,
      sym_anon_comment,
    STATE(240), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [631] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      sym_pat_2b37705,
    ACTIONS(183), 1,
      sym_pat_79b8891,
    STATE(65), 1,
      sym_expansion,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(175), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [656] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(191), 1,
      sym_imm_tok_pat_24a1611,
    STATE(58), 1,
      sym_expansion,
    ACTIONS(136), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [683] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      sym_semgrep_ellipsis,
    ACTIONS(202), 1,
      sym_pat_217c202,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(117), 2,
      sym_expansion,
      sym_expose_port,
  [707] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(20), 1,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(207), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [725] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_DASH_DASH,
    ACTIONS(213), 1,
      sym_pat_8165e5f,
    STATE(15), 1,
      sym_expansion,
    STATE(21), 1,
      sym_line_continuation,
    STATE(53), 1,
      sym_image_name,
    STATE(66), 1,
      sym_param,
    STATE(179), 1,
      sym_image_spec,
  [753] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      sym_semgrep_ellipsis,
    ACTIONS(221), 1,
      sym_pat_217c202,
    STATE(19), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(117), 2,
      sym_expansion,
      sym_expose_port,
  [779] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(140), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(202), 2,
      sym_string_array,
      sym_shell_command,
  [803] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(140), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(186), 2,
      sym_string_array,
      sym_shell_command,
  [827] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(140), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(196), 2,
      sym_string_array,
      sym_shell_command,
  [851] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(227), 1,
      anon_sym_DASH_DASH,
    STATE(26), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(182), 1,
      sym_param,
    STATE(195), 1,
      sym_cmd_instruction,
    ACTIONS(225), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [877] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(27), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(231), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [895] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(239), 1,
      sym_pat_79b8891,
    STATE(28), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_image_tag_repeat1,
    STATE(81), 1,
      sym_expansion,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_AT,
  [921] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(243), 5,
      anon_sym_DOLLAR,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_4128122,
  [939] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(253), 1,
      sym_pat_79b8891,
    STATE(81), 1,
      sym_expansion,
    ACTIONS(245), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(30), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [963] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_line_continuation,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [980] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(257), 1,
      sym_pat_1167a92,
    STATE(32), 1,
      sym_line_continuation,
    STATE(36), 1,
      sym_expansion,
    STATE(144), 1,
      sym_path,
    STATE(210), 1,
      sym_string_array,
  [1005] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(241), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1022] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      anon_sym_LF,
    ACTIONS(261), 1,
      sym_semgrep_ellipsis,
    ACTIONS(263), 1,
      sym_pat_845d48b,
    STATE(34), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym_env_instruction_repeat1,
    STATE(146), 1,
      sym_env_pair,
    STATE(194), 1,
      sym_env_key,
  [1047] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_line_continuation,
    STATE(136), 1,
      sym_array_element,
    STATE(181), 1,
      sym_double_quoted_string,
    ACTIONS(269), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1070] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      sym_pat_0c7fc22,
    STATE(36), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(94), 1,
      sym_expansion,
    ACTIONS(271), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1093] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(277), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment_line,
    STATE(232), 1,
      sym_anon_comment,
    ACTIONS(280), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1114] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(118), 1,
      sym_expansion,
    STATE(38), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1137] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(39), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(118), 1,
      sym_expansion,
  [1162] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(301), 1,
      sym_semgrep_ellipsis,
    ACTIONS(303), 1,
      sym_pat_845d48b,
    STATE(34), 1,
      aux_sym_env_instruction_repeat1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(146), 1,
      sym_env_pair,
    STATE(177), 1,
      sym_env_key,
    STATE(213), 1,
      sym_spaced_env_pair,
  [1187] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    ACTIONS(309), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(311), 1,
      sym_pat_79b8891,
    STATE(41), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_image_digest_repeat1,
    STATE(123), 1,
      sym_expansion,
  [1212] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH,
    ACTIONS(317), 1,
      sym_pat_1167a92,
    STATE(42), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
    STATE(111), 1,
      sym_param,
    STATE(200), 1,
      sym_path,
  [1237] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      sym_semgrep_ellipsis,
    ACTIONS(324), 1,
      sym_pat_845d48b,
    STATE(146), 1,
      sym_env_pair,
    STATE(194), 1,
      sym_env_key,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1260] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(331), 1,
      sym_semgrep_ellipsis,
    STATE(44), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_label_instruction_repeat1,
    STATE(124), 1,
      sym_label_pair,
    ACTIONS(329), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
  [1283] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      sym_pat_0c7fc22,
    STATE(45), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(94), 1,
      sym_expansion,
    ACTIONS(333), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1306] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_expansion,
  [1331] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(47), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(243), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [1348] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(342), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(345), 1,
      sym_pat_79b8891,
    STATE(123), 1,
      sym_expansion,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1371] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(207), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [1388] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    ACTIONS(349), 1,
      sym_semgrep_ellipsis,
    ACTIONS(351), 1,
      sym_pat_217c202,
    STATE(22), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(117), 2,
      sym_expansion,
      sym_expose_port,
  [1411] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_expansion,
  [1436] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      sym_pat_0c7fc22,
    STATE(94), 1,
      sym_expansion,
    ACTIONS(355), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(52), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1457] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      anon_sym_AT,
    ACTIONS(369), 1,
      sym_pat_79b8891,
    STATE(53), 1,
      sym_line_continuation,
    STATE(103), 1,
      sym_image_tag,
    STATE(155), 1,
      sym_image_digest,
  [1482] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_expansion,
  [1507] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(55), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_expansion,
  [1532] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH,
    ACTIONS(317), 1,
      sym_pat_1167a92,
    STATE(56), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
    STATE(107), 1,
      sym_param,
    STATE(197), 1,
      sym_path,
  [1557] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(379), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(377), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [1576] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(231), 4,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_imm_tok_pat_24a1611,
      sym_pat_845d48b,
  [1593] = 8,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(297), 1,
      sym_escape_sequence,
    ACTIONS(299), 1,
      sym_imm_tok_pat_589b0f8,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(59), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym_expansion,
  [1618] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      sym_pat_660c06c,
    STATE(110), 1,
      sym_expansion,
    ACTIONS(383), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1639] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_expansion,
    ACTIONS(394), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1660] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      sym_semgrep_ellipsis,
    STATE(124), 1,
      sym_label_pair,
    ACTIONS(399), 2,
      sym_semgrep_metavariable,
      sym_pat_4128122,
    STATE(62), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [1681] = 7,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(95), 1,
      sym_expansion,
    ACTIONS(161), 2,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [1704] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_DOLLAR,
    ACTIONS(411), 1,
      sym_pat_660c06c,
    STATE(60), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym_expansion,
    ACTIONS(407), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1727] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(413), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(415), 3,
      anon_sym_DOLLAR,
      sym_pat_2b37705,
      sym_pat_79b8891,
  [1744] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      sym_pat_8165e5f,
    STATE(15), 1,
      sym_expansion,
    STATE(53), 1,
      sym_image_name,
    STATE(66), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym_image_spec,
  [1766] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_array_element,
    STATE(181), 1,
      sym_double_quoted_string,
    ACTIONS(269), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1786] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    ACTIONS(419), 1,
      sym_pat_660c06c,
    STATE(64), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(68), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym_expansion,
    STATE(211), 1,
      sym_user_name_or_group,
  [1808] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    ACTIONS(421), 1,
      sym_pat_441cd81,
    STATE(69), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(130), 1,
      sym_expansion,
    STATE(206), 1,
      sym_stopsignal_value,
  [1830] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [1846] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 1,
      anon_sym_DOLLAR,
    ACTIONS(428), 1,
      sym_pat_0c7fc22,
    STATE(151), 1,
      sym_expansion,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1866] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      anon_sym_DOLLAR,
    ACTIONS(433), 1,
      sym_pat_9a14b5c,
    STATE(72), 1,
      sym_line_continuation,
    STATE(79), 1,
      aux_sym_image_alias_repeat1,
    STATE(129), 1,
      sym_expansion,
    STATE(246), 1,
      sym_image_alias,
  [1888] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    ACTIONS(419), 1,
      sym_pat_660c06c,
    STATE(64), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym_expansion,
    STATE(154), 1,
      sym_user_name_or_group,
  [1910] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(15), 1,
      sym_pat_239fcac,
    ACTIONS(227), 1,
      anon_sym_DASH_DASH,
    STATE(74), 1,
      sym_line_continuation,
    STATE(114), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(182), 1,
      sym_param,
    STATE(234), 1,
      sym_cmd_instruction,
  [1932] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(329), 1,
      sym_pat_4128122,
    ACTIONS(331), 1,
      sym_semgrep_ellipsis,
    ACTIONS(435), 1,
      sym_semgrep_metavariable,
    STATE(44), 1,
      aux_sym_label_instruction_repeat1,
    STATE(75), 1,
      sym_line_continuation,
    STATE(124), 1,
      sym_label_pair,
  [1954] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [1970] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_DOLLAR,
    ACTIONS(439), 1,
      sym_non_newline_whitespace,
    ACTIONS(441), 1,
      sym_pat_0c7fc22,
    STATE(77), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(149), 1,
      sym_expansion,
  [1992] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      sym_pat_441cd81,
    STATE(78), 1,
      sym_line_continuation,
    STATE(88), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(130), 1,
      sym_expansion,
  [2014] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(449), 1,
      anon_sym_DOLLAR,
    ACTIONS(451), 1,
      sym_pat_9a14b5c,
    STATE(79), 1,
      sym_line_continuation,
    STATE(84), 1,
      aux_sym_image_alias_repeat1,
    STATE(129), 1,
      sym_expansion,
  [2036] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      sym_pat_0c7fc22,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(80), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym_expansion,
  [2058] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(457), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(459), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2074] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      anon_sym_DOLLAR,
    ACTIONS(433), 1,
      sym_pat_9a14b5c,
    STATE(79), 1,
      aux_sym_image_alias_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_expansion,
    STATE(230), 1,
      sym_image_alias,
  [2096] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      sym_non_newline_whitespace,
    ACTIONS(461), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      sym_pat_0c7fc22,
    STATE(149), 1,
      sym_expansion,
    STATE(83), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2116] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(472), 1,
      sym_pat_9a14b5c,
    STATE(129), 1,
      sym_expansion,
    STATE(84), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2136] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_DOLLAR,
    ACTIONS(441), 1,
      sym_pat_0c7fc22,
    ACTIONS(475), 1,
      sym_non_newline_whitespace,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(85), 1,
      sym_line_continuation,
    STATE(149), 1,
      sym_expansion,
  [2158] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      sym_imm_tok_pat_bcfc287,
      sym_pat_79b8891,
  [2174] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
      sym_pat_660c06c,
  [2190] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(482), 1,
      sym_pat_441cd81,
    STATE(130), 1,
      sym_expansion,
    STATE(88), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [2210] = 7,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      sym_pat_0c7fc22,
    ACTIONS(475), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym_expansion,
  [2232] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2247] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(91), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym_path,
  [2266] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(205), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2281] = 4,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2296] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(496), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2309] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2324] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    ACTIONS(257), 1,
      sym_pat_1167a92,
    STATE(36), 1,
      sym_expansion,
    STATE(96), 1,
      sym_line_continuation,
    STATE(158), 1,
      sym_path,
  [2343] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(97), 1,
      sym_line_continuation,
    STATE(199), 1,
      sym_path,
  [2362] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2377] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(243), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2392] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(207), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2405] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(237), 1,
      sym_imm_tok_pat_bcfc287,
    ACTIONS(498), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym_image_tag_repeat1,
    STATE(81), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
  [2424] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(309), 1,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(500), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      aux_sym_image_digest_repeat1,
    STATE(102), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym_expansion,
  [2443] = 6,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_AT,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(504), 1,
      sym_pat_79b8891,
    STATE(103), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym_image_digest,
  [2462] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(243), 4,
      anon_sym_LF,
      anon_sym_DOLLAR,
      sym_non_newline_whitespace,
      sym_pat_0c7fc22,
  [2475] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(508), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2490] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(512), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2505] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      sym_pat_1167a92,
    STATE(85), 1,
      sym_expansion,
    STATE(107), 1,
      sym_line_continuation,
    STATE(242), 1,
      sym_path,
  [2524] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(516), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2539] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(109), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym_path,
  [2558] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(518), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(520), 2,
      anon_sym_DOLLAR,
      sym_pat_660c06c,
  [2573] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      sym_pat_1167a92,
    STATE(85), 1,
      sym_expansion,
    STATE(111), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym_path,
  [2592] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2607] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(113), 1,
      sym_line_continuation,
    STATE(225), 1,
      sym_path,
  [2626] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(522), 1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 1,
      sym_pat_239fcac,
    STATE(182), 1,
      sym_param,
    STATE(114), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2643] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(243), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2658] = 5,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      anon_sym_BSLASH_LF,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(531), 2,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2675] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2690] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      sym_imm_tok_pat_589b0f8,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(537), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2705] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(377), 3,
      anon_sym_DOLLAR,
      sym_semgrep_ellipsis,
      sym_pat_217c202,
  [2720] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_pat_1167a92,
    STATE(89), 1,
      sym_expansion,
    STATE(120), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_path,
  [2739] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(243), 1,
      anon_sym_DOLLAR,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(241), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2754] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(543), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2769] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(545), 2,
      anon_sym_LF,
      sym_imm_tok_pat_d2727a0,
    ACTIONS(547), 2,
      anon_sym_DOLLAR,
      sym_pat_79b8891,
  [2784] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(551), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2799] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      sym_imm_tok_pat_24a1611,
  [2814] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(555), 3,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
      sym_pat_4128122,
  [2829] = 4,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      anon_sym_BSLASH_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(127), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [2843] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(243), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2857] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(562), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(564), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [2871] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(568), 2,
      anon_sym_DOLLAR,
      sym_pat_441cd81,
  [2885] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2899] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(570), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [2911] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      sym_non_newline_whitespace,
    STATE(133), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2925] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      sym_non_newline_whitespace,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(243), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2939] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_string_array_repeat1,
  [2955] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_string_array_repeat1,
    STATE(136), 1,
      sym_line_continuation,
  [2971] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      sym_non_newline_whitespace,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [2985] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(585), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [2999] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(516), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3013] = 5,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      anon_sym_BSLASH_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(140), 1,
      sym_line_continuation,
    STATE(152), 1,
      aux_sym_shell_command_repeat2,
  [3029] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(141), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3043] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(596), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3055] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(598), 3,
      anon_sym_POUND,
      sym_pat_4b81dfc,
      sym_pat_f05eb95,
  [3067] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      sym_non_newline_whitespace,
    STATE(144), 1,
      sym_line_continuation,
    STATE(150), 1,
      aux_sym_volume_instruction_repeat1,
  [3083] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3097] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(606), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3111] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(243), 2,
      anon_sym_DOLLAR,
      sym_pat_9a14b5c,
  [3125] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(610), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3139] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      sym_non_newline_whitespace,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(496), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3153] = 5,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(602), 1,
      sym_non_newline_whitespace,
    ACTIONS(614), 1,
      anon_sym_LF,
    STATE(133), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(150), 1,
      sym_line_continuation,
  [3169] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(496), 2,
      anon_sym_DOLLAR,
      sym_pat_0c7fc22,
  [3183] = 5,
    ACTIONS(589), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_required_line_continuation,
    STATE(127), 1,
      aux_sym_shell_command_repeat2,
    STATE(152), 1,
      sym_line_continuation,
  [3199] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      sym_semgrep_ellipsis,
      sym_pat_845d48b,
  [3213] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_line_continuation,
  [3226] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      sym_pat_79b8891,
    STATE(155), 1,
      sym_line_continuation,
  [3239] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3250] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3261] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(572), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [3272] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3283] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(628), 1,
      sym_variable,
    STATE(160), 1,
      sym_line_continuation,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
  [3309] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      sym_variable,
    STATE(162), 1,
      sym_line_continuation,
  [3322] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      sym_variable,
    STATE(163), 1,
      sym_line_continuation,
  [3335] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    ACTIONS(644), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
  [3348] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3361] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_DOLLAR,
    ACTIONS(652), 1,
      sym_pat_8165e5f,
    STATE(166), 1,
      sym_line_continuation,
  [3374] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      sym_variable,
    STATE(167), 1,
      sym_line_continuation,
  [3387] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      sym_variable,
    STATE(168), 1,
      sym_line_continuation,
  [3400] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      sym_variable,
    STATE(169), 1,
      sym_line_continuation,
  [3413] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      sym_variable,
    STATE(170), 1,
      sym_line_continuation,
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      sym_variable,
    STATE(171), 1,
      sym_line_continuation,
  [3439] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
    ACTIONS(676), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
  [3452] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_line_continuation,
    STATE(201), 1,
      sym_string_array,
  [3465] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 1,
      sym_pat_79b8891,
    STATE(174), 1,
      sym_line_continuation,
  [3478] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(682), 2,
      sym_semgrep_metavariable,
      sym_pat_4de4cb9,
  [3489] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(684), 2,
      anon_sym_EQ,
      sym_imm_tok_pat_3d340f6,
  [3500] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      anon_sym_EQ,
    ACTIONS(688), 1,
      sym_imm_tok_pat_3d340f6,
    STATE(177), 1,
      sym_line_continuation,
  [3513] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    ACTIONS(692), 1,
      sym_variable,
    STATE(178), 1,
      sym_line_continuation,
  [3526] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      sym_pat_79b8891,
    STATE(179), 1,
      sym_line_continuation,
  [3539] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_line_continuation,
  [3552] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3563] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(704), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3574] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(650), 2,
      anon_sym_DASH_DASH,
      sym_pat_239fcac,
  [3585] = 4,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      sym_pat_79b8891,
    STATE(184), 1,
      sym_line_continuation,
  [3598] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_DOLLAR,
    ACTIONS(652), 1,
      sym_pat_1167a92,
    STATE(185), 1,
      sym_line_continuation,
  [3611] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_line_continuation,
  [3621] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_line_continuation,
  [3631] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_line_continuation,
  [3641] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      sym_imm_tok_pat_f43f746,
    STATE(189), 1,
      sym_line_continuation,
  [3651] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      sym_non_newline_whitespace,
    STATE(190), 1,
      sym_line_continuation,
  [3661] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym_line_continuation,
  [3671] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3681] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      sym_pat_8713919,
    STATE(193), 1,
      sym_line_continuation,
  [3691] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_line_continuation,
  [3701] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3711] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3721] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      sym_non_newline_whitespace,
    STATE(197), 1,
      sym_line_continuation,
  [3731] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3741] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3751] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      sym_non_newline_whitespace,
    STATE(200), 1,
      sym_line_continuation,
  [3761] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
  [3771] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3781] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3791] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      sym_imm_tok_pat_f43f746,
    STATE(204), 1,
      sym_line_continuation,
  [3801] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3811] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_line_continuation,
  [3821] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
  [3831] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_EQ,
    STATE(208), 1,
      sym_line_continuation,
  [3841] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(209), 1,
      sym_line_continuation,
  [3851] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
  [3861] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
  [3871] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [3881] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_line_continuation,
  [3891] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_line_continuation,
  [3901] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
    STATE(215), 1,
      sym_line_continuation,
  [3911] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
  [3921] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_line_continuation,
  [3931] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_EQ,
    STATE(218), 1,
      sym_line_continuation,
  [3941] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      sym_pat_4fd4a56,
    STATE(219), 1,
      sym_line_continuation,
  [3951] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_line_continuation,
  [3961] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      sym_pat_4fd4a56,
    STATE(221), 1,
      sym_line_continuation,
  [3971] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(222), 1,
      sym_line_continuation,
  [3981] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_line_continuation,
  [3991] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_line_continuation,
  [4001] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [4011] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_line_continuation,
  [4021] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      sym_imm_tok_pat_f6e1de8,
    STATE(227), 1,
      sym_line_continuation,
  [4031] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_LF,
    STATE(228), 1,
      sym_line_continuation,
  [4041] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_line_continuation,
  [4051] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_line_continuation,
  [4061] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_line_continuation,
  [4071] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
  [4081] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_line_continuation,
  [4091] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_line_continuation,
  [4101] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_line_continuation,
  [4111] = 3,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      anon_sym_BSLASH_LF,
    STATE(236), 1,
      sym_line_continuation,
  [4121] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_line_continuation,
  [4131] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      sym_pat_4fd4a56,
    STATE(238), 1,
      sym_line_continuation,
  [4141] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_line_continuation,
  [4151] = 3,
    ACTIONS(812), 1,
      anon_sym_LF,
    ACTIONS(814), 1,
      anon_sym_BSLASH_LF,
    STATE(240), 1,
      sym_line_continuation,
  [4161] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_line_continuation,
  [4171] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      sym_non_newline_whitespace,
    STATE(242), 1,
      sym_line_continuation,
  [4181] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_line_continuation,
  [4191] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
  [4201] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_line_continuation,
  [4211] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_LF,
    STATE(246), 1,
      sym_line_continuation,
  [4221] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_line_continuation,
  [4231] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      sym_pat_8713919,
    STATE(248), 1,
      sym_line_continuation,
  [4241] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_line_continuation,
  [4251] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      sym_pat_8713919,
    STATE(250), 1,
      sym_line_continuation,
  [4261] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_line_continuation,
  [4271] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      sym_pat_8713919,
    STATE(252), 1,
      sym_line_continuation,
  [4281] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      sym_pat_8713919,
    STATE(253), 1,
      sym_line_continuation,
  [4291] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      sym_pat_8713919,
    STATE(254), 1,
      sym_line_continuation,
  [4301] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym_pat_8713919,
    STATE(255), 1,
      sym_line_continuation,
  [4311] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      sym_pat_8713919,
    STATE(256), 1,
      sym_line_continuation,
  [4321] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(848), 1,
      sym_pat_8713919,
    STATE(257), 1,
      sym_line_continuation,
  [4331] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      sym_pat_8713919,
    STATE(258), 1,
      sym_line_continuation,
  [4341] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_pat_8713919,
    STATE(259), 1,
      sym_line_continuation,
  [4351] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      sym_pat_8713919,
    STATE(260), 1,
      sym_line_continuation,
  [4361] = 3,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      sym_pat_8713919,
    STATE(261), 1,
      sym_line_continuation,
  [4371] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      sym_imm_tok_pat_f43f746,
    STATE(262), 1,
      sym_line_continuation,
  [4381] = 1,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 354,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 438,
  [SMALL_STATE(11)] = 465,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 519,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 803,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 851,
  [SMALL_STATE(27)] = 877,
  [SMALL_STATE(28)] = 895,
  [SMALL_STATE(29)] = 921,
  [SMALL_STATE(30)] = 939,
  [SMALL_STATE(31)] = 963,
  [SMALL_STATE(32)] = 980,
  [SMALL_STATE(33)] = 1005,
  [SMALL_STATE(34)] = 1022,
  [SMALL_STATE(35)] = 1047,
  [SMALL_STATE(36)] = 1070,
  [SMALL_STATE(37)] = 1093,
  [SMALL_STATE(38)] = 1114,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1162,
  [SMALL_STATE(41)] = 1187,
  [SMALL_STATE(42)] = 1212,
  [SMALL_STATE(43)] = 1237,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1283,
  [SMALL_STATE(46)] = 1306,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1348,
  [SMALL_STATE(49)] = 1371,
  [SMALL_STATE(50)] = 1388,
  [SMALL_STATE(51)] = 1411,
  [SMALL_STATE(52)] = 1436,
  [SMALL_STATE(53)] = 1457,
  [SMALL_STATE(54)] = 1482,
  [SMALL_STATE(55)] = 1507,
  [SMALL_STATE(56)] = 1532,
  [SMALL_STATE(57)] = 1557,
  [SMALL_STATE(58)] = 1576,
  [SMALL_STATE(59)] = 1593,
  [SMALL_STATE(60)] = 1618,
  [SMALL_STATE(61)] = 1639,
  [SMALL_STATE(62)] = 1660,
  [SMALL_STATE(63)] = 1681,
  [SMALL_STATE(64)] = 1704,
  [SMALL_STATE(65)] = 1727,
  [SMALL_STATE(66)] = 1744,
  [SMALL_STATE(67)] = 1766,
  [SMALL_STATE(68)] = 1786,
  [SMALL_STATE(69)] = 1808,
  [SMALL_STATE(70)] = 1830,
  [SMALL_STATE(71)] = 1846,
  [SMALL_STATE(72)] = 1866,
  [SMALL_STATE(73)] = 1888,
  [SMALL_STATE(74)] = 1910,
  [SMALL_STATE(75)] = 1932,
  [SMALL_STATE(76)] = 1954,
  [SMALL_STATE(77)] = 1970,
  [SMALL_STATE(78)] = 1992,
  [SMALL_STATE(79)] = 2014,
  [SMALL_STATE(80)] = 2036,
  [SMALL_STATE(81)] = 2058,
  [SMALL_STATE(82)] = 2074,
  [SMALL_STATE(83)] = 2096,
  [SMALL_STATE(84)] = 2116,
  [SMALL_STATE(85)] = 2136,
  [SMALL_STATE(86)] = 2158,
  [SMALL_STATE(87)] = 2174,
  [SMALL_STATE(88)] = 2190,
  [SMALL_STATE(89)] = 2210,
  [SMALL_STATE(90)] = 2232,
  [SMALL_STATE(91)] = 2247,
  [SMALL_STATE(92)] = 2266,
  [SMALL_STATE(93)] = 2281,
  [SMALL_STATE(94)] = 2296,
  [SMALL_STATE(95)] = 2309,
  [SMALL_STATE(96)] = 2324,
  [SMALL_STATE(97)] = 2343,
  [SMALL_STATE(98)] = 2362,
  [SMALL_STATE(99)] = 2377,
  [SMALL_STATE(100)] = 2392,
  [SMALL_STATE(101)] = 2405,
  [SMALL_STATE(102)] = 2424,
  [SMALL_STATE(103)] = 2443,
  [SMALL_STATE(104)] = 2462,
  [SMALL_STATE(105)] = 2475,
  [SMALL_STATE(106)] = 2490,
  [SMALL_STATE(107)] = 2505,
  [SMALL_STATE(108)] = 2524,
  [SMALL_STATE(109)] = 2539,
  [SMALL_STATE(110)] = 2558,
  [SMALL_STATE(111)] = 2573,
  [SMALL_STATE(112)] = 2592,
  [SMALL_STATE(113)] = 2607,
  [SMALL_STATE(114)] = 2626,
  [SMALL_STATE(115)] = 2643,
  [SMALL_STATE(116)] = 2658,
  [SMALL_STATE(117)] = 2675,
  [SMALL_STATE(118)] = 2690,
  [SMALL_STATE(119)] = 2705,
  [SMALL_STATE(120)] = 2720,
  [SMALL_STATE(121)] = 2739,
  [SMALL_STATE(122)] = 2754,
  [SMALL_STATE(123)] = 2769,
  [SMALL_STATE(124)] = 2784,
  [SMALL_STATE(125)] = 2799,
  [SMALL_STATE(126)] = 2814,
  [SMALL_STATE(127)] = 2829,
  [SMALL_STATE(128)] = 2843,
  [SMALL_STATE(129)] = 2857,
  [SMALL_STATE(130)] = 2871,
  [SMALL_STATE(131)] = 2885,
  [SMALL_STATE(132)] = 2899,
  [SMALL_STATE(133)] = 2911,
  [SMALL_STATE(134)] = 2925,
  [SMALL_STATE(135)] = 2939,
  [SMALL_STATE(136)] = 2955,
  [SMALL_STATE(137)] = 2971,
  [SMALL_STATE(138)] = 2985,
  [SMALL_STATE(139)] = 2999,
  [SMALL_STATE(140)] = 3013,
  [SMALL_STATE(141)] = 3029,
  [SMALL_STATE(142)] = 3043,
  [SMALL_STATE(143)] = 3055,
  [SMALL_STATE(144)] = 3067,
  [SMALL_STATE(145)] = 3083,
  [SMALL_STATE(146)] = 3097,
  [SMALL_STATE(147)] = 3111,
  [SMALL_STATE(148)] = 3125,
  [SMALL_STATE(149)] = 3139,
  [SMALL_STATE(150)] = 3153,
  [SMALL_STATE(151)] = 3169,
  [SMALL_STATE(152)] = 3183,
  [SMALL_STATE(153)] = 3199,
  [SMALL_STATE(154)] = 3213,
  [SMALL_STATE(155)] = 3226,
  [SMALL_STATE(156)] = 3239,
  [SMALL_STATE(157)] = 3250,
  [SMALL_STATE(158)] = 3261,
  [SMALL_STATE(159)] = 3272,
  [SMALL_STATE(160)] = 3283,
  [SMALL_STATE(161)] = 3296,
  [SMALL_STATE(162)] = 3309,
  [SMALL_STATE(163)] = 3322,
  [SMALL_STATE(164)] = 3335,
  [SMALL_STATE(165)] = 3348,
  [SMALL_STATE(166)] = 3361,
  [SMALL_STATE(167)] = 3374,
  [SMALL_STATE(168)] = 3387,
  [SMALL_STATE(169)] = 3400,
  [SMALL_STATE(170)] = 3413,
  [SMALL_STATE(171)] = 3426,
  [SMALL_STATE(172)] = 3439,
  [SMALL_STATE(173)] = 3452,
  [SMALL_STATE(174)] = 3465,
  [SMALL_STATE(175)] = 3478,
  [SMALL_STATE(176)] = 3489,
  [SMALL_STATE(177)] = 3500,
  [SMALL_STATE(178)] = 3513,
  [SMALL_STATE(179)] = 3526,
  [SMALL_STATE(180)] = 3539,
  [SMALL_STATE(181)] = 3552,
  [SMALL_STATE(182)] = 3563,
  [SMALL_STATE(183)] = 3574,
  [SMALL_STATE(184)] = 3585,
  [SMALL_STATE(185)] = 3598,
  [SMALL_STATE(186)] = 3611,
  [SMALL_STATE(187)] = 3621,
  [SMALL_STATE(188)] = 3631,
  [SMALL_STATE(189)] = 3641,
  [SMALL_STATE(190)] = 3651,
  [SMALL_STATE(191)] = 3661,
  [SMALL_STATE(192)] = 3671,
  [SMALL_STATE(193)] = 3681,
  [SMALL_STATE(194)] = 3691,
  [SMALL_STATE(195)] = 3701,
  [SMALL_STATE(196)] = 3711,
  [SMALL_STATE(197)] = 3721,
  [SMALL_STATE(198)] = 3731,
  [SMALL_STATE(199)] = 3741,
  [SMALL_STATE(200)] = 3751,
  [SMALL_STATE(201)] = 3761,
  [SMALL_STATE(202)] = 3771,
  [SMALL_STATE(203)] = 3781,
  [SMALL_STATE(204)] = 3791,
  [SMALL_STATE(205)] = 3801,
  [SMALL_STATE(206)] = 3811,
  [SMALL_STATE(207)] = 3821,
  [SMALL_STATE(208)] = 3831,
  [SMALL_STATE(209)] = 3841,
  [SMALL_STATE(210)] = 3851,
  [SMALL_STATE(211)] = 3861,
  [SMALL_STATE(212)] = 3871,
  [SMALL_STATE(213)] = 3881,
  [SMALL_STATE(214)] = 3891,
  [SMALL_STATE(215)] = 3901,
  [SMALL_STATE(216)] = 3911,
  [SMALL_STATE(217)] = 3921,
  [SMALL_STATE(218)] = 3931,
  [SMALL_STATE(219)] = 3941,
  [SMALL_STATE(220)] = 3951,
  [SMALL_STATE(221)] = 3961,
  [SMALL_STATE(222)] = 3971,
  [SMALL_STATE(223)] = 3981,
  [SMALL_STATE(224)] = 3991,
  [SMALL_STATE(225)] = 4001,
  [SMALL_STATE(226)] = 4011,
  [SMALL_STATE(227)] = 4021,
  [SMALL_STATE(228)] = 4031,
  [SMALL_STATE(229)] = 4041,
  [SMALL_STATE(230)] = 4051,
  [SMALL_STATE(231)] = 4061,
  [SMALL_STATE(232)] = 4071,
  [SMALL_STATE(233)] = 4081,
  [SMALL_STATE(234)] = 4091,
  [SMALL_STATE(235)] = 4101,
  [SMALL_STATE(236)] = 4111,
  [SMALL_STATE(237)] = 4121,
  [SMALL_STATE(238)] = 4131,
  [SMALL_STATE(239)] = 4141,
  [SMALL_STATE(240)] = 4151,
  [SMALL_STATE(241)] = 4161,
  [SMALL_STATE(242)] = 4171,
  [SMALL_STATE(243)] = 4181,
  [SMALL_STATE(244)] = 4191,
  [SMALL_STATE(245)] = 4201,
  [SMALL_STATE(246)] = 4211,
  [SMALL_STATE(247)] = 4221,
  [SMALL_STATE(248)] = 4231,
  [SMALL_STATE(249)] = 4241,
  [SMALL_STATE(250)] = 4251,
  [SMALL_STATE(251)] = 4261,
  [SMALL_STATE(252)] = 4271,
  [SMALL_STATE(253)] = 4281,
  [SMALL_STATE(254)] = 4291,
  [SMALL_STATE(255)] = 4301,
  [SMALL_STATE(256)] = 4311,
  [SMALL_STATE(257)] = 4321,
  [SMALL_STATE(258)] = 4331,
  [SMALL_STATE(259)] = 4341,
  [SMALL_STATE(260)] = 4351,
  [SMALL_STATE(261)] = 4361,
  [SMALL_STATE(262)] = 4371,
  [SMALL_STATE(263)] = 4381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(163),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(171),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(65),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(58),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(170),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(119),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(57),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(161),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(81),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(238),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(164),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(118),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(118),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(148),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(218),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(160),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(123),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(178),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(94),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(172),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(110),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(208),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(122),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(168),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(169),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(149),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(162),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(129),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(172),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(130),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(93),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(189),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 7),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(143),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(96),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 6),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(67),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [764] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 10),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 6),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 13),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 8),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
