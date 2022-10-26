#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 375
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 56
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 65

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym_user_name_or_group_token1 = 15,
  aux_sym_immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_value_token1 = 23,
  aux_sym_stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_DOLLAR2 = 34,
  anon_sym_LBRACE = 35,
  aux_sym_expansion_body_token1 = 36,
  anon_sym_RBRACE = 37,
  sym_variable = 38,
  aux_sym_spaced_env_pair_token1 = 39,
  aux_sym_env_key_token1 = 40,
  aux_sym_expose_port_token1 = 41,
  anon_sym_SLASHtcp = 42,
  anon_sym_SLASHudp = 43,
  aux_sym_label_pair_token1 = 44,
  aux_sym_image_name_token1 = 45,
  aux_sym_image_name_token2 = 46,
  aux_sym_image_tag_token1 = 47,
  anon_sym_AT = 48,
  aux_sym_image_digest_token1 = 49,
  anon_sym_DASH_DASH = 50,
  aux_sym_param_token1 = 51,
  aux_sym_param_token2 = 52,
  anon_sym_mount = 53,
  anon_sym_COMMA = 54,
  aux_sym_mount_param_param_token1 = 55,
  aux_sym_image_alias_token1 = 56,
  aux_sym_image_alias_token2 = 57,
  anon_sym_LBRACK = 58,
  anon_sym_COMMA2 = 59,
  anon_sym_RBRACK = 60,
  aux_sym_shell_fragment_token1 = 61,
  aux_sym_shell_fragment_token2 = 62,
  aux_sym_shell_fragment_token3 = 63,
  anon_sym_BSLASH_LF = 64,
  anon_sym_POUND = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_double_quoted_string_token1 = 67,
  aux_sym_unquoted_string_token1 = 68,
  anon_sym_BSLASH = 69,
  sym_escape_sequence = 70,
  sym_non_newline_whitespace = 71,
  sym_comment = 72,
  sym_semgrep_metavariable = 73,
  sym_semgrep_ellipsis = 74,
  sym_source_file = 75,
  sym_instruction = 76,
  sym_from_instruction = 77,
  sym_run_instruction = 78,
  sym_cmd_instruction = 79,
  sym_label_instruction = 80,
  sym_expose_instruction = 81,
  sym_env_instruction = 82,
  sym_add_instruction = 83,
  sym_copy_instruction = 84,
  sym_entrypoint_instruction = 85,
  sym_volume_instruction = 86,
  sym_user_instruction = 87,
  sym_user_name_or_group = 88,
  sym_immediate_user_name_or_group = 89,
  sym_immediate_user_name_or_group_fragment = 90,
  sym_workdir_instruction = 91,
  sym_arg_instruction = 92,
  sym_onbuild_instruction = 93,
  sym_stopsignal_instruction = 94,
  sym_stopsignal_value = 95,
  sym_healthcheck_instruction = 96,
  sym_shell_instruction = 97,
  sym_maintainer_instruction = 98,
  sym_cross_build_instruction = 99,
  sym_path = 100,
  sym_expansion = 101,
  sym_immediate_expansion = 102,
  sym_imm_expansion = 103,
  sym_expansion_body = 104,
  sym_env_pair = 105,
  sym_spaced_env_pair = 106,
  sym_env_key = 107,
  sym_expose_port = 108,
  sym_label_pair = 109,
  sym_image_spec = 110,
  sym_image_name = 111,
  sym_image_tag = 112,
  sym_image_digest = 113,
  sym_param = 114,
  sym_mount_param = 115,
  sym_mount_param_param = 116,
  sym_image_alias = 117,
  sym_string_array = 118,
  sym_shell_command = 119,
  sym_shell_fragment = 120,
  sym_line_continuation = 121,
  sym_required_line_continuation = 122,
  sym_comment_line = 123,
  sym_anon_comment = 124,
  sym_double_quoted_string = 125,
  sym_unquoted_string = 126,
  sym_array_element = 127,
  aux_sym_source_file_repeat1 = 128,
  aux_sym_run_instruction_repeat1 = 129,
  aux_sym_label_instruction_repeat1 = 130,
  aux_sym_expose_instruction_repeat1 = 131,
  aux_sym_env_instruction_repeat1 = 132,
  aux_sym_add_instruction_repeat1 = 133,
  aux_sym_volume_instruction_repeat1 = 134,
  aux_sym_user_name_or_group_repeat1 = 135,
  aux_sym_stopsignal_value_repeat1 = 136,
  aux_sym_healthcheck_instruction_repeat1 = 137,
  aux_sym_path_repeat1 = 138,
  aux_sym_image_name_repeat1 = 139,
  aux_sym_image_tag_repeat1 = 140,
  aux_sym_image_digest_repeat1 = 141,
  aux_sym_mount_param_repeat1 = 142,
  aux_sym_image_alias_repeat1 = 143,
  aux_sym_string_array_repeat1 = 144,
  aux_sym_shell_command_repeat1 = 145,
  aux_sym_shell_command_repeat2 = 146,
  aux_sym_shell_fragment_repeat1 = 147,
  aux_sym_double_quoted_string_repeat1 = 148,
  aux_sym_unquoted_string_repeat1 = 149,
  alias_sym_imm_tok_at = 150,
  alias_sym_imm_tok_bslashspace = 151,
  alias_sym_imm_tok_colon = 152,
  alias_sym_imm_tok_comma = 153,
  alias_sym_imm_tok_dollar = 154,
  alias_sym_imm_tok_eq = 155,
  alias_sym_imm_tok_lcurl = 156,
  alias_sym_imm_tok_mount = 157,
  alias_sym_imm_tok_pat_0c7fc22 = 158,
  alias_sym_imm_tok_pat_24a1611 = 159,
  alias_sym_imm_tok_pat_2b37705 = 160,
  alias_sym_imm_tok_pat_3d340f6 = 161,
  alias_sym_imm_tok_pat_441cd81 = 162,
  alias_sym_imm_tok_pat_589b0f8 = 163,
  alias_sym_imm_tok_pat_8713919 = 164,
  alias_sym_imm_tok_pat_9a14b5c = 165,
  alias_sym_imm_tok_pat_b295287 = 166,
  alias_sym_imm_tok_pat_bcfc287 = 167,
  alias_sym_imm_tok_pat_d2727a0 = 168,
  alias_sym_imm_tok_pat_f43f746 = 169,
  alias_sym_imm_tok_pat_f46f69d = 170,
  alias_sym_imm_tok_pat_f6e1de8 = 171,
  alias_sym_imm_tok_rcurl = 172,
  alias_sym_pat_1167a92 = 173,
  alias_sym_pat_18946a5 = 174,
  alias_sym_pat_217c202 = 175,
  alias_sym_pat_4128122 = 176,
  alias_sym_pat_441cd81 = 177,
  alias_sym_pat_4a2f38a = 178,
  alias_sym_pat_4de4cb9 = 179,
  alias_sym_pat_4fd4a56 = 180,
  alias_sym_pat_8165e5f = 181,
  alias_sym_pat_9a14b5c = 182,
  alias_sym_pat_add = 183,
  alias_sym_pat_arg = 184,
  alias_sym_pat_as = 185,
  alias_sym_pat_b1120d3 = 186,
  alias_sym_pat_b295287 = 187,
  alias_sym_pat_cmd = 188,
  alias_sym_pat_copy = 189,
  alias_sym_pat_dea634e = 190,
  alias_sym_pat_eda9032 = 191,
  alias_sym_pat_entr = 192,
  alias_sym_pat_env = 193,
  alias_sym_pat_expose = 194,
  alias_sym_pat_from = 195,
  alias_sym_pat_heal = 196,
  alias_sym_pat_label = 197,
  alias_sym_pat_main = 198,
  alias_sym_pat_onbu = 199,
  alias_sym_pat_run = 200,
  alias_sym_pat_shell = 201,
  alias_sym_pat_stop = 202,
  alias_sym_pat_user = 203,
  alias_sym_pat_volume = 204,
  alias_sym_pat_work = 205,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "from_instruction_token1",
  [aux_sym_from_instruction_token2] = "from_instruction_token2",
  [aux_sym_run_instruction_token1] = "run_instruction_token1",
  [aux_sym_cmd_instruction_token1] = "cmd_instruction_token1",
  [aux_sym_label_instruction_token1] = "label_instruction_token1",
  [aux_sym_expose_instruction_token1] = "expose_instruction_token1",
  [aux_sym_env_instruction_token1] = "env_instruction_token1",
  [aux_sym_add_instruction_token1] = "add_instruction_token1",
  [aux_sym_copy_instruction_token1] = "copy_instruction_token1",
  [aux_sym_entrypoint_instruction_token1] = "entrypoint_instruction_token1",
  [aux_sym_volume_instruction_token1] = "volume_instruction_token1",
  [aux_sym_user_instruction_token1] = "user_instruction_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_or_group_token1] = "user_name_or_group_token1",
  [aux_sym_immediate_user_name_or_group_fragment_token1] = "immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "workdir_instruction_token1",
  [aux_sym_arg_instruction_token1] = "arg_instruction_token1",
  [aux_sym_arg_instruction_token2] = "arg_instruction_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "onbuild_instruction_token1",
  [aux_sym_stopsignal_instruction_token1] = "stopsignal_instruction_token1",
  [aux_sym_stopsignal_value_token1] = "stopsignal_value_token1",
  [aux_sym_stopsignal_value_token2] = "stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "healthcheck_instruction_token1",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "shell_instruction_token1",
  [aux_sym_maintainer_instruction_token1] = "maintainer_instruction_token1",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "cross_build_instruction_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_body_token1] = "expansion_body_token1",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_spaced_env_pair_token1] = "spaced_env_pair_token1",
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
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
  [sym_immediate_user_name_or_group] = "immediate_user_name_or_group",
  [sym_immediate_user_name_or_group_fragment] = "immediate_user_name_or_group_fragment",
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
  [sym_immediate_expansion] = "immediate_expansion",
  [sym_imm_expansion] = "imm_expansion",
  [sym_expansion_body] = "expansion_body",
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
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
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
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
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
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_24a1611] = "imm_tok_pat_24a1611",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_b295287] = "imm_tok_pat_b295287",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_1167a92] = "pat_1167a92",
  [alias_sym_pat_18946a5] = "pat_18946a5",
  [alias_sym_pat_217c202] = "pat_217c202",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b1120d3] = "pat_b1120d3",
  [alias_sym_pat_b295287] = "pat_b295287",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_dea634e] = "pat_dea634e",
  [alias_sym_pat_eda9032] = "pat_eda9032",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
  [alias_sym_pat_from] = "pat_from",
  [alias_sym_pat_heal] = "pat_heal",
  [alias_sym_pat_label] = "pat_label",
  [alias_sym_pat_main] = "pat_main",
  [alias_sym_pat_onbu] = "pat_onbu",
  [alias_sym_pat_run] = "pat_run",
  [alias_sym_pat_shell] = "pat_shell",
  [alias_sym_pat_stop] = "pat_stop",
  [alias_sym_pat_user] = "pat_user",
  [alias_sym_pat_volume] = "pat_volume",
  [alias_sym_pat_work] = "pat_work",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_name_or_group_token1] = aux_sym_user_name_or_group_token1,
  [aux_sym_immediate_user_name_or_group_fragment_token1] = aux_sym_immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = aux_sym_arg_instruction_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_value_token1] = aux_sym_stopsignal_value_token1,
  [aux_sym_stopsignal_value_token2] = aux_sym_stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_body_token1] = aux_sym_expansion_body_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_spaced_env_pair_token1] = aux_sym_spaced_env_pair_token1,
  [aux_sym_env_key_token1] = aux_sym_env_key_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = aux_sym_label_pair_token1,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
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
  [sym_immediate_user_name_or_group] = sym_immediate_user_name_or_group,
  [sym_immediate_user_name_or_group_fragment] = sym_immediate_user_name_or_group_fragment,
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
  [sym_immediate_expansion] = sym_immediate_expansion,
  [sym_imm_expansion] = sym_imm_expansion,
  [sym_expansion_body] = sym_expansion_body,
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
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
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
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
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
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_24a1611] = alias_sym_imm_tok_pat_24a1611,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_b295287] = alias_sym_imm_tok_pat_b295287,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_1167a92] = alias_sym_pat_1167a92,
  [alias_sym_pat_18946a5] = alias_sym_pat_18946a5,
  [alias_sym_pat_217c202] = alias_sym_pat_217c202,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b1120d3] = alias_sym_pat_b1120d3,
  [alias_sym_pat_b295287] = alias_sym_pat_b295287,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_dea634e] = alias_sym_pat_dea634e,
  [alias_sym_pat_eda9032] = alias_sym_pat_eda9032,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
  [alias_sym_pat_from] = alias_sym_pat_from,
  [alias_sym_pat_heal] = alias_sym_pat_heal,
  [alias_sym_pat_label] = alias_sym_pat_label,
  [alias_sym_pat_main] = alias_sym_pat_main,
  [alias_sym_pat_onbu] = alias_sym_pat_onbu,
  [alias_sym_pat_run] = alias_sym_pat_run,
  [alias_sym_pat_shell] = alias_sym_pat_shell,
  [alias_sym_pat_stop] = alias_sym_pat_stop,
  [alias_sym_pat_user] = alias_sym_pat_user,
  [alias_sym_pat_volume] = alias_sym_pat_volume,
  [alias_sym_pat_work] = alias_sym_pat_work,
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
  [aux_sym_from_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_body_token1] = {
    .visible = false,
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
  [aux_sym_spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
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
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
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
  [sym_immediate_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group_fragment] = {
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
  [sym_immediate_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_body] = {
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
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
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
  [aux_sym_run_instruction_repeat1] = {
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
  [aux_sym_mount_param_repeat1] = {
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
  [alias_sym_imm_tok_at] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_bslashspace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_colon] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_comma] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_dollar] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_eq] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_lcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_mount] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_24a1611] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_b295287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f46f69d] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_18946a5] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_add] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_arg] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_as] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b1120d3] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b295287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_cmd] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_copy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_dea634e] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_eda9032] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_entr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_env] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_expose] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_heal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_main] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_onbu] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_run] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_shell] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_stop] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_user] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_volume] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_work] = {
    .visible = true,
    .named = true,
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
  [3] = {.index = 0, .length = 1},
  [18] = {.index = 1, .length = 1},
  [20] = {.index = 2, .length = 1},
  [21] = {.index = 2, .length = 1},
  [30] = {.index = 3, .length = 2},
  [31] = {.index = 5, .length = 2},
  [33] = {.index = 0, .length = 1},
  [41] = {.index = 7, .length = 1},
  [46] = {.index = 8, .length = 3},
  [50] = {.index = 11, .length = 2},
  [51] = {.index = 11, .length = 2},
  [52] = {.index = 13, .length = 2},
  [53] = {.index = 13, .length = 2},
  [54] = {.index = 15, .length = 2},
  [55] = {.index = 17, .length = 2},
  [56] = {.index = 17, .length = 2},
  [58] = {.index = 19, .length = 2},
  [60] = {.index = 21, .length = 1},
  [61] = {.index = 19, .length = 2},
  [62] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 3},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 3},
    {field_user, 1},
  [17] =
    {field_default, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
  [22] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_8165e5f,
  },
  [2] = {
    [0] = alias_sym_pat_from,
  },
  [4] = {
    [0] = alias_sym_pat_b1120d3,
  },
  [5] = {
    [0] = alias_sym_pat_dea634e,
  },
  [6] = {
    [0] = alias_sym_pat_eda9032,
  },
  [7] = {
    [0] = alias_sym_pat_run,
  },
  [8] = {
    [0] = alias_sym_pat_cmd,
  },
  [9] = {
    [0] = alias_sym_pat_label,
  },
  [10] = {
    [0] = alias_sym_pat_217c202,
  },
  [11] = {
    [0] = alias_sym_pat_expose,
  },
  [12] = {
    [0] = alias_sym_pat_18946a5,
  },
  [13] = {
    [0] = alias_sym_pat_env,
  },
  [14] = {
    [0] = alias_sym_pat_1167a92,
  },
  [15] = {
    [0] = alias_sym_pat_entr,
  },
  [16] = {
    [0] = alias_sym_pat_volume,
  },
  [17] = {
    [0] = alias_sym_pat_b295287,
  },
  [18] = {
    [0] = alias_sym_pat_user,
  },
  [19] = {
    [0] = alias_sym_pat_work,
  },
  [20] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [21] = {
    [0] = alias_sym_pat_arg,
  },
  [22] = {
    [0] = alias_sym_pat_onbu,
  },
  [23] = {
    [0] = alias_sym_pat_441cd81,
  },
  [24] = {
    [0] = alias_sym_pat_stop,
  },
  [25] = {
    [0] = alias_sym_pat_heal,
  },
  [26] = {
    [0] = alias_sym_pat_shell,
  },
  [27] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [28] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [29] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [32] = {
    [1] = alias_sym_pat_4fd4a56,
  },
  [33] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [34] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [35] = {
    [0] = alias_sym_pat_add,
  },
  [36] = {
    [0] = alias_sym_pat_copy,
  },
  [37] = {
    [0] = alias_sym_imm_tok_pat_b295287,
  },
  [38] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [39] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [40] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [41] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [42] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [43] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [44] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [45] = {
    [0] = alias_sym_imm_tok_at,
  },
  [47] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [48] = {
    [0] = alias_sym_imm_tok_pat_24a1611,
  },
  [49] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [50] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [51] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [52] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [53] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [54] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [55] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [57] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [58] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [59] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [60] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
  [61] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [62] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [63] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [64] = {
    [0] = alias_sym_imm_tok_comma,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == 'U') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(260);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(273);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(273);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(259);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(259);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(206);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(282);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(249);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 154:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(281);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == '[') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(281);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(216);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 165},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 34},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 165},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 36},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 165},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 165},
  [133] = {.lex_state = 35},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 21},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 30},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 22},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 39},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 22},
  [179] = {.lex_state = 22},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 23},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 16},
  [192] = {.lex_state = 23},
  [193] = {.lex_state = 23},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 30},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 23},
  [203] = {.lex_state = 52},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 52},
  [208] = {.lex_state = 165},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 52},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 52},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 165},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 52},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 15},
  [234] = {.lex_state = 52},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 52},
  [240] = {.lex_state = 34},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 52},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 11},
  [248] = {.lex_state = 11},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 11},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 34},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 14},
  [257] = {.lex_state = 14},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 34},
  [264] = {.lex_state = 165},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 165},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 35},
  [269] = {.lex_state = 165},
  [270] = {.lex_state = 165},
  [271] = {.lex_state = 165},
  [272] = {.lex_state = 165},
  [273] = {.lex_state = 56},
  [274] = {.lex_state = 18},
  [275] = {.lex_state = 23},
  [276] = {.lex_state = 165},
  [277] = {.lex_state = 165},
  [278] = {.lex_state = 48},
  [279] = {.lex_state = 56},
  [280] = {.lex_state = 18},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 23},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 44},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 23},
  [290] = {.lex_state = 23},
  [291] = {.lex_state = 48},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 56},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 165},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 55},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 203},
  [310] = {.lex_state = 165},
  [311] = {.lex_state = 57},
  [312] = {.lex_state = 165},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 203},
  [320] = {.lex_state = 165},
  [321] = {.lex_state = 165},
  [322] = {.lex_state = 58},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 34},
  [327] = {.lex_state = 165},
  [328] = {.lex_state = 58},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 165},
  [331] = {.lex_state = 58},
  [332] = {.lex_state = 165},
  [333] = {.lex_state = 58},
  [334] = {.lex_state = 165},
  [335] = {.lex_state = 203},
  [336] = {.lex_state = 165},
  [337] = {.lex_state = 165},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 165},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 55},
  [342] = {.lex_state = 165},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 5},
  [345] = {.lex_state = 165},
  [346] = {.lex_state = 165},
  [347] = {.lex_state = 165},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 165},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 165},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 165},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 165},
  [356] = {.lex_state = 165},
  [357] = {.lex_state = 57},
  [358] = {.lex_state = 165},
  [359] = {.lex_state = 57},
  [360] = {.lex_state = 165},
  [361] = {.lex_state = 57},
  [362] = {.lex_state = 165},
  [363] = {.lex_state = 57},
  [364] = {.lex_state = 57},
  [365] = {.lex_state = 57},
  [366] = {.lex_state = 57},
  [367] = {.lex_state = 57},
  [368] = {.lex_state = 57},
  [369] = {.lex_state = 57},
  [370] = {.lex_state = 57},
  [371] = {.lex_state = 57},
  [372] = {.lex_state = 57},
  [373] = {.lex_state = 55},
  [374] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_stopsignal_value_token2] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(300),
    [sym_instruction] = STATE(295),
    [sym_from_instruction] = STATE(299),
    [sym_run_instruction] = STATE(299),
    [sym_cmd_instruction] = STATE(299),
    [sym_label_instruction] = STATE(299),
    [sym_expose_instruction] = STATE(299),
    [sym_env_instruction] = STATE(299),
    [sym_add_instruction] = STATE(299),
    [sym_copy_instruction] = STATE(299),
    [sym_entrypoint_instruction] = STATE(299),
    [sym_volume_instruction] = STATE(299),
    [sym_user_instruction] = STATE(299),
    [sym_workdir_instruction] = STATE(299),
    [sym_arg_instruction] = STATE(299),
    [sym_onbuild_instruction] = STATE(299),
    [sym_stopsignal_instruction] = STATE(299),
    [sym_healthcheck_instruction] = STATE(299),
    [sym_shell_instruction] = STATE(299),
    [sym_maintainer_instruction] = STATE(299),
    [sym_cross_build_instruction] = STATE(299),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_add_instruction_token1] = ACTIONS(19),
    [aux_sym_copy_instruction_token1] = ACTIONS(21),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(23),
    [aux_sym_volume_instruction_token1] = ACTIONS(25),
    [aux_sym_user_instruction_token1] = ACTIONS(27),
    [aux_sym_workdir_instruction_token1] = ACTIONS(29),
    [aux_sym_arg_instruction_token1] = ACTIONS(31),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(33),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(35),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(37),
    [aux_sym_shell_instruction_token1] = ACTIONS(39),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(41),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(43),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
    [sym_semgrep_metavariable] = ACTIONS(47),
    [sym_semgrep_ellipsis] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_continuation,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(295), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(299), 19,
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
      aux_sym_from_instruction_token1,
    ACTIONS(56), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(59), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(62), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(65), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(68), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(71), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(74), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(77), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(80), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(83), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(86), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(89), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(92), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(95), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(98), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(101), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(104), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(107), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(110), 1,
      sym_comment,
    STATE(295), 1,
      sym_instruction,
    ACTIONS(113), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(299), 19,
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
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(4), 1,
      sym_line_continuation,
    STATE(305), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(299), 19,
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
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_comment,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [324] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_run_instruction_repeat1,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(302), 1,
      sym_anon_comment,
    STATE(49), 2,
      sym_param,
      sym_mount_param,
    STATE(306), 2,
      sym_string_array,
      sym_shell_command,
  [378] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(7), 1,
      sym_line_continuation,
    STATE(11), 1,
      aux_sym_run_instruction_repeat1,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(302), 1,
      sym_anon_comment,
    STATE(49), 2,
      sym_param,
      sym_mount_param,
    STATE(318), 2,
      sym_string_array,
      sym_shell_command,
  [432] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(130), 1,
      aux_sym_shell_fragment_token1,
    STATE(8), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(302), 1,
      sym_anon_comment,
    STATE(296), 2,
      sym_string_array,
      sym_shell_command,
  [476] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(130), 1,
      aux_sym_shell_fragment_token1,
    STATE(9), 1,
      sym_line_continuation,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(302), 1,
      sym_anon_comment,
    STATE(323), 2,
      sym_string_array,
      sym_shell_command,
  [520] = 12,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(91), 1,
      sym_imm_expansion,
    STATE(104), 1,
      sym_immediate_expansion,
    ACTIONS(136), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(241), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [559] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(146), 1,
      anon_sym_DASH_DASH,
    STATE(11), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(49), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(149), 3,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
    ACTIONS(151), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
  [584] = 10,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(159), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(161), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_line_continuation,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(44), 1,
      sym_immediate_expansion,
    STATE(73), 1,
      sym_imm_expansion,
    ACTIONS(157), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [617] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(44), 1,
      sym_immediate_expansion,
    STATE(73), 1,
      sym_imm_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(168), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [648] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(149), 1,
      sym_imm_expansion,
    STATE(181), 1,
      sym_immediate_expansion,
    STATE(350), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [680] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(15), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(189), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(184), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [702] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(191), 1,
      aux_sym_shell_fragment_token2,
    STATE(16), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(226), 1,
      sym_shell_fragment,
    STATE(302), 1,
      sym_anon_comment,
  [736] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(149), 1,
      sym_imm_expansion,
    STATE(181), 1,
      sym_immediate_expansion,
    STATE(304), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [768] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(195), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(197), 1,
      anon_sym_DOLLAR2,
    ACTIONS(199), 1,
      aux_sym_image_name_token2,
    STATE(18), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_image_name_repeat1,
    STATE(108), 1,
      sym_immediate_expansion,
    STATE(109), 1,
      sym_imm_expansion,
    ACTIONS(193), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [798] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      anon_sym_DOLLAR2,
    ACTIONS(199), 1,
      aux_sym_image_name_token2,
    ACTIONS(203), 1,
      aux_sym_from_instruction_token2,
    STATE(19), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_image_name_repeat1,
    STATE(108), 1,
      sym_immediate_expansion,
    STATE(109), 1,
      sym_imm_expansion,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [828] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(161), 1,
      anon_sym_BSLASH,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    ACTIONS(207), 1,
      aux_sym_unquoted_string_token1,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(44), 1,
      sym_immediate_expansion,
    STATE(73), 1,
      sym_imm_expansion,
    STATE(191), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [860] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(161), 1,
      anon_sym_BSLASH,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    ACTIONS(207), 1,
      aux_sym_unquoted_string_token1,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(44), 1,
      sym_immediate_expansion,
    STATE(73), 1,
      sym_imm_expansion,
    STATE(189), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [892] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(209), 1,
      anon_sym_DOLLAR2,
    ACTIONS(212), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(215), 1,
      anon_sym_BSLASH,
    STATE(91), 1,
      sym_imm_expansion,
    STATE(104), 1,
      sym_immediate_expansion,
    ACTIONS(168), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [922] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(191), 1,
      aux_sym_shell_fragment_token2,
    STATE(23), 1,
      sym_line_continuation,
    STATE(24), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(302), 1,
      sym_anon_comment,
    STATE(308), 1,
      sym_shell_fragment,
  [956] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(124), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(126), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(191), 1,
      aux_sym_shell_fragment_token2,
    STATE(24), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_shell_command_repeat1,
    STATE(138), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_comment_line,
    STATE(302), 1,
      sym_anon_comment,
    STATE(324), 1,
      sym_shell_fragment,
  [990] = 10,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(91), 1,
      sym_imm_expansion,
    STATE(104), 1,
      sym_immediate_expansion,
    ACTIONS(157), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [1022] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(222), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(218), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1046] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_mount_param_repeat1,
    STATE(27), 1,
      sym_line_continuation,
    ACTIONS(226), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(224), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1070] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      anon_sym_DOLLAR2,
    ACTIONS(199), 1,
      aux_sym_image_name_token2,
    ACTIONS(230), 1,
      aux_sym_from_instruction_token2,
    STATE(19), 1,
      aux_sym_image_name_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_immediate_expansion,
    STATE(109), 1,
      sym_imm_expansion,
    ACTIONS(228), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1100] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(149), 1,
      sym_imm_expansion,
    STATE(181), 1,
      sym_immediate_expansion,
    STATE(352), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [1132] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      anon_sym_DOLLAR2,
    ACTIONS(199), 1,
      aux_sym_image_name_token2,
    ACTIONS(234), 1,
      aux_sym_from_instruction_token2,
    STATE(18), 1,
      aux_sym_image_name_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(108), 1,
      sym_immediate_expansion,
    STATE(109), 1,
      sym_imm_expansion,
    ACTIONS(232), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1162] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(238), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(243), 1,
      aux_sym_image_name_token2,
    STATE(108), 1,
      sym_immediate_expansion,
    STATE(109), 1,
      sym_imm_expansion,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(236), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1190] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(32), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(246), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1219] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(254), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(252), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1238] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(258), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(256), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1257] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(35), 1,
      sym_line_continuation,
    STATE(38), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(260), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1286] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(268), 1,
      aux_sym_image_tag_token1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym_image_tag_repeat1,
    STATE(124), 1,
      sym_immediate_expansion,
    STATE(126), 1,
      sym_imm_expansion,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1315] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(272), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(275), 1,
      anon_sym_DOLLAR2,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1342] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(37), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(278), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1371] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(282), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(284), 1,
      anon_sym_DOLLAR2,
    ACTIONS(287), 1,
      aux_sym_image_tag_token1,
    STATE(124), 1,
      sym_immediate_expansion,
    STATE(126), 1,
      sym_imm_expansion,
    ACTIONS(280), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(39), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1398] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(32), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(290), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1427] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_path_token2,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(41), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(192), 1,
      sym_immediate_expansion,
    ACTIONS(292), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1453] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(42), 1,
      sym_line_continuation,
    STATE(58), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(354), 1,
      sym_immediate_user_name_or_group,
  [1481] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    STATE(43), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [1509] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(44), 1,
      sym_line_continuation,
    ACTIONS(306), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(308), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1527] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      aux_sym_path_token1,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      anon_sym_DASH_DASH,
    STATE(45), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    STATE(131), 1,
      aux_sym_add_instruction_repeat1,
    STATE(133), 1,
      sym_param,
    STATE(326), 1,
      sym_path,
  [1555] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(318), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1573] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(47), 1,
      sym_line_continuation,
    ACTIONS(320), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(322), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1591] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(48), 1,
      sym_line_continuation,
    ACTIONS(324), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(326), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1609] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(328), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1627] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_line_continuation,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [1655] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(338), 1,
      anon_sym_DOLLAR2,
    ACTIONS(340), 1,
      aux_sym_image_digest_token1,
    STATE(51), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_image_digest_repeat1,
    STATE(164), 1,
      sym_imm_expansion,
    STATE(172), 1,
      sym_immediate_expansion,
  [1683] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(346), 1,
      anon_sym_DOLLAR2,
    ACTIONS(349), 1,
      aux_sym_image_digest_token1,
    STATE(164), 1,
      sym_imm_expansion,
    STATE(172), 1,
      sym_immediate_expansion,
    STATE(52), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1709] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      anon_sym_DOLLAR2,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(360), 1,
      sym_escape_sequence,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
    STATE(53), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1735] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      aux_sym_path_token1,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      anon_sym_DASH_DASH,
    STATE(54), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    STATE(134), 1,
      aux_sym_add_instruction_repeat1,
    STATE(135), 1,
      sym_param,
    STATE(326), 1,
      sym_path,
  [1763] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_path_token2,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(55), 1,
      sym_line_continuation,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(192), 1,
      sym_immediate_expansion,
    ACTIONS(363), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1789] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(367), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1807] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(373), 1,
      aux_sym_expose_port_token1,
    ACTIONS(375), 1,
      sym_semgrep_ellipsis,
    STATE(57), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(162), 2,
      sym_expansion,
      sym_expose_port,
  [1833] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(377), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(158), 1,
      sym_immediate_expansion,
    STATE(174), 1,
      sym_imm_expansion,
  [1861] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_path_token2,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(59), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(192), 1,
      sym_immediate_expansion,
    ACTIONS(379), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1887] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_path_token2,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(60), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(192), 1,
      sym_immediate_expansion,
    ACTIONS(381), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1913] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [1941] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(387), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment_line,
    STATE(302), 1,
      sym_anon_comment,
    STATE(62), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(385), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1963] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    ACTIONS(395), 1,
      aux_sym_expose_port_token1,
    ACTIONS(398), 1,
      sym_semgrep_ellipsis,
    STATE(63), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(162), 2,
      sym_expansion,
      sym_expose_port,
  [1987] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [2015] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      aux_sym_path_token2,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    STATE(185), 1,
      sym_imm_expansion,
    STATE(192), 1,
      sym_immediate_expansion,
    ACTIONS(403), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2039] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(413), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(411), 4,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2057] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(149), 1,
      sym_imm_expansion,
    STATE(181), 1,
      sym_immediate_expansion,
  [2085] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(68), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [2113] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(419), 1,
      anon_sym_DASH_DASH,
    STATE(69), 1,
      sym_line_continuation,
    STATE(123), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(266), 1,
      sym_param,
    STATE(297), 1,
      sym_cmd_instruction,
    ACTIONS(417), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [2139] = 9,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(70), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_imm_expansion,
    STATE(179), 1,
      sym_immediate_expansion,
  [2167] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      anon_sym_DOLLAR2,
    ACTIONS(426), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(429), 1,
      anon_sym_BSLASH,
    STATE(149), 1,
      sym_imm_expansion,
    STATE(181), 1,
      sym_immediate_expansion,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [2193] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      aux_sym_image_name_token1,
    ACTIONS(436), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_expansion,
    STATE(72), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym_image_name,
    STATE(119), 1,
      sym_param,
    STATE(288), 1,
      sym_image_spec,
  [2221] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(440), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2239] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(444), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2257] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(448), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(446), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2274] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      aux_sym_label_pair_token1,
    ACTIONS(454), 1,
      sym_semgrep_metavariable,
    ACTIONS(456), 1,
      sym_semgrep_ellipsis,
    STATE(76), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_label_instruction_repeat1,
    STATE(173), 1,
      sym_label_pair,
  [2299] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      aux_sym_path_token2,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(462), 1,
      sym_non_newline_whitespace,
    STATE(77), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(230), 1,
      sym_immediate_expansion,
    STATE(235), 1,
      sym_imm_expansion,
  [2324] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym_expose_port_token1,
    ACTIONS(468), 1,
      sym_semgrep_ellipsis,
    STATE(57), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(78), 1,
      sym_line_continuation,
    STATE(162), 2,
      sym_expansion,
      sym_expose_port,
  [2347] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      aux_sym_env_key_token1,
    ACTIONS(474), 1,
      sym_semgrep_ellipsis,
    STATE(79), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_env_instruction_repeat1,
    STATE(236), 1,
      sym_env_pair,
    STATE(312), 1,
      sym_env_key,
  [2372] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      aux_sym_path_token2,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      sym_non_newline_whitespace,
    STATE(80), 1,
      sym_line_continuation,
    STATE(84), 1,
      aux_sym_path_repeat1,
    STATE(230), 1,
      sym_immediate_expansion,
    STATE(235), 1,
      sym_imm_expansion,
  [2397] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      aux_sym_env_key_token1,
    ACTIONS(480), 1,
      sym_semgrep_ellipsis,
    STATE(79), 1,
      aux_sym_env_instruction_repeat1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_env_pair,
    STATE(278), 1,
      sym_env_key,
    STATE(348), 1,
      sym_spaced_env_pair,
  [2422] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      aux_sym_path_token2,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(482), 1,
      sym_non_newline_whitespace,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(230), 1,
      sym_immediate_expansion,
    STATE(235), 1,
      sym_imm_expansion,
  [2447] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      anon_sym_DOLLAR2,
    ACTIONS(488), 1,
      aux_sym_image_alias_token2,
    STATE(83), 1,
      sym_line_continuation,
    STATE(117), 1,
      aux_sym_image_alias_repeat1,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(228), 1,
      sym_imm_expansion,
  [2472] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      aux_sym_path_token2,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(490), 1,
      sym_non_newline_whitespace,
    STATE(84), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(230), 1,
      sym_immediate_expansion,
    STATE(235), 1,
      sym_imm_expansion,
  [2497] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_DOLLAR2,
    ACTIONS(488), 1,
      aux_sym_image_alias_token2,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym_line_continuation,
    STATE(118), 1,
      aux_sym_image_alias_repeat1,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(228), 1,
      sym_imm_expansion,
  [2522] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      aux_sym_env_key_token1,
    ACTIONS(499), 1,
      sym_semgrep_ellipsis,
    STATE(236), 1,
      sym_env_pair,
    STATE(312), 1,
      sym_env_key,
    STATE(86), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2545] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(87), 1,
      sym_line_continuation,
    STATE(224), 1,
      sym_path,
    STATE(316), 1,
      sym_string_array,
  [2570] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(367), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2587] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(318), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2604] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(444), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2621] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(440), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2638] = 5,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(510), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(508), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [2657] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(442), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2674] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(512), 1,
      anon_sym_LF,
    ACTIONS(514), 1,
      aux_sym_label_pair_token1,
    ACTIONS(517), 1,
      sym_semgrep_metavariable,
    ACTIONS(520), 1,
      sym_semgrep_ellipsis,
    STATE(173), 1,
      sym_label_pair,
    STATE(94), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2697] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    STATE(95), 1,
      sym_line_continuation,
    STATE(112), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(251), 1,
      sym_imm_expansion,
  [2722] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      aux_sym_path_token2,
    ACTIONS(532), 1,
      anon_sym_DOLLAR2,
    ACTIONS(535), 1,
      sym_non_newline_whitespace,
    STATE(230), 1,
      sym_immediate_expansion,
    STATE(235), 1,
      sym_imm_expansion,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2745] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(97), 1,
      sym_line_continuation,
    STATE(100), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(251), 1,
      sym_imm_expansion,
  [2770] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      aux_sym_path_token2,
    ACTIONS(542), 1,
      anon_sym_DOLLAR2,
    STATE(200), 1,
      sym_immediate_expansion,
    STATE(259), 1,
      sym_imm_expansion,
    STATE(98), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2793] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(547), 1,
      anon_sym_DOLLAR2,
    STATE(98), 1,
      aux_sym_path_repeat1,
    STATE(99), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_immediate_expansion,
    STATE(259), 1,
      sym_imm_expansion,
  [2818] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    ACTIONS(549), 1,
      anon_sym_LF,
    STATE(100), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(251), 1,
      sym_imm_expansion,
  [2843] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(547), 1,
      anon_sym_DOLLAR2,
    STATE(98), 1,
      aux_sym_path_repeat1,
    STATE(101), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_immediate_expansion,
    STATE(259), 1,
      sym_imm_expansion,
  [2868] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(547), 1,
      anon_sym_DOLLAR2,
    STATE(99), 1,
      aux_sym_path_repeat1,
    STATE(102), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_immediate_expansion,
    STATE(259), 1,
      sym_imm_expansion,
  [2893] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_path_token2,
    ACTIONS(547), 1,
      anon_sym_DOLLAR2,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(103), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_immediate_expansion,
    STATE(259), 1,
      sym_imm_expansion,
  [2918] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(308), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2935] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(318), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2952] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(320), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(322), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2969] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(553), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(551), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2986] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(555), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3003] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3020] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(324), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH,
    ACTIONS(326), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3037] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym_line_continuation,
    STATE(199), 1,
      sym_image_tag,
    STATE(283), 1,
      sym_image_digest,
  [3062] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    ACTIONS(567), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(251), 1,
      sym_imm_expansion,
  [3087] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(574), 1,
      anon_sym_DOLLAR2,
    STATE(242), 1,
      sym_immediate_expansion,
    STATE(251), 1,
      sym_imm_expansion,
    STATE(113), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [3110] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(365), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3127] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym_array_element,
    STATE(269), 1,
      sym_double_quoted_string,
    ACTIONS(581), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3150] = 7,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      anon_sym_DOLLAR2,
    ACTIONS(588), 1,
      aux_sym_image_alias_token2,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(228), 1,
      sym_imm_expansion,
    STATE(116), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [3173] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_DOLLAR2,
    ACTIONS(488), 1,
      aux_sym_image_alias_token2,
    ACTIONS(591), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_image_alias_repeat1,
    STATE(117), 1,
      sym_line_continuation,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(228), 1,
      sym_imm_expansion,
  [3198] = 8,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_DOLLAR2,
    ACTIONS(488), 1,
      aux_sym_image_alias_token2,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_image_alias_repeat1,
    STATE(118), 1,
      sym_line_continuation,
    STATE(211), 1,
      sym_immediate_expansion,
    STATE(228), 1,
      sym_imm_expansion,
  [3223] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      aux_sym_image_name_token1,
    STATE(30), 1,
      sym_expansion,
    STATE(111), 1,
      sym_image_name,
    STATE(119), 1,
      sym_line_continuation,
    STATE(280), 1,
      sym_image_spec,
  [3245] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(338), 1,
      anon_sym_DOLLAR2,
    ACTIONS(340), 1,
      aux_sym_image_digest_token1,
    STATE(51), 1,
      aux_sym_image_digest_repeat1,
    STATE(120), 1,
      sym_line_continuation,
    STATE(164), 1,
      sym_imm_expansion,
    STATE(172), 1,
      sym_immediate_expansion,
  [3267] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(597), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(595), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3283] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(268), 1,
      aux_sym_image_tag_token1,
    STATE(36), 1,
      aux_sym_image_tag_repeat1,
    STATE(122), 1,
      sym_line_continuation,
    STATE(124), 1,
      sym_immediate_expansion,
    STATE(126), 1,
      sym_imm_expansion,
  [3305] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(419), 1,
      anon_sym_DASH_DASH,
    STATE(123), 1,
      sym_line_continuation,
    STATE(167), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(266), 1,
      sym_param,
    STATE(315), 1,
      sym_cmd_instruction,
  [3327] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(601), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(599), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3343] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(125), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_add_instruction_repeat1,
    STATE(265), 1,
      sym_path,
  [3365] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3381] = 6,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(608), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(611), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(614), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [3401] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(444), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3417] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(318), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3433] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(367), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3449] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(131), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_add_instruction_repeat1,
    STATE(289), 1,
      sym_path,
  [3471] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      sym_line_continuation,
    STATE(269), 1,
      sym_double_quoted_string,
    STATE(277), 1,
      sym_array_element,
    ACTIONS(581), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3491] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      aux_sym_path_token1,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(125), 1,
      aux_sym_add_instruction_repeat1,
    STATE(133), 1,
      sym_line_continuation,
    STATE(326), 1,
      sym_path,
  [3513] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(134), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_add_instruction_repeat1,
    STATE(285), 1,
      sym_path,
  [3535] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      aux_sym_path_token1,
    ACTIONS(312), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(135), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_add_instruction_repeat1,
    STATE(326), 1,
      sym_path,
  [3557] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(452), 1,
      aux_sym_label_pair_token1,
    ACTIONS(456), 1,
      sym_semgrep_ellipsis,
    ACTIONS(616), 1,
      sym_semgrep_metavariable,
    STATE(76), 1,
      aux_sym_label_instruction_repeat1,
    STATE(136), 1,
      sym_line_continuation,
    STATE(173), 1,
      sym_label_pair,
  [3579] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(137), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_add_instruction_repeat1,
    STATE(290), 1,
      sym_path,
  [3601] = 7,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(622), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(138), 1,
      sym_line_continuation,
  [3623] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      aux_sym_path_token1,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(326), 1,
      sym_path,
    STATE(139), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3643] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(440), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3658] = 3,
    ACTIONS(630), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(632), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [3671] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(634), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3684] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(365), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3697] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(636), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3710] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3723] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_expansion,
    STATE(146), 1,
      sym_line_continuation,
    STATE(282), 1,
      sym_user_name_or_group,
  [3742] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(644), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3757] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(442), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3770] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [3783] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      aux_sym_path_token1,
    ACTIONS(648), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym_expansion,
    STATE(150), 1,
      sym_line_continuation,
    STATE(307), 1,
      sym_path,
  [3802] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(367), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3817] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(318), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3832] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      aux_sym_from_instruction_token2,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3847] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      aux_sym_path_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    STATE(41), 1,
      sym_expansion,
    STATE(154), 1,
      sym_line_continuation,
    STATE(275), 1,
      sym_path,
  [3866] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(652), 1,
      anon_sym_DOLLAR,
    STATE(97), 1,
      sym_expansion,
    STATE(155), 1,
      sym_line_continuation,
    STATE(298), 1,
      sym_stopsignal_value,
  [3885] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(654), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3898] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(656), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3911] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(658), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3924] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_from_instruction_token2,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3939] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(444), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3954] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      aux_sym_from_instruction_token2,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3969] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(662), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3984] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(666), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3999] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      aux_sym_from_instruction_token2,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4014] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(365), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4027] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(446), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4040] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(670), 1,
      anon_sym_DASH_DASH,
    STATE(266), 1,
      sym_param,
    STATE(167), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [4057] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(316), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4070] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_DOLLAR2,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4085] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(442), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4098] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      aux_sym_from_instruction_token2,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(673), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4113] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_from_instruction_token2,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(677), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4128] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(683), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4143] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4156] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_DOLLAR,
    ACTIONS(687), 1,
      aux_sym_image_alias_token1,
    STATE(83), 1,
      sym_expansion,
    STATE(175), 1,
      sym_line_continuation,
    STATE(338), 1,
      sym_image_alias,
  [4175] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      anon_sym_DOLLAR2,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(448), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4190] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(318), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4205] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(689), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(691), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4220] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(693), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(695), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4235] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(699), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4250] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(306), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4263] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(320), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4276] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(324), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [4289] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(442), 1,
      anon_sym_DOLLAR2,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(444), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4304] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(440), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4319] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(703), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4334] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(367), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4349] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_DOLLAR,
    ACTIONS(687), 1,
      aux_sym_image_alias_token1,
    STATE(83), 1,
      sym_expansion,
    STATE(188), 1,
      sym_line_continuation,
    STATE(294), 1,
      sym_image_alias,
  [4368] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(707), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4383] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(711), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4398] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(715), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4413] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_DOLLAR2,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(717), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4428] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_DOLLAR2,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(721), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4443] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(448), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4458] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(316), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(318), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4473] = 3,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(727), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4486] = 3,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(731), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4499] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(733), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4512] = 6,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_AT,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      aux_sym_from_instruction_token2,
    STATE(199), 1,
      sym_line_continuation,
    STATE(274), 1,
      sym_image_digest,
  [4531] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      aux_sym_path_token2,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(719), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4545] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      sym_variable,
    STATE(176), 1,
      sym_expansion_body,
    STATE(201), 1,
      sym_line_continuation,
  [4561] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      sym_non_newline_whitespace,
    STATE(202), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4575] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      sym_variable,
    STATE(203), 1,
      sym_line_continuation,
    STATE(227), 1,
      sym_expansion_body,
  [4591] = 5,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_BSLASH_LF,
    STATE(23), 1,
      sym_required_line_continuation,
    STATE(204), 1,
      sym_line_continuation,
    STATE(232), 1,
      aux_sym_shell_command_repeat2,
  [4607] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
    ACTIONS(758), 1,
      sym_variable,
    STATE(148), 1,
      sym_expansion_body,
    STATE(205), 1,
      sym_line_continuation,
  [4623] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LBRACE,
    ACTIONS(762), 1,
      sym_variable,
    STATE(90), 1,
      sym_expansion_body,
    STATE(206), 1,
      sym_line_continuation,
  [4639] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      sym_variable,
    STATE(74), 1,
      sym_expansion_body,
    STATE(207), 1,
      sym_line_continuation,
  [4655] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_COMMA2,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_line_continuation,
    STATE(264), 1,
      aux_sym_string_array_repeat1,
  [4671] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
    ACTIONS(774), 1,
      sym_variable,
    STATE(160), 1,
      sym_expansion_body,
    STATE(209), 1,
      sym_line_continuation,
  [4687] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(776), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4699] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(778), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4711] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      sym_variable,
    STATE(212), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym_expansion_body,
  [4727] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      sym_variable,
    STATE(161), 1,
      sym_expansion_body,
    STATE(213), 1,
      sym_line_continuation,
  [4743] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      sym_variable,
    STATE(214), 1,
      sym_line_continuation,
    STATE(247), 1,
      sym_expansion_body,
  [4759] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(790), 1,
      sym_variable,
    STATE(128), 1,
      sym_expansion_body,
    STATE(215), 1,
      sym_line_continuation,
  [4775] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    ACTIONS(794), 1,
      sym_variable,
    STATE(216), 1,
      sym_line_continuation,
    STATE(252), 1,
      sym_expansion_body,
  [4791] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      sym_variable,
    STATE(217), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym_expansion_body,
  [4807] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym_variable,
    STATE(166), 1,
      sym_expansion_body,
    STATE(218), 1,
      sym_line_continuation,
  [4823] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    ACTIONS(794), 1,
      sym_variable,
    STATE(219), 1,
      sym_line_continuation,
    STATE(258), 1,
      sym_expansion_body,
  [4839] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym_variable,
    STATE(170), 1,
      sym_expansion_body,
    STATE(220), 1,
      sym_line_continuation,
  [4855] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    ACTIONS(802), 1,
      sym_variable,
    STATE(221), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym_expansion_body,
  [4871] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      anon_sym_COMMA2,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(222), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [4885] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    ACTIONS(741), 1,
      sym_variable,
    STATE(184), 1,
      sym_expansion_body,
    STATE(223), 1,
      sym_line_continuation,
  [4901] = 5,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym_non_newline_whitespace,
    STATE(224), 1,
      sym_line_continuation,
    STATE(231), 1,
      aux_sym_volume_instruction_repeat1,
  [4917] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
    ACTIONS(815), 1,
      sym_variable,
    STATE(194), 1,
      sym_expansion_body,
    STATE(225), 1,
      sym_line_continuation,
  [4933] = 5,
    ACTIONS(754), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      sym_line_continuation,
    STATE(255), 1,
      aux_sym_shell_command_repeat2,
  [4949] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4961] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4973] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      aux_sym_path_token2,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(723), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4987] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      aux_sym_path_token2,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(719), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5001] = 5,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      sym_non_newline_whitespace,
    ACTIONS(819), 1,
      anon_sym_LF,
    STATE(202), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(231), 1,
      sym_line_continuation,
  [5017] = 5,
    ACTIONS(754), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_required_line_continuation,
    STATE(232), 1,
      sym_line_continuation,
    STATE(260), 1,
      aux_sym_shell_command_repeat2,
  [5033] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
    ACTIONS(823), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5047] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LBRACE,
    ACTIONS(802), 1,
      sym_variable,
    STATE(234), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym_expansion_body,
  [5063] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      aux_sym_path_token2,
    STATE(235), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5077] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
    ACTIONS(827), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5091] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(237), 1,
      sym_line_continuation,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5103] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(238), 1,
      sym_line_continuation,
    ACTIONS(829), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5115] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(75), 1,
      sym_expansion_body,
    STATE(239), 1,
      sym_line_continuation,
  [5131] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      aux_sym_path_token2,
    STATE(240), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5145] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
    ACTIONS(837), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5159] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(839), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5171] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(446), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5183] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      sym_variable,
    STATE(93), 1,
      sym_expansion_body,
    STATE(244), 1,
      sym_line_continuation,
  [5199] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(245), 1,
      sym_line_continuation,
    ACTIONS(316), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5211] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(246), 1,
      sym_line_continuation,
    ACTIONS(365), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5223] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(247), 1,
      sym_line_continuation,
    ACTIONS(446), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5235] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(248), 1,
      sym_line_continuation,
    ACTIONS(316), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5247] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    STATE(249), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5261] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(250), 1,
      sym_line_continuation,
    ACTIONS(442), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5273] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(251), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5285] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    STATE(252), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5299] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_path_token2,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5313] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5327] = 5,
    ACTIONS(754), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_required_line_continuation,
    STATE(255), 1,
      sym_line_continuation,
    STATE(260), 1,
      aux_sym_shell_command_repeat2,
  [5343] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(721), 1,
      aux_sym_path_token2,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(723), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5357] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_path_token2,
    STATE(257), 1,
      sym_line_continuation,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5371] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      aux_sym_path_token2,
    STATE(258), 1,
      sym_line_continuation,
    ACTIONS(442), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5385] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 1,
      aux_sym_path_token2,
    STATE(259), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5399] = 4,
    ACTIONS(843), 1,
      anon_sym_LF,
    ACTIONS(845), 1,
      anon_sym_BSLASH_LF,
    STATE(23), 1,
      sym_required_line_continuation,
    STATE(260), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [5413] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(711), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5427] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
    ACTIONS(703), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5441] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    STATE(263), 1,
      sym_line_continuation,
    ACTIONS(365), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5455] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_COMMA2,
    ACTIONS(848), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_string_array_repeat1,
    STATE(264), 1,
      sym_line_continuation,
  [5471] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      anon_sym_LF,
    ACTIONS(852), 1,
      sym_non_newline_whitespace,
    STATE(265), 1,
      sym_line_continuation,
  [5484] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(854), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5495] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_image_name_token1,
    STATE(267), 1,
      sym_line_continuation,
  [5508] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      aux_sym_path_token1,
    STATE(268), 1,
      sym_line_continuation,
  [5521] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(269), 1,
      sym_line_continuation,
    ACTIONS(856), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5532] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(270), 1,
      sym_line_continuation,
    STATE(329), 1,
      sym_string_array,
  [5545] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(271), 1,
      sym_line_continuation,
    ACTIONS(701), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5556] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(272), 1,
      sym_line_continuation,
    ACTIONS(709), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5567] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
    STATE(273), 1,
      sym_line_continuation,
  [5580] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      anon_sym_LF,
    ACTIONS(862), 1,
      aux_sym_from_instruction_token2,
    STATE(274), 1,
      sym_line_continuation,
  [5593] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(275), 1,
      sym_line_continuation,
    ACTIONS(743), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [5604] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(276), 1,
      sym_line_continuation,
    ACTIONS(411), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5615] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(277), 1,
      sym_line_continuation,
    ACTIONS(807), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5626] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_EQ,
    ACTIONS(866), 1,
      aux_sym_spaced_env_pair_token1,
    STATE(278), 1,
      sym_line_continuation,
  [5639] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      aux_sym_mount_param_param_token1,
    STATE(33), 1,
      sym_mount_param_param,
    STATE(279), 1,
      sym_line_continuation,
  [5652] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      anon_sym_LF,
    ACTIONS(870), 1,
      aux_sym_from_instruction_token2,
    STATE(280), 1,
      sym_line_continuation,
  [5665] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(872), 1,
      aux_sym_param_token1,
    ACTIONS(874), 1,
      anon_sym_mount,
    STATE(281), 1,
      sym_line_continuation,
  [5678] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_line_continuation,
  [5691] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      anon_sym_LF,
    ACTIONS(882), 1,
      aux_sym_from_instruction_token2,
    STATE(283), 1,
      sym_line_continuation,
  [5704] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      aux_sym_path_token1,
    ACTIONS(886), 1,
      anon_sym_DOLLAR,
    STATE(284), 1,
      sym_line_continuation,
  [5717] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_non_newline_whitespace,
    ACTIONS(888), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_line_continuation,
  [5730] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(890), 1,
      anon_sym_LF,
    ACTIONS(892), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_line_continuation,
  [5743] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(896), 1,
      sym_semgrep_metavariable,
    STATE(287), 1,
      sym_line_continuation,
  [5756] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(898), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      aux_sym_from_instruction_token2,
    STATE(288), 1,
      sym_line_continuation,
  [5769] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_non_newline_whitespace,
    ACTIONS(902), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5782] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      sym_non_newline_whitespace,
    ACTIONS(904), 1,
      anon_sym_LF,
    STATE(290), 1,
      sym_line_continuation,
  [5795] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    STATE(291), 1,
      sym_line_continuation,
    ACTIONS(906), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [5806] = 4,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(908), 1,
      anon_sym_LF,
    ACTIONS(910), 1,
      anon_sym_EQ,
    STATE(292), 1,
      sym_line_continuation,
  [5819] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      aux_sym_mount_param_param_token1,
    STATE(293), 1,
      sym_line_continuation,
  [5829] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5839] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      anon_sym_LF,
    STATE(295), 1,
      sym_line_continuation,
  [5849] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(918), 1,
      anon_sym_LF,
    STATE(296), 1,
      sym_line_continuation,
  [5859] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_LF,
    STATE(297), 1,
      sym_line_continuation,
  [5869] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(922), 1,
      anon_sym_LF,
    STATE(298), 1,
      sym_line_continuation,
  [5879] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      anon_sym_LF,
    STATE(299), 1,
      sym_line_continuation,
  [5889] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    STATE(300), 1,
      sym_line_continuation,
  [5899] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(301), 1,
      sym_line_continuation,
  [5909] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(930), 1,
      anon_sym_LF,
    STATE(302), 1,
      sym_line_continuation,
  [5919] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(932), 1,
      aux_sym_param_token1,
    STATE(303), 1,
      sym_line_continuation,
  [5929] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_line_continuation,
  [5939] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(936), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_line_continuation,
  [5949] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(938), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [5959] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5969] = 3,
    ACTIONS(843), 1,
      anon_sym_LF,
    ACTIONS(942), 1,
      anon_sym_BSLASH_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5979] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(309), 1,
      sym_line_continuation,
  [5989] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_line_continuation,
  [5999] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      aux_sym_expansion_body_token1,
    STATE(311), 1,
      sym_line_continuation,
  [6009] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_EQ,
    STATE(312), 1,
      sym_line_continuation,
  [6019] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      anon_sym_LF,
    STATE(313), 1,
      sym_line_continuation,
  [6029] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(950), 1,
      anon_sym_LF,
    STATE(314), 1,
      sym_line_continuation,
  [6039] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      anon_sym_LF,
    STATE(315), 1,
      sym_line_continuation,
  [6049] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_line_continuation,
  [6059] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(956), 1,
      anon_sym_LF,
    STATE(317), 1,
      sym_line_continuation,
  [6069] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(958), 1,
      anon_sym_LF,
    STATE(318), 1,
      sym_line_continuation,
  [6079] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(960), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(319), 1,
      sym_line_continuation,
  [6089] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(962), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym_line_continuation,
  [6099] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(964), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      sym_line_continuation,
  [6109] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(966), 1,
      aux_sym_param_token2,
    STATE(322), 1,
      sym_line_continuation,
  [6119] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(968), 1,
      anon_sym_LF,
    STATE(323), 1,
      sym_line_continuation,
  [6129] = 3,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      anon_sym_BSLASH_LF,
    STATE(324), 1,
      sym_line_continuation,
  [6139] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(974), 1,
      anon_sym_LF,
    STATE(325), 1,
      sym_line_continuation,
  [6149] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(976), 1,
      sym_non_newline_whitespace,
    STATE(326), 1,
      sym_line_continuation,
  [6159] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      sym_line_continuation,
  [6169] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(980), 1,
      aux_sym_param_token2,
    STATE(328), 1,
      sym_line_continuation,
  [6179] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(982), 1,
      anon_sym_LF,
    STATE(329), 1,
      sym_line_continuation,
  [6189] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_line_continuation,
  [6199] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(986), 1,
      aux_sym_param_token2,
    STATE(331), 1,
      sym_line_continuation,
  [6209] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym_line_continuation,
  [6219] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(990), 1,
      aux_sym_param_token2,
    STATE(333), 1,
      sym_line_continuation,
  [6229] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(992), 1,
      anon_sym_EQ,
    STATE(334), 1,
      sym_line_continuation,
  [6239] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(994), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(335), 1,
      sym_line_continuation,
  [6249] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym_line_continuation,
  [6259] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(998), 1,
      anon_sym_EQ,
    STATE(337), 1,
      sym_line_continuation,
  [6269] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1000), 1,
      anon_sym_LF,
    STATE(338), 1,
      sym_line_continuation,
  [6279] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1002), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      sym_line_continuation,
  [6289] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_line_continuation,
  [6299] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1004), 1,
      aux_sym_param_token1,
    STATE(341), 1,
      sym_line_continuation,
  [6309] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      sym_line_continuation,
  [6319] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1008), 1,
      anon_sym_LF,
    STATE(343), 1,
      sym_line_continuation,
  [6329] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1010), 1,
      anon_sym_LF,
    STATE(344), 1,
      sym_line_continuation,
  [6339] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      sym_line_continuation,
  [6349] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1014), 1,
      anon_sym_EQ,
    STATE(346), 1,
      sym_line_continuation,
  [6359] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_line_continuation,
  [6369] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(348), 1,
      sym_line_continuation,
  [6379] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
    STATE(349), 1,
      sym_line_continuation,
  [6389] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1020), 1,
      anon_sym_LF,
    STATE(350), 1,
      sym_line_continuation,
  [6399] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      sym_line_continuation,
  [6409] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1024), 1,
      anon_sym_LF,
    STATE(352), 1,
      sym_line_continuation,
  [6419] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      sym_line_continuation,
  [6429] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1028), 1,
      anon_sym_LF,
    STATE(354), 1,
      sym_line_continuation,
  [6439] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      sym_line_continuation,
  [6449] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      sym_line_continuation,
  [6459] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1034), 1,
      aux_sym_expansion_body_token1,
    STATE(357), 1,
      sym_line_continuation,
  [6469] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    STATE(358), 1,
      sym_line_continuation,
  [6479] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1038), 1,
      aux_sym_expansion_body_token1,
    STATE(359), 1,
      sym_line_continuation,
  [6489] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1040), 1,
      anon_sym_EQ,
    STATE(360), 1,
      sym_line_continuation,
  [6499] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1042), 1,
      aux_sym_expansion_body_token1,
    STATE(361), 1,
      sym_line_continuation,
  [6509] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1044), 1,
      anon_sym_EQ,
    STATE(362), 1,
      sym_line_continuation,
  [6519] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1046), 1,
      aux_sym_expansion_body_token1,
    STATE(363), 1,
      sym_line_continuation,
  [6529] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1048), 1,
      aux_sym_expansion_body_token1,
    STATE(364), 1,
      sym_line_continuation,
  [6539] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1050), 1,
      aux_sym_expansion_body_token1,
    STATE(365), 1,
      sym_line_continuation,
  [6549] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1052), 1,
      aux_sym_expansion_body_token1,
    STATE(366), 1,
      sym_line_continuation,
  [6559] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1054), 1,
      aux_sym_expansion_body_token1,
    STATE(367), 1,
      sym_line_continuation,
  [6569] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1056), 1,
      aux_sym_expansion_body_token1,
    STATE(368), 1,
      sym_line_continuation,
  [6579] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1058), 1,
      aux_sym_expansion_body_token1,
    STATE(369), 1,
      sym_line_continuation,
  [6589] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1060), 1,
      aux_sym_expansion_body_token1,
    STATE(370), 1,
      sym_line_continuation,
  [6599] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1062), 1,
      aux_sym_expansion_body_token1,
    STATE(371), 1,
      sym_line_continuation,
  [6609] = 3,
    ACTIONS(138), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1064), 1,
      aux_sym_expansion_body_token1,
    STATE(372), 1,
      sym_line_continuation,
  [6619] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1066), 1,
      aux_sym_param_token1,
    STATE(373), 1,
      sym_line_continuation,
  [6629] = 1,
    ACTIONS(1068), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 476,
  [SMALL_STATE(10)] = 520,
  [SMALL_STATE(11)] = 559,
  [SMALL_STATE(12)] = 584,
  [SMALL_STATE(13)] = 617,
  [SMALL_STATE(14)] = 648,
  [SMALL_STATE(15)] = 680,
  [SMALL_STATE(16)] = 702,
  [SMALL_STATE(17)] = 736,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 798,
  [SMALL_STATE(20)] = 828,
  [SMALL_STATE(21)] = 860,
  [SMALL_STATE(22)] = 892,
  [SMALL_STATE(23)] = 922,
  [SMALL_STATE(24)] = 956,
  [SMALL_STATE(25)] = 990,
  [SMALL_STATE(26)] = 1022,
  [SMALL_STATE(27)] = 1046,
  [SMALL_STATE(28)] = 1070,
  [SMALL_STATE(29)] = 1100,
  [SMALL_STATE(30)] = 1132,
  [SMALL_STATE(31)] = 1162,
  [SMALL_STATE(32)] = 1190,
  [SMALL_STATE(33)] = 1219,
  [SMALL_STATE(34)] = 1238,
  [SMALL_STATE(35)] = 1257,
  [SMALL_STATE(36)] = 1286,
  [SMALL_STATE(37)] = 1315,
  [SMALL_STATE(38)] = 1342,
  [SMALL_STATE(39)] = 1371,
  [SMALL_STATE(40)] = 1398,
  [SMALL_STATE(41)] = 1427,
  [SMALL_STATE(42)] = 1453,
  [SMALL_STATE(43)] = 1481,
  [SMALL_STATE(44)] = 1509,
  [SMALL_STATE(45)] = 1527,
  [SMALL_STATE(46)] = 1555,
  [SMALL_STATE(47)] = 1573,
  [SMALL_STATE(48)] = 1591,
  [SMALL_STATE(49)] = 1609,
  [SMALL_STATE(50)] = 1627,
  [SMALL_STATE(51)] = 1655,
  [SMALL_STATE(52)] = 1683,
  [SMALL_STATE(53)] = 1709,
  [SMALL_STATE(54)] = 1735,
  [SMALL_STATE(55)] = 1763,
  [SMALL_STATE(56)] = 1789,
  [SMALL_STATE(57)] = 1807,
  [SMALL_STATE(58)] = 1833,
  [SMALL_STATE(59)] = 1861,
  [SMALL_STATE(60)] = 1887,
  [SMALL_STATE(61)] = 1913,
  [SMALL_STATE(62)] = 1941,
  [SMALL_STATE(63)] = 1963,
  [SMALL_STATE(64)] = 1987,
  [SMALL_STATE(65)] = 2015,
  [SMALL_STATE(66)] = 2039,
  [SMALL_STATE(67)] = 2057,
  [SMALL_STATE(68)] = 2085,
  [SMALL_STATE(69)] = 2113,
  [SMALL_STATE(70)] = 2139,
  [SMALL_STATE(71)] = 2167,
  [SMALL_STATE(72)] = 2193,
  [SMALL_STATE(73)] = 2221,
  [SMALL_STATE(74)] = 2239,
  [SMALL_STATE(75)] = 2257,
  [SMALL_STATE(76)] = 2274,
  [SMALL_STATE(77)] = 2299,
  [SMALL_STATE(78)] = 2324,
  [SMALL_STATE(79)] = 2347,
  [SMALL_STATE(80)] = 2372,
  [SMALL_STATE(81)] = 2397,
  [SMALL_STATE(82)] = 2422,
  [SMALL_STATE(83)] = 2447,
  [SMALL_STATE(84)] = 2472,
  [SMALL_STATE(85)] = 2497,
  [SMALL_STATE(86)] = 2522,
  [SMALL_STATE(87)] = 2545,
  [SMALL_STATE(88)] = 2570,
  [SMALL_STATE(89)] = 2587,
  [SMALL_STATE(90)] = 2604,
  [SMALL_STATE(91)] = 2621,
  [SMALL_STATE(92)] = 2638,
  [SMALL_STATE(93)] = 2657,
  [SMALL_STATE(94)] = 2674,
  [SMALL_STATE(95)] = 2697,
  [SMALL_STATE(96)] = 2722,
  [SMALL_STATE(97)] = 2745,
  [SMALL_STATE(98)] = 2770,
  [SMALL_STATE(99)] = 2793,
  [SMALL_STATE(100)] = 2818,
  [SMALL_STATE(101)] = 2843,
  [SMALL_STATE(102)] = 2868,
  [SMALL_STATE(103)] = 2893,
  [SMALL_STATE(104)] = 2918,
  [SMALL_STATE(105)] = 2935,
  [SMALL_STATE(106)] = 2952,
  [SMALL_STATE(107)] = 2969,
  [SMALL_STATE(108)] = 2986,
  [SMALL_STATE(109)] = 3003,
  [SMALL_STATE(110)] = 3020,
  [SMALL_STATE(111)] = 3037,
  [SMALL_STATE(112)] = 3062,
  [SMALL_STATE(113)] = 3087,
  [SMALL_STATE(114)] = 3110,
  [SMALL_STATE(115)] = 3127,
  [SMALL_STATE(116)] = 3150,
  [SMALL_STATE(117)] = 3173,
  [SMALL_STATE(118)] = 3198,
  [SMALL_STATE(119)] = 3223,
  [SMALL_STATE(120)] = 3245,
  [SMALL_STATE(121)] = 3267,
  [SMALL_STATE(122)] = 3283,
  [SMALL_STATE(123)] = 3305,
  [SMALL_STATE(124)] = 3327,
  [SMALL_STATE(125)] = 3343,
  [SMALL_STATE(126)] = 3365,
  [SMALL_STATE(127)] = 3381,
  [SMALL_STATE(128)] = 3401,
  [SMALL_STATE(129)] = 3417,
  [SMALL_STATE(130)] = 3433,
  [SMALL_STATE(131)] = 3449,
  [SMALL_STATE(132)] = 3471,
  [SMALL_STATE(133)] = 3491,
  [SMALL_STATE(134)] = 3513,
  [SMALL_STATE(135)] = 3535,
  [SMALL_STATE(136)] = 3557,
  [SMALL_STATE(137)] = 3579,
  [SMALL_STATE(138)] = 3601,
  [SMALL_STATE(139)] = 3623,
  [SMALL_STATE(140)] = 3643,
  [SMALL_STATE(141)] = 3658,
  [SMALL_STATE(142)] = 3671,
  [SMALL_STATE(143)] = 3684,
  [SMALL_STATE(144)] = 3697,
  [SMALL_STATE(145)] = 3710,
  [SMALL_STATE(146)] = 3723,
  [SMALL_STATE(147)] = 3742,
  [SMALL_STATE(148)] = 3757,
  [SMALL_STATE(149)] = 3770,
  [SMALL_STATE(150)] = 3783,
  [SMALL_STATE(151)] = 3802,
  [SMALL_STATE(152)] = 3817,
  [SMALL_STATE(153)] = 3832,
  [SMALL_STATE(154)] = 3847,
  [SMALL_STATE(155)] = 3866,
  [SMALL_STATE(156)] = 3885,
  [SMALL_STATE(157)] = 3898,
  [SMALL_STATE(158)] = 3911,
  [SMALL_STATE(159)] = 3924,
  [SMALL_STATE(160)] = 3939,
  [SMALL_STATE(161)] = 3954,
  [SMALL_STATE(162)] = 3969,
  [SMALL_STATE(163)] = 3984,
  [SMALL_STATE(164)] = 3999,
  [SMALL_STATE(165)] = 4014,
  [SMALL_STATE(166)] = 4027,
  [SMALL_STATE(167)] = 4040,
  [SMALL_STATE(168)] = 4057,
  [SMALL_STATE(169)] = 4070,
  [SMALL_STATE(170)] = 4085,
  [SMALL_STATE(171)] = 4098,
  [SMALL_STATE(172)] = 4113,
  [SMALL_STATE(173)] = 4128,
  [SMALL_STATE(174)] = 4143,
  [SMALL_STATE(175)] = 4156,
  [SMALL_STATE(176)] = 4175,
  [SMALL_STATE(177)] = 4190,
  [SMALL_STATE(178)] = 4205,
  [SMALL_STATE(179)] = 4220,
  [SMALL_STATE(180)] = 4235,
  [SMALL_STATE(181)] = 4250,
  [SMALL_STATE(182)] = 4263,
  [SMALL_STATE(183)] = 4276,
  [SMALL_STATE(184)] = 4289,
  [SMALL_STATE(185)] = 4304,
  [SMALL_STATE(186)] = 4319,
  [SMALL_STATE(187)] = 4334,
  [SMALL_STATE(188)] = 4349,
  [SMALL_STATE(189)] = 4368,
  [SMALL_STATE(190)] = 4383,
  [SMALL_STATE(191)] = 4398,
  [SMALL_STATE(192)] = 4413,
  [SMALL_STATE(193)] = 4428,
  [SMALL_STATE(194)] = 4443,
  [SMALL_STATE(195)] = 4458,
  [SMALL_STATE(196)] = 4473,
  [SMALL_STATE(197)] = 4486,
  [SMALL_STATE(198)] = 4499,
  [SMALL_STATE(199)] = 4512,
  [SMALL_STATE(200)] = 4531,
  [SMALL_STATE(201)] = 4545,
  [SMALL_STATE(202)] = 4561,
  [SMALL_STATE(203)] = 4575,
  [SMALL_STATE(204)] = 4591,
  [SMALL_STATE(205)] = 4607,
  [SMALL_STATE(206)] = 4623,
  [SMALL_STATE(207)] = 4639,
  [SMALL_STATE(208)] = 4655,
  [SMALL_STATE(209)] = 4671,
  [SMALL_STATE(210)] = 4687,
  [SMALL_STATE(211)] = 4699,
  [SMALL_STATE(212)] = 4711,
  [SMALL_STATE(213)] = 4727,
  [SMALL_STATE(214)] = 4743,
  [SMALL_STATE(215)] = 4759,
  [SMALL_STATE(216)] = 4775,
  [SMALL_STATE(217)] = 4791,
  [SMALL_STATE(218)] = 4807,
  [SMALL_STATE(219)] = 4823,
  [SMALL_STATE(220)] = 4839,
  [SMALL_STATE(221)] = 4855,
  [SMALL_STATE(222)] = 4871,
  [SMALL_STATE(223)] = 4885,
  [SMALL_STATE(224)] = 4901,
  [SMALL_STATE(225)] = 4917,
  [SMALL_STATE(226)] = 4933,
  [SMALL_STATE(227)] = 4949,
  [SMALL_STATE(228)] = 4961,
  [SMALL_STATE(229)] = 4973,
  [SMALL_STATE(230)] = 4987,
  [SMALL_STATE(231)] = 5001,
  [SMALL_STATE(232)] = 5017,
  [SMALL_STATE(233)] = 5033,
  [SMALL_STATE(234)] = 5047,
  [SMALL_STATE(235)] = 5063,
  [SMALL_STATE(236)] = 5077,
  [SMALL_STATE(237)] = 5091,
  [SMALL_STATE(238)] = 5103,
  [SMALL_STATE(239)] = 5115,
  [SMALL_STATE(240)] = 5131,
  [SMALL_STATE(241)] = 5145,
  [SMALL_STATE(242)] = 5159,
  [SMALL_STATE(243)] = 5171,
  [SMALL_STATE(244)] = 5183,
  [SMALL_STATE(245)] = 5199,
  [SMALL_STATE(246)] = 5211,
  [SMALL_STATE(247)] = 5223,
  [SMALL_STATE(248)] = 5235,
  [SMALL_STATE(249)] = 5247,
  [SMALL_STATE(250)] = 5261,
  [SMALL_STATE(251)] = 5273,
  [SMALL_STATE(252)] = 5285,
  [SMALL_STATE(253)] = 5299,
  [SMALL_STATE(254)] = 5313,
  [SMALL_STATE(255)] = 5327,
  [SMALL_STATE(256)] = 5343,
  [SMALL_STATE(257)] = 5357,
  [SMALL_STATE(258)] = 5371,
  [SMALL_STATE(259)] = 5385,
  [SMALL_STATE(260)] = 5399,
  [SMALL_STATE(261)] = 5413,
  [SMALL_STATE(262)] = 5427,
  [SMALL_STATE(263)] = 5441,
  [SMALL_STATE(264)] = 5455,
  [SMALL_STATE(265)] = 5471,
  [SMALL_STATE(266)] = 5484,
  [SMALL_STATE(267)] = 5495,
  [SMALL_STATE(268)] = 5508,
  [SMALL_STATE(269)] = 5521,
  [SMALL_STATE(270)] = 5532,
  [SMALL_STATE(271)] = 5545,
  [SMALL_STATE(272)] = 5556,
  [SMALL_STATE(273)] = 5567,
  [SMALL_STATE(274)] = 5580,
  [SMALL_STATE(275)] = 5593,
  [SMALL_STATE(276)] = 5604,
  [SMALL_STATE(277)] = 5615,
  [SMALL_STATE(278)] = 5626,
  [SMALL_STATE(279)] = 5639,
  [SMALL_STATE(280)] = 5652,
  [SMALL_STATE(281)] = 5665,
  [SMALL_STATE(282)] = 5678,
  [SMALL_STATE(283)] = 5691,
  [SMALL_STATE(284)] = 5704,
  [SMALL_STATE(285)] = 5717,
  [SMALL_STATE(286)] = 5730,
  [SMALL_STATE(287)] = 5743,
  [SMALL_STATE(288)] = 5756,
  [SMALL_STATE(289)] = 5769,
  [SMALL_STATE(290)] = 5782,
  [SMALL_STATE(291)] = 5795,
  [SMALL_STATE(292)] = 5806,
  [SMALL_STATE(293)] = 5819,
  [SMALL_STATE(294)] = 5829,
  [SMALL_STATE(295)] = 5839,
  [SMALL_STATE(296)] = 5849,
  [SMALL_STATE(297)] = 5859,
  [SMALL_STATE(298)] = 5869,
  [SMALL_STATE(299)] = 5879,
  [SMALL_STATE(300)] = 5889,
  [SMALL_STATE(301)] = 5899,
  [SMALL_STATE(302)] = 5909,
  [SMALL_STATE(303)] = 5919,
  [SMALL_STATE(304)] = 5929,
  [SMALL_STATE(305)] = 5939,
  [SMALL_STATE(306)] = 5949,
  [SMALL_STATE(307)] = 5959,
  [SMALL_STATE(308)] = 5969,
  [SMALL_STATE(309)] = 5979,
  [SMALL_STATE(310)] = 5989,
  [SMALL_STATE(311)] = 5999,
  [SMALL_STATE(312)] = 6009,
  [SMALL_STATE(313)] = 6019,
  [SMALL_STATE(314)] = 6029,
  [SMALL_STATE(315)] = 6039,
  [SMALL_STATE(316)] = 6049,
  [SMALL_STATE(317)] = 6059,
  [SMALL_STATE(318)] = 6069,
  [SMALL_STATE(319)] = 6079,
  [SMALL_STATE(320)] = 6089,
  [SMALL_STATE(321)] = 6099,
  [SMALL_STATE(322)] = 6109,
  [SMALL_STATE(323)] = 6119,
  [SMALL_STATE(324)] = 6129,
  [SMALL_STATE(325)] = 6139,
  [SMALL_STATE(326)] = 6149,
  [SMALL_STATE(327)] = 6159,
  [SMALL_STATE(328)] = 6169,
  [SMALL_STATE(329)] = 6179,
  [SMALL_STATE(330)] = 6189,
  [SMALL_STATE(331)] = 6199,
  [SMALL_STATE(332)] = 6209,
  [SMALL_STATE(333)] = 6219,
  [SMALL_STATE(334)] = 6229,
  [SMALL_STATE(335)] = 6239,
  [SMALL_STATE(336)] = 6249,
  [SMALL_STATE(337)] = 6259,
  [SMALL_STATE(338)] = 6269,
  [SMALL_STATE(339)] = 6279,
  [SMALL_STATE(340)] = 6289,
  [SMALL_STATE(341)] = 6299,
  [SMALL_STATE(342)] = 6309,
  [SMALL_STATE(343)] = 6319,
  [SMALL_STATE(344)] = 6329,
  [SMALL_STATE(345)] = 6339,
  [SMALL_STATE(346)] = 6349,
  [SMALL_STATE(347)] = 6359,
  [SMALL_STATE(348)] = 6369,
  [SMALL_STATE(349)] = 6379,
  [SMALL_STATE(350)] = 6389,
  [SMALL_STATE(351)] = 6399,
  [SMALL_STATE(352)] = 6409,
  [SMALL_STATE(353)] = 6419,
  [SMALL_STATE(354)] = 6429,
  [SMALL_STATE(355)] = 6439,
  [SMALL_STATE(356)] = 6449,
  [SMALL_STATE(357)] = 6459,
  [SMALL_STATE(358)] = 6469,
  [SMALL_STATE(359)] = 6479,
  [SMALL_STATE(360)] = 6489,
  [SMALL_STATE(361)] = 6499,
  [SMALL_STATE(362)] = 6509,
  [SMALL_STATE(363)] = 6519,
  [SMALL_STATE(364)] = 6529,
  [SMALL_STATE(365)] = 6539,
  [SMALL_STATE(366)] = 6549,
  [SMALL_STATE(367)] = 6559,
  [SMALL_STATE(368)] = 6569,
  [SMALL_STATE(369)] = 6579,
  [SMALL_STATE(370)] = 6589,
  [SMALL_STATE(371)] = 6599,
  [SMALL_STATE(372)] = 6609,
  [SMALL_STATE(373)] = 6619,
  [SMALL_STATE(374)] = 6629,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(281),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(207),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(48),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(47),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(279),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(206),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(110),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(106),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 62),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 62),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(244),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(107),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 64),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 64),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, .production_id = 63),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, .production_id = 63),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, .production_id = 17),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(156),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(220),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, .production_id = 17),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(215),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(121),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(213),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(171),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(209),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(178),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(179),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 14),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, .production_id = 11),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 14),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(335),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(225),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(92),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(163),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(193),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(223),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 58),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 58),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(205),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(183),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(182),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, .production_id = 9),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 13),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 14),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 14),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, .production_id = 40),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(310),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(233),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(334),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(346),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, .production_id = 23),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [529] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(229),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(234),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(256),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(219),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, .production_id = 23),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(238),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(217),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(203),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(210),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, .production_id = 40),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(196),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(197),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(141),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(80),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(221),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, .production_id = 37),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(341),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 47),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 47),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(154),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, .production_id = 59),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(132),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, .production_id = 16),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, .production_id = 38),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(142),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, .production_id = 36),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, .production_id = 2),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 18),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, .production_id = 35),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 20),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, .production_id = 2),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, .production_id = 36),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, .production_id = 35),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, .production_id = 12),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 21),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 41),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, .production_id = 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, .production_id = 25),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, .production_id = 24),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [926] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 53),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, .production_id = 22),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, .production_id = 7),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, .production_id = 19),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, .production_id = 28),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2, .production_id = 32),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, .production_id = 25),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, .production_id = 27),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, .production_id = 7),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, .production_id = 15),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, .production_id = 26),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 60),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 56),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 55),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 54),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
