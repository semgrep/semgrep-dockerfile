#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 385
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 58
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 67

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
  aux_sym_shell_fragment_token1 = 58,
  aux_sym_shell_fragment_token2 = 59,
  aux_sym_shell_fragment_token3 = 60,
  anon_sym_BSLASH_LF = 61,
  anon_sym_POUND = 62,
  anon_sym_LBRACK = 63,
  anon_sym_COMMA2 = 64,
  anon_sym_RBRACK = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_json_string_token1 = 67,
  sym_json_escape_sequence = 68,
  aux_sym_double_quoted_string_token1 = 69,
  anon_sym_BSLASH = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_single_quoted_string_token1 = 72,
  aux_sym_unquoted_string_token1 = 73,
  anon_sym_BSLASH2 = 74,
  sym_double_quoted_escape_sequence = 75,
  sym_single_quoted_escape_sequence = 76,
  sym_non_newline_whitespace = 77,
  sym_comment = 78,
  sym_semgrep_metavariable = 79,
  sym_semgrep_ellipsis = 80,
  sym_source_file = 81,
  sym_instruction = 82,
  sym_from_instruction = 83,
  sym_run_instruction = 84,
  sym_cmd_instruction = 85,
  sym_label_instruction = 86,
  sym_expose_instruction = 87,
  sym_env_instruction = 88,
  sym_add_instruction = 89,
  sym_copy_instruction = 90,
  sym_entrypoint_instruction = 91,
  sym_volume_instruction = 92,
  sym_user_instruction = 93,
  sym_user_name_or_group = 94,
  sym_immediate_user_name_or_group = 95,
  sym_immediate_user_name_or_group_fragment = 96,
  sym_workdir_instruction = 97,
  sym_arg_instruction = 98,
  sym_onbuild_instruction = 99,
  sym_stopsignal_instruction = 100,
  sym_stopsignal_value = 101,
  sym_healthcheck_instruction = 102,
  sym_shell_instruction = 103,
  sym_maintainer_instruction = 104,
  sym_cross_build_instruction = 105,
  sym_path = 106,
  sym_expansion = 107,
  sym_immediate_expansion = 108,
  sym_imm_expansion = 109,
  sym_expansion_body = 110,
  sym_env_pair = 111,
  sym_spaced_env_pair = 112,
  sym_env_key = 113,
  sym_expose_port = 114,
  sym_label_pair = 115,
  sym_image_spec = 116,
  sym_image_name = 117,
  sym_image_tag = 118,
  sym_image_digest = 119,
  sym_param = 120,
  sym_mount_param = 121,
  sym_mount_param_param = 122,
  sym_image_alias = 123,
  sym_shell_command = 124,
  sym_shell_fragment = 125,
  sym_line_continuation = 126,
  sym_required_line_continuation = 127,
  sym_comment_line = 128,
  sym_anon_comment = 129,
  sym_json_string_array = 130,
  sym_json_string = 131,
  sym_double_quoted_string = 132,
  sym_single_quoted_string = 133,
  sym_unquoted_string = 134,
  sym_array_element = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_run_instruction_repeat1 = 137,
  aux_sym_label_instruction_repeat1 = 138,
  aux_sym_expose_instruction_repeat1 = 139,
  aux_sym_env_instruction_repeat1 = 140,
  aux_sym_add_instruction_repeat1 = 141,
  aux_sym_volume_instruction_repeat1 = 142,
  aux_sym_user_name_or_group_repeat1 = 143,
  aux_sym_stopsignal_value_repeat1 = 144,
  aux_sym_healthcheck_instruction_repeat1 = 145,
  aux_sym_path_repeat1 = 146,
  aux_sym_image_name_repeat1 = 147,
  aux_sym_image_tag_repeat1 = 148,
  aux_sym_image_digest_repeat1 = 149,
  aux_sym_mount_param_repeat1 = 150,
  aux_sym_image_alias_repeat1 = 151,
  aux_sym_shell_command_repeat1 = 152,
  aux_sym_shell_command_repeat2 = 153,
  aux_sym_shell_fragment_repeat1 = 154,
  aux_sym_json_string_array_repeat1 = 155,
  aux_sym_json_string_repeat1 = 156,
  aux_sym_double_quoted_string_repeat1 = 157,
  aux_sym_single_quoted_string_repeat1 = 158,
  aux_sym_unquoted_string_repeat1 = 159,
  alias_sym_imm_tok_at = 160,
  alias_sym_imm_tok_bslashspace = 161,
  alias_sym_imm_tok_colon = 162,
  alias_sym_imm_tok_comma = 163,
  alias_sym_imm_tok_dollar = 164,
  alias_sym_imm_tok_eq = 165,
  alias_sym_imm_tok_lcurl = 166,
  alias_sym_imm_tok_mount = 167,
  alias_sym_imm_tok_pat_0ab9261 = 168,
  alias_sym_imm_tok_pat_0c7fc22 = 169,
  alias_sym_imm_tok_pat_2b37705 = 170,
  alias_sym_imm_tok_pat_3a2a380 = 171,
  alias_sym_imm_tok_pat_3d340f6 = 172,
  alias_sym_imm_tok_pat_441cd81 = 173,
  alias_sym_imm_tok_pat_589b0f8 = 174,
  alias_sym_imm_tok_pat_7642c4f = 175,
  alias_sym_imm_tok_pat_8713919 = 176,
  alias_sym_imm_tok_pat_9a14b5c = 177,
  alias_sym_imm_tok_pat_9f6bbb9 = 178,
  alias_sym_imm_tok_pat_bcfc287 = 179,
  alias_sym_imm_tok_pat_d2727a0 = 180,
  alias_sym_imm_tok_pat_f43f746 = 181,
  alias_sym_imm_tok_pat_f46f69d = 182,
  alias_sym_imm_tok_pat_f6e1de8 = 183,
  alias_sym_imm_tok_rcurl = 184,
  alias_sym_pat_05444c2 = 185,
  alias_sym_pat_1167a92 = 186,
  alias_sym_pat_217c202 = 187,
  alias_sym_pat_2b6adbc = 188,
  alias_sym_pat_4128122 = 189,
  alias_sym_pat_441cd81 = 190,
  alias_sym_pat_4a2f38a = 191,
  alias_sym_pat_4de4cb9 = 192,
  alias_sym_pat_4fd4a56 = 193,
  alias_sym_pat_8165e5f = 194,
  alias_sym_pat_9a14b5c = 195,
  alias_sym_pat_add = 196,
  alias_sym_pat_arg = 197,
  alias_sym_pat_as = 198,
  alias_sym_pat_b1120d3 = 199,
  alias_sym_pat_cmd = 200,
  alias_sym_pat_copy = 201,
  alias_sym_pat_dea634e = 202,
  alias_sym_pat_eda9032 = 203,
  alias_sym_pat_entr = 204,
  alias_sym_pat_env = 205,
  alias_sym_pat_expose = 206,
  alias_sym_pat_from = 207,
  alias_sym_pat_heal = 208,
  alias_sym_pat_label = 209,
  alias_sym_pat_main = 210,
  alias_sym_pat_onbu = 211,
  alias_sym_pat_run = 212,
  alias_sym_pat_shell = 213,
  alias_sym_pat_stop = 214,
  alias_sym_pat_user = 215,
  alias_sym_pat_volume = 216,
  alias_sym_pat_work = 217,
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
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "double_quoted_escape_sequence",
  [sym_single_quoted_escape_sequence] = "single_quoted_escape_sequence",
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
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [sym_comment_line] = "comment_line",
  [sym_anon_comment] = "anon_comment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
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
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0ab9261] = "imm_tok_pat_0ab9261",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3a2a380] = "imm_tok_pat_3a2a380",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_7642c4f] = "imm_tok_pat_7642c4f",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_9f6bbb9] = "imm_tok_pat_9f6bbb9",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_05444c2] = "pat_05444c2",
  [alias_sym_pat_1167a92] = "pat_1167a92",
  [alias_sym_pat_217c202] = "pat_217c202",
  [alias_sym_pat_2b6adbc] = "pat_2b6adbc",
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
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_single_quoted_escape_sequence,
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
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [sym_comment_line] = sym_comment_line,
  [sym_anon_comment] = sym_anon_comment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
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
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0ab9261] = alias_sym_imm_tok_pat_0ab9261,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3a2a380] = alias_sym_imm_tok_pat_3a2a380,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_7642c4f] = alias_sym_imm_tok_pat_7642c4f,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_9f6bbb9] = alias_sym_imm_tok_pat_9f6bbb9,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_05444c2] = alias_sym_pat_05444c2,
  [alias_sym_pat_1167a92] = alias_sym_pat_1167a92,
  [alias_sym_pat_217c202] = alias_sym_pat_217c202,
  [alias_sym_pat_2b6adbc] = alias_sym_pat_2b6adbc,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
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
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
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
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
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
  [alias_sym_imm_tok_pat_0ab9261] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3a2a380] = {
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
  [alias_sym_imm_tok_pat_7642c4f] = {
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
  [alias_sym_imm_tok_pat_9f6bbb9] = {
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
  [alias_sym_pat_05444c2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_1167a92] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_217c202] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_2b6adbc] = {
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
  [64] = {.index = 22, .length = 3},
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
    [0] = alias_sym_pat_2b6adbc,
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
    [0] = alias_sym_pat_05444c2,
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
    [0] = alias_sym_imm_tok_pat_7642c4f,
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
    [0] = alias_sym_imm_tok_pat_3a2a380,
  },
  [48] = {
    [0] = alias_sym_imm_tok_pat_9f6bbb9,
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
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [63] = {
    [0] = alias_sym_imm_tok_pat_0ab9261,
  },
  [64] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [65] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [66] = {
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
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(279);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '.') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(253);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 46:
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 48:
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 61:
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 62:
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 163:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 164:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == ',') ADVANCE(259);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(260);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(125);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_json_escape_sequence);
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
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(279);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 164},
  [5] = {.lex_state = 164},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 164},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 164},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 164},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 164},
  [133] = {.lex_state = 38},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 38},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 22},
  [140] = {.lex_state = 22},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 38},
  [143] = {.lex_state = 25},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 164},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 33},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 21},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 45},
  [204] = {.lex_state = 38},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 56},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 56},
  [211] = {.lex_state = 56},
  [212] = {.lex_state = 56},
  [213] = {.lex_state = 56},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 56},
  [218] = {.lex_state = 56},
  [219] = {.lex_state = 56},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 164},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 11},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 56},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 56},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 14},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 56},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 56},
  [245] = {.lex_state = 56},
  [246] = {.lex_state = 56},
  [247] = {.lex_state = 23},
  [248] = {.lex_state = 56},
  [249] = {.lex_state = 37},
  [250] = {.lex_state = 164},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 37},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 56},
  [257] = {.lex_state = 56},
  [258] = {.lex_state = 164},
  [259] = {.lex_state = 56},
  [260] = {.lex_state = 56},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 15},
  [264] = {.lex_state = 37},
  [265] = {.lex_state = 37},
  [266] = {.lex_state = 37},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 37},
  [271] = {.lex_state = 37},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 56},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 23},
  [277] = {.lex_state = 38},
  [278] = {.lex_state = 164},
  [279] = {.lex_state = 23},
  [280] = {.lex_state = 52},
  [281] = {.lex_state = 164},
  [282] = {.lex_state = 52},
  [283] = {.lex_state = 164},
  [284] = {.lex_state = 42},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 18},
  [287] = {.lex_state = 38},
  [288] = {.lex_state = 18},
  [289] = {.lex_state = 60},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 23},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 164},
  [295] = {.lex_state = 164},
  [296] = {.lex_state = 164},
  [297] = {.lex_state = 164},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 18},
  [302] = {.lex_state = 18},
  [303] = {.lex_state = 164},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 200},
  [308] = {.lex_state = 164},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 164},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 37},
  [313] = {.lex_state = 164},
  [314] = {.lex_state = 59},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 60},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 200},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 200},
  [327] = {.lex_state = 5},
  [328] = {.lex_state = 5},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 5},
  [331] = {.lex_state = 164},
  [332] = {.lex_state = 164},
  [333] = {.lex_state = 61},
  [334] = {.lex_state = 5},
  [335] = {.lex_state = 5},
  [336] = {.lex_state = 62},
  [337] = {.lex_state = 164},
  [338] = {.lex_state = 61},
  [339] = {.lex_state = 5},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 164},
  [342] = {.lex_state = 61},
  [343] = {.lex_state = 5},
  [344] = {.lex_state = 164},
  [345] = {.lex_state = 164},
  [346] = {.lex_state = 5},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 164},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 5},
  [351] = {.lex_state = 164},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 164},
  [355] = {.lex_state = 164},
  [356] = {.lex_state = 164},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 164},
  [359] = {.lex_state = 61},
  [360] = {.lex_state = 164},
  [361] = {.lex_state = 164},
  [362] = {.lex_state = 164},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 164},
  [365] = {.lex_state = 164},
  [366] = {.lex_state = 62},
  [367] = {.lex_state = 164},
  [368] = {.lex_state = 62},
  [369] = {.lex_state = 164},
  [370] = {.lex_state = 62},
  [371] = {.lex_state = 164},
  [372] = {.lex_state = 62},
  [373] = {.lex_state = 62},
  [374] = {.lex_state = 62},
  [375] = {.lex_state = 62},
  [376] = {.lex_state = 62},
  [377] = {.lex_state = 62},
  [378] = {.lex_state = 62},
  [379] = {.lex_state = 62},
  [380] = {.lex_state = 62},
  [381] = {.lex_state = 62},
  [382] = {.lex_state = 59},
  [383] = {.lex_state = 59},
  [384] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(317),
    [sym_instruction] = STATE(321),
    [sym_from_instruction] = STATE(320),
    [sym_run_instruction] = STATE(320),
    [sym_cmd_instruction] = STATE(320),
    [sym_label_instruction] = STATE(320),
    [sym_expose_instruction] = STATE(320),
    [sym_env_instruction] = STATE(320),
    [sym_add_instruction] = STATE(320),
    [sym_copy_instruction] = STATE(320),
    [sym_entrypoint_instruction] = STATE(320),
    [sym_volume_instruction] = STATE(320),
    [sym_user_instruction] = STATE(320),
    [sym_workdir_instruction] = STATE(320),
    [sym_arg_instruction] = STATE(320),
    [sym_onbuild_instruction] = STATE(320),
    [sym_stopsignal_instruction] = STATE(320),
    [sym_healthcheck_instruction] = STATE(320),
    [sym_shell_instruction] = STATE(320),
    [sym_maintainer_instruction] = STATE(320),
    [sym_cross_build_instruction] = STATE(320),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(108), 1,
      sym_comment,
    STATE(321), 1,
      sym_instruction,
    ACTIONS(111), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(320), 19,
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
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(321), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(320), 19,
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
    STATE(322), 1,
      sym_instruction,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(320), 19,
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
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(6), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_run_instruction_repeat1,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(272), 1,
      sym_shell_fragment,
    STATE(304), 1,
      sym_anon_comment,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    STATE(305), 2,
      sym_shell_command,
      sym_json_string_array,
  [378] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    STATE(7), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_run_instruction_repeat1,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(272), 1,
      sym_shell_fragment,
    STATE(304), 1,
      sym_anon_comment,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    STATE(353), 2,
      sym_shell_command,
      sym_json_string_array,
  [432] = 13,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH2,
    STATE(8), 1,
      sym_line_continuation,
    STATE(24), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym_immediate_expansion,
    STATE(115), 1,
      sym_imm_expansion,
    ACTIONS(134), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(237), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [475] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    STATE(9), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(272), 1,
      sym_shell_fragment,
    STATE(304), 1,
      sym_anon_comment,
    STATE(306), 2,
      sym_shell_command,
      sym_json_string_array,
  [519] = 14,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_semgrep_ellipsis,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    STATE(10), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(272), 1,
      sym_shell_fragment,
    STATE(304), 1,
      sym_anon_comment,
    STATE(315), 2,
      sym_shell_command,
      sym_json_string_array,
  [563] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(11), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(165), 1,
      sym_immediate_expansion,
    STATE(194), 1,
      sym_imm_expansion,
    STATE(346), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [599] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    STATE(12), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(68), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(161), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(163), 3,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [624] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR2,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(175), 1,
      anon_sym_BSLASH2,
    STATE(64), 1,
      sym_immediate_expansion,
    STATE(72), 1,
      sym_imm_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(170), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [655] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(64), 1,
      sym_immediate_expansion,
    STATE(72), 1,
      sym_imm_expansion,
    ACTIONS(182), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [688] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(192), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_name_token2,
    STATE(15), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_image_name_repeat1,
    STATE(97), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(188), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [718] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(196), 1,
      aux_sym_shell_fragment_token2,
    STATE(16), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(304), 1,
      sym_anon_comment,
    STATE(328), 1,
      sym_shell_fragment,
  [752] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(202), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(198), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [776] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(209), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(204), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [798] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_mount_param_repeat1,
    STATE(19), 1,
      sym_line_continuation,
    ACTIONS(213), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(211), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [822] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(219), 1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 1,
      aux_sym_image_name_token2,
    STATE(97), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(215), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [850] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(21), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(165), 1,
      sym_immediate_expansion,
    STATE(194), 1,
      sym_imm_expansion,
    STATE(339), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [882] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_name_token2,
    ACTIONS(227), 1,
      aux_sym_from_instruction_token2,
    STATE(20), 1,
      aux_sym_image_name_repeat1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [912] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    ACTIONS(231), 1,
      aux_sym_unquoted_string_token1,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(23), 1,
      sym_line_continuation,
    STATE(64), 1,
      sym_immediate_expansion,
    STATE(72), 1,
      sym_imm_expansion,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [944] = 10,
    ACTIONS(132), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(144), 1,
      anon_sym_BSLASH2,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym_immediate_expansion,
    STATE(115), 1,
      sym_imm_expansion,
    ACTIONS(182), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [976] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(233), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(239), 1,
      anon_sym_BSLASH2,
    STATE(99), 1,
      sym_immediate_expansion,
    STATE(115), 1,
      sym_imm_expansion,
    ACTIONS(170), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(25), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1006] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BSLASH2,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    ACTIONS(231), 1,
      aux_sym_unquoted_string_token1,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(64), 1,
      sym_immediate_expansion,
    STATE(72), 1,
      sym_imm_expansion,
    STATE(189), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [1038] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(196), 1,
      aux_sym_shell_fragment_token2,
    STATE(27), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_shell_command_repeat1,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(273), 1,
      sym_shell_fragment,
    STATE(304), 1,
      sym_anon_comment,
  [1072] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_name_token2,
    ACTIONS(244), 1,
      aux_sym_from_instruction_token2,
    STATE(22), 1,
      aux_sym_image_name_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(242), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1102] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    STATE(29), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(165), 1,
      sym_immediate_expansion,
    STATE(194), 1,
      sym_imm_expansion,
    STATE(340), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [1134] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_DOLLAR2,
    ACTIONS(194), 1,
      aux_sym_image_name_token2,
    ACTIONS(248), 1,
      aux_sym_from_instruction_token2,
    STATE(15), 1,
      aux_sym_image_name_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_immediate_expansion,
    STATE(98), 1,
      sym_imm_expansion,
    ACTIONS(246), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1164] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(196), 1,
      aux_sym_shell_fragment_token2,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(125), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(173), 1,
      sym_comment_line,
    STATE(304), 1,
      sym_anon_comment,
    STATE(350), 1,
      sym_shell_fragment,
  [1198] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    STATE(32), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(140), 1,
      sym_immediate_expansion,
  [1229] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(264), 1,
      anon_sym_DOLLAR2,
    ACTIONS(266), 1,
      aux_sym_image_tag_token1,
    STATE(33), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_image_tag_repeat1,
    STATE(123), 1,
      sym_imm_expansion,
    STATE(126), 1,
      sym_immediate_expansion,
    ACTIONS(260), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1258] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(270), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(268), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1277] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(35), 1,
      sym_line_continuation,
    ACTIONS(274), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(272), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1296] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(140), 1,
      sym_immediate_expansion,
  [1327] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      anon_sym_DOLLAR2,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(286), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      sym_double_quoted_escape_sequence,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(140), 1,
      sym_immediate_expansion,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1356] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(38), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    ACTIONS(292), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1385] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(140), 1,
      sym_immediate_expansion,
  [1416] = 10,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(258), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(129), 1,
      sym_imm_expansion,
    STATE(140), 1,
      sym_immediate_expansion,
  [1447] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(41), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    ACTIONS(302), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1476] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(311), 1,
      aux_sym_image_tag_token1,
    STATE(123), 1,
      sym_imm_expansion,
    STATE(126), 1,
      sym_immediate_expansion,
    ACTIONS(304), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1503] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(41), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    ACTIONS(314), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1532] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR2,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    ACTIONS(316), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(44), 2,
      sym_line_continuation,
      aux_sym_user_name_or_group_repeat1,
  [1559] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(44), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    ACTIONS(324), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1588] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      aux_sym_path_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(330), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(144), 1,
      sym_param,
    STATE(145), 1,
      aux_sym_add_instruction_repeat1,
    STATE(312), 1,
      sym_path,
  [1616] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(51), 1,
      aux_sym_path_repeat1,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(183), 1,
      sym_immediate_expansion,
    ACTIONS(332), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1642] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    ACTIONS(338), 1,
      anon_sym_LF,
    STATE(44), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(48), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
  [1670] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment_line,
    STATE(304), 1,
      sym_anon_comment,
    STATE(49), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(340), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1692] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(50), 1,
      sym_line_continuation,
    ACTIONS(347), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(345), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1710] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      aux_sym_path_token2,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(183), 1,
      sym_immediate_expansion,
    ACTIONS(349), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1734] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(359), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1752] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(365), 1,
      anon_sym_DOLLAR2,
    ACTIONS(367), 1,
      aux_sym_image_digest_token1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_image_digest_repeat1,
    STATE(150), 1,
      sym_imm_expansion,
    STATE(169), 1,
      sym_immediate_expansion,
  [1780] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(54), 1,
      sym_line_continuation,
    ACTIONS(369), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(371), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1798] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      aux_sym_expose_port_token1,
    ACTIONS(381), 1,
      sym_semgrep_ellipsis,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(180), 2,
      sym_expansion,
      sym_expose_port,
  [1822] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(386), 1,
      anon_sym_DASH_DASH,
    STATE(56), 1,
      sym_line_continuation,
    STATE(132), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(294), 1,
      sym_param,
    STATE(325), 1,
      sym_cmd_instruction,
    ACTIONS(384), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
  [1848] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      aux_sym_expose_port_token1,
    ACTIONS(394), 1,
      sym_semgrep_ellipsis,
    STATE(55), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(180), 2,
      sym_expansion,
      sym_expose_port,
  [1874] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(396), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(398), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1892] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      aux_sym_path_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(330), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(141), 1,
      sym_param,
    STATE(142), 1,
      aux_sym_add_instruction_repeat1,
    STATE(312), 1,
      sym_path,
  [1920] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    STATE(51), 1,
      aux_sym_path_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(183), 1,
      sym_immediate_expansion,
    ACTIONS(400), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1946] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(61), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(183), 1,
      sym_immediate_expansion,
    ACTIONS(402), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1972] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    STATE(60), 1,
      aux_sym_path_repeat1,
    STATE(62), 1,
      sym_line_continuation,
    STATE(174), 1,
      sym_imm_expansion,
    STATE(183), 1,
      sym_immediate_expansion,
    ACTIONS(404), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [1998] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    ACTIONS(413), 1,
      aux_sym_image_digest_token1,
    STATE(150), 1,
      sym_imm_expansion,
    STATE(169), 1,
      sym_immediate_expansion,
    STATE(63), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [2024] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(418), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2042] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(294), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR2,
    STATE(48), 1,
      aux_sym_user_name_or_group_repeat1,
    STATE(65), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_imm_expansion,
    STATE(162), 1,
      sym_immediate_user_name_or_group_fragment,
    STATE(163), 1,
      sym_immediate_expansion,
    STATE(343), 1,
      sym_immediate_user_name_or_group,
  [2070] = 9,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(154), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH2,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(165), 1,
      sym_immediate_expansion,
    STATE(194), 1,
      sym_imm_expansion,
  [2098] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      aux_sym_image_name_token1,
    ACTIONS(424), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_expansion,
    STATE(67), 1,
      sym_line_continuation,
    STATE(116), 1,
      sym_image_name,
    STATE(119), 1,
      sym_param,
    STATE(286), 1,
      sym_image_spec,
  [2126] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(428), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_semgrep_ellipsis,
    ACTIONS(426), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2144] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(69), 1,
      sym_line_continuation,
    ACTIONS(430), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(432), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2162] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(434), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(436), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2180] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    ACTIONS(441), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(444), 1,
      anon_sym_BSLASH2,
    STATE(165), 1,
      sym_immediate_expansion,
    STATE(194), 1,
      sym_imm_expansion,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [2206] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      anon_sym_LF,
      anon_sym_BSLASH2,
    ACTIONS(449), 5,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2224] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym_path_token2,
    ACTIONS(454), 1,
      anon_sym_DOLLAR2,
    ACTIONS(457), 1,
      sym_non_newline_whitespace,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(264), 1,
      sym_immediate_expansion,
    STATE(73), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2247] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      aux_sym_path_token2,
    ACTIONS(463), 1,
      anon_sym_DOLLAR2,
    STATE(74), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_path_repeat1,
    STATE(243), 1,
      sym_imm_expansion,
    STATE(269), 1,
      sym_immediate_expansion,
  [2272] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR2,
    ACTIONS(469), 1,
      aux_sym_image_alias_token2,
    STATE(75), 1,
      sym_line_continuation,
    STATE(92), 1,
      aux_sym_image_alias_repeat1,
    STATE(216), 1,
      sym_immediate_expansion,
    STATE(227), 1,
      sym_imm_expansion,
  [2297] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR2,
    ACTIONS(469), 1,
      aux_sym_image_alias_token2,
    ACTIONS(471), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_line_continuation,
    STATE(95), 1,
      aux_sym_image_alias_repeat1,
    STATE(216), 1,
      sym_immediate_expansion,
    STATE(227), 1,
      sym_imm_expansion,
  [2322] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      aux_sym_expose_port_token1,
    ACTIONS(477), 1,
      sym_semgrep_ellipsis,
    STATE(57), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(77), 1,
      sym_line_continuation,
    STATE(180), 2,
      sym_expansion,
      sym_expose_port,
  [2345] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      anon_sym_DOLLAR2,
    ACTIONS(484), 1,
      aux_sym_image_alias_token2,
    STATE(216), 1,
      sym_immediate_expansion,
    STATE(227), 1,
      sym_imm_expansion,
    STATE(78), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2368] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(396), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2385] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(491), 1,
      anon_sym_DOLLAR2,
    STATE(80), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(231), 1,
      sym_imm_expansion,
    STATE(235), 1,
      sym_immediate_expansion,
  [2410] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(491), 1,
      anon_sym_DOLLAR2,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(231), 1,
      sym_imm_expansion,
    STATE(235), 1,
      sym_immediate_expansion,
  [2435] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(491), 1,
      anon_sym_DOLLAR2,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(231), 1,
      sym_imm_expansion,
    STATE(235), 1,
      sym_immediate_expansion,
  [2460] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(491), 1,
      anon_sym_DOLLAR2,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym_stopsignal_value_repeat1,
    STATE(83), 1,
      sym_line_continuation,
    STATE(231), 1,
      sym_imm_expansion,
    STATE(235), 1,
      sym_immediate_expansion,
  [2485] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(499), 1,
      aux_sym_env_key_token1,
    ACTIONS(501), 1,
      sym_semgrep_ellipsis,
    STATE(84), 1,
      sym_line_continuation,
    STATE(89), 1,
      aux_sym_env_instruction_repeat1,
    STATE(253), 1,
      sym_env_pair,
    STATE(282), 1,
      sym_env_key,
    STATE(311), 1,
      sym_spaced_env_pair,
  [2510] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(85), 1,
      sym_line_continuation,
    STATE(241), 1,
      sym_path,
    STATE(316), 1,
      sym_json_string_array,
  [2535] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      aux_sym_path_token2,
    ACTIONS(509), 1,
      anon_sym_DOLLAR2,
    ACTIONS(511), 1,
      sym_non_newline_whitespace,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(86), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(264), 1,
      sym_immediate_expansion,
  [2560] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      aux_sym_path_token2,
    ACTIONS(509), 1,
      anon_sym_DOLLAR2,
    ACTIONS(513), 1,
      sym_non_newline_whitespace,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(264), 1,
      sym_immediate_expansion,
  [2585] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      aux_sym_path_token2,
    ACTIONS(509), 1,
      anon_sym_DOLLAR2,
    ACTIONS(515), 1,
      sym_non_newline_whitespace,
    STATE(88), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_path_repeat1,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(264), 1,
      sym_immediate_expansion,
  [2610] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      aux_sym_env_key_token1,
    ACTIONS(521), 1,
      sym_semgrep_ellipsis,
    STATE(89), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_env_instruction_repeat1,
    STATE(253), 1,
      sym_env_pair,
    STATE(310), 1,
      sym_env_key,
  [2635] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(434), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(436), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2652] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(430), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(432), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2669] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR2,
    ACTIONS(469), 1,
      aux_sym_image_alias_token2,
    ACTIONS(523), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_image_alias_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym_immediate_expansion,
    STATE(227), 1,
      sym_imm_expansion,
  [2694] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(357), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2711] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(527), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(525), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2728] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR2,
    ACTIONS(469), 1,
      aux_sym_image_alias_token2,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_image_alias_repeat1,
    STATE(95), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym_immediate_expansion,
    STATE(227), 1,
      sym_imm_expansion,
  [2753] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(533), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(531), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2770] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(535), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2787] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(449), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(447), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2804] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(416), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(418), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2821] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(369), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2838] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(543), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(541), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [2857] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(550), 1,
      anon_sym_DOLLAR2,
    STATE(231), 1,
      sym_imm_expansion,
    STATE(235), 1,
      sym_immediate_expansion,
    STATE(102), 2,
      sym_line_continuation,
      aux_sym_stopsignal_value_repeat1,
  [2880] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      sym_non_newline_whitespace,
    ACTIONS(507), 1,
      aux_sym_path_token2,
    ACTIONS(509), 1,
      anon_sym_DOLLAR2,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(103), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym_imm_expansion,
    STATE(264), 1,
      sym_immediate_expansion,
  [2905] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym_env_key_token1,
    ACTIONS(558), 1,
      sym_semgrep_ellipsis,
    STATE(253), 1,
      sym_env_pair,
    STATE(310), 1,
      sym_env_key,
    STATE(104), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2928] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_label_pair_token1,
    ACTIONS(565), 1,
      sym_semgrep_metavariable,
    ACTIONS(567), 1,
      sym_semgrep_ellipsis,
    STATE(105), 1,
      sym_line_continuation,
    STATE(109), 1,
      aux_sym_label_instruction_repeat1,
    STATE(178), 1,
      sym_label_pair,
  [2953] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      aux_sym_path_token2,
    ACTIONS(463), 1,
      anon_sym_DOLLAR2,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(106), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym_imm_expansion,
    STATE(269), 1,
      sym_immediate_expansion,
  [2978] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(371), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [2995] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(357), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(359), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3012] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      aux_sym_label_pair_token1,
    ACTIONS(574), 1,
      sym_semgrep_metavariable,
    ACTIONS(577), 1,
      sym_semgrep_ellipsis,
    STATE(178), 1,
      sym_label_pair,
    STATE(109), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [3035] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      aux_sym_path_token2,
    ACTIONS(463), 1,
      anon_sym_DOLLAR2,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_line_continuation,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(243), 1,
      sym_imm_expansion,
    STATE(269), 1,
      sym_immediate_expansion,
  [3060] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(396), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(398), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3077] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      aux_sym_path_token2,
    ACTIONS(463), 1,
      anon_sym_DOLLAR2,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    STATE(113), 1,
      aux_sym_path_repeat1,
    STATE(243), 1,
      sym_imm_expansion,
    STATE(269), 1,
      sym_immediate_expansion,
  [3102] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      aux_sym_path_token2,
    ACTIONS(583), 1,
      anon_sym_DOLLAR2,
    STATE(243), 1,
      sym_imm_expansion,
    STATE(269), 1,
      sym_immediate_expansion,
    STATE(113), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [3125] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym_array_element,
    STATE(281), 1,
      sym_json_string,
    ACTIONS(590), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3148] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(449), 3,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      sym_semgrep_ellipsis,
  [3165] = 8,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(596), 1,
      anon_sym_COLON,
    ACTIONS(598), 1,
      anon_sym_AT,
    STATE(116), 1,
      sym_line_continuation,
    STATE(205), 1,
      sym_image_tag,
    STATE(301), 1,
      sym_image_digest,
  [3190] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_line_continuation,
    STATE(281), 1,
      sym_json_string,
    STATE(296), 1,
      sym_array_element,
    ACTIONS(590), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3210] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(357), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3226] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      aux_sym_image_name_token1,
    STATE(30), 1,
      sym_expansion,
    STATE(116), 1,
      sym_image_name,
    STATE(119), 1,
      sym_line_continuation,
    STATE(302), 1,
      sym_image_spec,
  [3248] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(396), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3264] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3280] = 6,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(605), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(608), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(611), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [3300] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(449), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(447), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3316] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_BSLASH,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    ACTIONS(618), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(621), 1,
      sym_single_quoted_escape_sequence,
    STATE(124), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3336] = 7,
    ACTIONS(118), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(120), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(628), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(125), 1,
      sym_line_continuation,
  [3358] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(632), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(630), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3374] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_BSLASH,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    ACTIONS(638), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(640), 1,
      sym_single_quoted_escape_sequence,
    STATE(127), 1,
      sym_line_continuation,
    STATE(143), 1,
      aux_sym_single_quoted_string_repeat1,
  [3396] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(644), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(642), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3412] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(449), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(447), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3428] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_DOLLAR2,
    ACTIONS(367), 1,
      aux_sym_image_digest_token1,
    STATE(53), 1,
      aux_sym_image_digest_repeat1,
    STATE(130), 1,
      sym_line_continuation,
    STATE(150), 1,
      sym_imm_expansion,
    STATE(169), 1,
      sym_immediate_expansion,
  [3450] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_DOLLAR2,
    ACTIONS(266), 1,
      aux_sym_image_tag_token1,
    STATE(33), 1,
      aux_sym_image_tag_repeat1,
    STATE(123), 1,
      sym_imm_expansion,
    STATE(126), 1,
      sym_immediate_expansion,
    STATE(131), 1,
      sym_line_continuation,
  [3472] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(386), 1,
      anon_sym_DASH_DASH,
    STATE(132), 1,
      sym_line_continuation,
    STATE(157), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(294), 1,
      sym_param,
    STATE(363), 1,
      sym_cmd_instruction,
  [3494] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(133), 1,
      sym_line_continuation,
    STATE(134), 1,
      aux_sym_add_instruction_repeat1,
    STATE(291), 1,
      sym_path,
  [3516] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      aux_sym_path_token1,
    ACTIONS(649), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_expansion,
    STATE(312), 1,
      sym_path,
    STATE(134), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3536] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(134), 1,
      aux_sym_add_instruction_repeat1,
    STATE(135), 1,
      sym_line_continuation,
    STATE(292), 1,
      sym_path,
  [3558] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(396), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3574] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(359), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(357), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3590] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(369), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3606] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(654), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(652), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3622] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(658), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(656), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3638] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      aux_sym_path_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_expansion,
    STATE(133), 1,
      aux_sym_add_instruction_repeat1,
    STATE(141), 1,
      sym_line_continuation,
    STATE(312), 1,
      sym_path,
  [3660] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(134), 1,
      aux_sym_add_instruction_repeat1,
    STATE(142), 1,
      sym_line_continuation,
    STATE(293), 1,
      sym_path,
  [3682] = 7,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_BSLASH,
    ACTIONS(638), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(640), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(660), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(143), 1,
      sym_line_continuation,
  [3704] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      aux_sym_path_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_expansion,
    STATE(135), 1,
      aux_sym_add_instruction_repeat1,
    STATE(144), 1,
      sym_line_continuation,
    STATE(312), 1,
      sym_path,
  [3726] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(134), 1,
      aux_sym_add_instruction_repeat1,
    STATE(145), 1,
      sym_line_continuation,
    STATE(276), 1,
      sym_path,
  [3748] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(563), 1,
      aux_sym_label_pair_token1,
    ACTIONS(567), 1,
      sym_semgrep_ellipsis,
    ACTIONS(662), 1,
      sym_semgrep_metavariable,
    STATE(105), 1,
      aux_sym_label_instruction_repeat1,
    STATE(146), 1,
      sym_line_continuation,
    STATE(178), 1,
      sym_label_pair,
  [3770] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(666), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3785] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_DOLLAR,
    ACTIONS(670), 1,
      aux_sym_image_alias_token1,
    STATE(75), 1,
      sym_expansion,
    STATE(148), 1,
      sym_line_continuation,
    STATE(357), 1,
      sym_image_alias,
  [3804] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(398), 1,
      aux_sym_from_instruction_token2,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(396), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3819] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      aux_sym_from_instruction_token2,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3834] = 3,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(674), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [3847] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(369), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3860] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(525), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3873] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(357), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3886] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      aux_sym_path_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(155), 1,
      sym_line_continuation,
    STATE(279), 1,
      sym_path,
  [3905] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3920] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(678), 1,
      anon_sym_DASH_DASH,
    STATE(294), 1,
      sym_param,
    STATE(157), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3937] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(396), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3950] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(447), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3963] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(681), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3976] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(527), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [3991] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(683), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4004] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(685), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4017] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_DOLLAR2,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(359), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4032] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(416), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4045] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(430), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4058] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(689), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4073] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      aux_sym_from_instruction_token2,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(691), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4088] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      aux_sym_from_instruction_token2,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(695), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4103] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(434), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4116] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(398), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4131] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_DOLLAR,
    ACTIONS(670), 1,
      aux_sym_image_alias_token1,
    STATE(75), 1,
      sym_expansion,
    STATE(172), 1,
      sym_line_continuation,
    STATE(334), 1,
      sym_image_alias,
  [4150] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(699), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4163] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      anon_sym_DOLLAR2,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(449), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4178] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(703), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4193] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4208] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    ACTIONS(707), 1,
      aux_sym_json_string_token1,
    ACTIONS(709), 1,
      sym_json_escape_sequence,
    STATE(177), 1,
      sym_line_continuation,
    STATE(202), 1,
      aux_sym_json_string_repeat1,
  [4227] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(713), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4242] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(717), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4257] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(721), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4272] = 3,
    ACTIONS(723), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(725), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4285] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(727), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4298] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_DOLLAR2,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(729), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4313] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      anon_sym_DOLLAR2,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(733), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym_non_newline_whitespace,
  [4328] = 3,
    ACTIONS(737), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(739), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [4341] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(741), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [4354] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(527), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4369] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(359), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4384] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(745), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4399] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      aux_sym_json_string_token1,
    ACTIONS(709), 1,
      sym_json_escape_sequence,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym_json_string_repeat1,
    STATE(190), 1,
      sym_line_continuation,
  [4418] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_from_instruction_token2,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(357), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4433] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      aux_sym_from_instruction_token2,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4448] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(751), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4463] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(447), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4476] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(396), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4489] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(753), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(755), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4504] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(757), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(759), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [4519] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(357), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4532] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(369), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4545] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(763), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_expansion,
    STATE(200), 1,
      sym_line_continuation,
    STATE(323), 1,
      sym_stopsignal_value,
  [4564] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(767), 3,
      aux_sym_label_pair_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4579] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    ACTIONS(771), 1,
      aux_sym_json_string_token1,
    ACTIONS(774), 1,
      sym_json_escape_sequence,
    STATE(202), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [4596] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(779), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(203), 1,
      sym_line_continuation,
    STATE(300), 1,
      sym_user_name_or_group,
  [4615] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      aux_sym_path_token1,
    ACTIONS(783), 1,
      anon_sym_DOLLAR,
    STATE(110), 1,
      sym_expansion,
    STATE(204), 1,
      sym_line_continuation,
    STATE(318), 1,
      sym_path,
  [4634] = 6,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(598), 1,
      anon_sym_AT,
    ACTIONS(785), 1,
      anon_sym_LF,
    ACTIONS(787), 1,
      aux_sym_from_instruction_token2,
    STATE(205), 1,
      sym_line_continuation,
    STATE(288), 1,
      sym_image_digest,
  [4653] = 5,
    ACTIONS(789), 1,
      anon_sym_LF,
    ACTIONS(791), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_required_line_continuation,
    STATE(206), 1,
      sym_line_continuation,
    STATE(252), 1,
      aux_sym_shell_command_repeat2,
  [4669] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      anon_sym_LBRACE,
    ACTIONS(795), 1,
      sym_variable,
    STATE(58), 1,
      sym_expansion_body,
    STATE(207), 1,
      sym_line_continuation,
  [4685] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 1,
      sym_non_newline_whitespace,
    STATE(208), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4699] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4711] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(804), 1,
      sym_variable,
    STATE(161), 1,
      sym_expansion_body,
    STATE(210), 1,
      sym_line_continuation,
  [4727] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      sym_variable,
    STATE(136), 1,
      sym_expansion_body,
    STATE(211), 1,
      sym_line_continuation,
  [4743] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_variable,
    STATE(158), 1,
      sym_expansion_body,
    STATE(212), 1,
      sym_line_continuation,
  [4759] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
    ACTIONS(816), 1,
      sym_variable,
    STATE(213), 1,
      sym_line_continuation,
    STATE(266), 1,
      sym_expansion_body,
  [4775] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(525), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4787] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(818), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4799] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(820), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4811] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(804), 1,
      sym_variable,
    STATE(171), 1,
      sym_expansion_body,
    STATE(217), 1,
      sym_line_continuation,
  [4827] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      sym_variable,
    STATE(79), 1,
      sym_expansion_body,
    STATE(218), 1,
      sym_line_continuation,
  [4843] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      sym_variable,
    STATE(187), 1,
      sym_expansion_body,
    STATE(219), 1,
      sym_line_continuation,
  [4859] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(357), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4871] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(221), 1,
      sym_line_continuation,
    ACTIONS(369), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4883] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(830), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4895] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_COMMA2,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(223), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4909] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(525), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4921] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(357), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4933] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(396), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4945] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4957] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      aux_sym_path_token2,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(369), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4971] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(839), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [4985] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(396), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4997] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5009] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      aux_sym_path_token2,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(525), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5023] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      sym_variable,
    STATE(233), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym_expansion_body,
  [5039] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_path_token2,
    STATE(234), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5053] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(235), 1,
      sym_line_continuation,
    ACTIONS(845), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5065] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_variable,
    STATE(153), 1,
      sym_expansion_body,
    STATE(236), 1,
      sym_line_continuation,
  [5081] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(847), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
    ACTIONS(849), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5095] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(851), 1,
      anon_sym_LF,
    STATE(238), 1,
      sym_line_continuation,
    ACTIONS(853), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5109] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(398), 1,
      aux_sym_path_token2,
    STATE(239), 1,
      sym_line_continuation,
    ACTIONS(396), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5123] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      sym_variable,
    STATE(94), 1,
      sym_expansion_body,
    STATE(240), 1,
      sym_line_continuation,
  [5139] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 1,
      sym_non_newline_whitespace,
    STATE(241), 1,
      sym_line_continuation,
    STATE(247), 1,
      aux_sym_volume_instruction_repeat1,
  [5155] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      sym_variable,
    STATE(230), 1,
      sym_expansion_body,
    STATE(242), 1,
      sym_line_continuation,
  [5171] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      aux_sym_path_token2,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5185] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      sym_variable,
    STATE(226), 1,
      sym_expansion_body,
    STATE(244), 1,
      sym_line_continuation,
  [5201] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      sym_variable,
    STATE(195), 1,
      sym_expansion_body,
    STATE(245), 1,
      sym_line_continuation,
  [5217] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      sym_variable,
    STATE(232), 1,
      sym_expansion_body,
    STATE(246), 1,
      sym_line_continuation,
  [5233] = 5,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(857), 1,
      sym_non_newline_whitespace,
    ACTIONS(871), 1,
      anon_sym_LF,
    STATE(208), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(247), 1,
      sym_line_continuation,
  [5249] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
    ACTIONS(816), 1,
      sym_variable,
    STATE(248), 1,
      sym_line_continuation,
    STATE(254), 1,
      sym_expansion_body,
  [5265] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      aux_sym_path_token2,
    STATE(249), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5279] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      anon_sym_COMMA2,
    ACTIONS(875), 1,
      anon_sym_RBRACK,
    STATE(250), 1,
      sym_line_continuation,
    STATE(258), 1,
      aux_sym_json_string_array_repeat1,
  [5295] = 5,
    ACTIONS(791), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(877), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym_required_line_continuation,
    STATE(251), 1,
      sym_line_continuation,
    STATE(252), 1,
      aux_sym_shell_command_repeat2,
  [5311] = 4,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_required_line_continuation,
    STATE(252), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [5325] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_LF,
    STATE(253), 1,
      sym_line_continuation,
    ACTIONS(886), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5339] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(398), 1,
      aux_sym_path_token2,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(396), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5353] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_line_continuation,
    ACTIONS(890), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5367] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    ACTIONS(894), 1,
      sym_variable,
    STATE(111), 1,
      sym_expansion_body,
    STATE(256), 1,
      sym_line_continuation,
  [5383] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    ACTIONS(898), 1,
      sym_variable,
    STATE(120), 1,
      sym_expansion_body,
    STATE(257), 1,
      sym_line_continuation,
  [5399] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      anon_sym_COMMA2,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_json_string_array_repeat1,
    STATE(258), 1,
      sym_line_continuation,
  [5415] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(859), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      sym_variable,
    STATE(224), 1,
      sym_expansion_body,
    STATE(259), 1,
      sym_line_continuation,
  [5431] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(904), 1,
      sym_variable,
    STATE(149), 1,
      sym_expansion_body,
    STATE(260), 1,
      sym_line_continuation,
  [5447] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      sym_line_continuation,
    ACTIONS(908), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5461] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      anon_sym_LF,
    STATE(262), 1,
      sym_line_continuation,
    ACTIONS(767), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5475] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
    ACTIONS(751), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5489] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      aux_sym_path_token2,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(731), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5503] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_path_token2,
    STATE(265), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5517] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      aux_sym_path_token2,
    STATE(266), 1,
      sym_line_continuation,
    ACTIONS(525), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5531] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_line_continuation,
    ACTIONS(912), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [5545] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      aux_sym_path_token2,
    STATE(268), 1,
      sym_line_continuation,
    ACTIONS(735), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5559] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      aux_sym_path_token2,
    STATE(269), 1,
      sym_line_continuation,
    ACTIONS(731), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5573] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      aux_sym_path_token2,
    STATE(270), 1,
      sym_line_continuation,
    ACTIONS(735), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5587] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      aux_sym_path_token2,
    STATE(271), 1,
      sym_line_continuation,
    ACTIONS(369), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5601] = 5,
    ACTIONS(791), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym_required_line_continuation,
    STATE(206), 1,
      aux_sym_shell_command_repeat2,
    STATE(272), 1,
      sym_line_continuation,
  [5617] = 5,
    ACTIONS(789), 1,
      anon_sym_LF,
    ACTIONS(791), 1,
      anon_sym_BSLASH_LF,
    STATE(31), 1,
      sym_required_line_continuation,
    STATE(251), 1,
      aux_sym_shell_command_repeat2,
    STATE(273), 1,
      sym_line_continuation,
  [5633] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      sym_variable,
    STATE(214), 1,
      sym_expansion_body,
    STATE(274), 1,
      sym_line_continuation,
  [5649] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      aux_sym_mount_param_param_token1,
    STATE(35), 1,
      sym_mount_param_param,
    STATE(275), 1,
      sym_line_continuation,
  [5662] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(920), 1,
      sym_non_newline_whitespace,
    STATE(276), 1,
      sym_line_continuation,
  [5675] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_path_token1,
    STATE(277), 1,
      sym_line_continuation,
  [5688] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(278), 1,
      sym_line_continuation,
    ACTIONS(922), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5699] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(279), 1,
      sym_line_continuation,
    ACTIONS(797), 2,
      anon_sym_LF,
      sym_non_newline_whitespace,
  [5710] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    STATE(280), 1,
      sym_line_continuation,
    ACTIONS(924), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [5721] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(281), 1,
      sym_line_continuation,
    ACTIONS(926), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5732] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(930), 1,
      aux_sym_spaced_env_pair_token1,
    STATE(282), 1,
      sym_line_continuation,
  [5745] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(283), 1,
      sym_line_continuation,
    ACTIONS(345), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5756] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(932), 1,
      aux_sym_param_token1,
    ACTIONS(934), 1,
      anon_sym_mount,
    STATE(284), 1,
      sym_line_continuation,
  [5769] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(936), 1,
      anon_sym_LF,
    ACTIONS(938), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_line_continuation,
  [5782] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      anon_sym_LF,
    ACTIONS(942), 1,
      aux_sym_from_instruction_token2,
    STATE(286), 1,
      sym_line_continuation,
  [5795] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      aux_sym_path_token1,
    ACTIONS(946), 1,
      anon_sym_DOLLAR,
    STATE(287), 1,
      sym_line_continuation,
  [5808] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      anon_sym_LF,
    ACTIONS(950), 1,
      aux_sym_from_instruction_token2,
    STATE(288), 1,
      sym_line_continuation,
  [5821] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      aux_sym_mount_param_param_token1,
    STATE(19), 1,
      sym_mount_param_param,
    STATE(289), 1,
      sym_line_continuation,
  [5834] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      anon_sym_LF,
    ACTIONS(954), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_line_continuation,
  [5847] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      sym_non_newline_whitespace,
    ACTIONS(956), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_line_continuation,
  [5860] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      sym_non_newline_whitespace,
    ACTIONS(958), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5873] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      sym_non_newline_whitespace,
    ACTIONS(960), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5886] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(294), 1,
      sym_line_continuation,
    ACTIONS(962), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5897] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    STATE(295), 1,
      sym_line_continuation,
    STATE(327), 1,
      sym_json_string_array,
  [5910] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(296), 1,
      sym_line_continuation,
    ACTIONS(835), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5921] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(297), 1,
      sym_line_continuation,
    ACTIONS(964), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5932] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(966), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(968), 1,
      sym_semgrep_metavariable,
    STATE(298), 1,
      sym_line_continuation,
  [5945] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_image_name_token1,
    STATE(299), 1,
      sym_line_continuation,
  [5958] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(972), 1,
      anon_sym_COLON,
    STATE(300), 1,
      sym_line_continuation,
  [5971] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(974), 1,
      anon_sym_LF,
    ACTIONS(976), 1,
      aux_sym_from_instruction_token2,
    STATE(301), 1,
      sym_line_continuation,
  [5984] = 4,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(980), 1,
      aux_sym_from_instruction_token2,
    STATE(302), 1,
      sym_line_continuation,
  [5997] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(982), 1,
      anon_sym_EQ,
    STATE(303), 1,
      sym_line_continuation,
  [6007] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(984), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_line_continuation,
  [6017] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(986), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_line_continuation,
  [6027] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(988), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [6037] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(990), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(307), 1,
      sym_line_continuation,
  [6047] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(992), 1,
      anon_sym_EQ,
    STATE(308), 1,
      sym_line_continuation,
  [6057] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_LF,
    STATE(309), 1,
      sym_line_continuation,
  [6067] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_line_continuation,
  [6077] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(517), 1,
      anon_sym_LF,
    STATE(311), 1,
      sym_line_continuation,
  [6087] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(994), 1,
      sym_non_newline_whitespace,
    STATE(312), 1,
      sym_line_continuation,
  [6097] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      anon_sym_EQ,
    STATE(313), 1,
      sym_line_continuation,
  [6107] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(996), 1,
      aux_sym_param_token1,
    STATE(314), 1,
      sym_line_continuation,
  [6117] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(998), 1,
      anon_sym_LF,
    STATE(315), 1,
      sym_line_continuation,
  [6127] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1000), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_line_continuation,
  [6137] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1002), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym_line_continuation,
  [6147] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1004), 1,
      anon_sym_LF,
    STATE(318), 1,
      sym_line_continuation,
  [6157] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1006), 1,
      aux_sym_mount_param_param_token1,
    STATE(319), 1,
      sym_line_continuation,
  [6167] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1008), 1,
      anon_sym_LF,
    STATE(320), 1,
      sym_line_continuation,
  [6177] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1010), 1,
      anon_sym_LF,
    STATE(321), 1,
      sym_line_continuation,
  [6187] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1012), 1,
      anon_sym_LF,
    STATE(322), 1,
      sym_line_continuation,
  [6197] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1014), 1,
      anon_sym_LF,
    STATE(323), 1,
      sym_line_continuation,
  [6207] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1016), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(324), 1,
      sym_line_continuation,
  [6217] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1018), 1,
      anon_sym_LF,
    STATE(325), 1,
      sym_line_continuation,
  [6227] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1020), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(326), 1,
      sym_line_continuation,
  [6237] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1022), 1,
      anon_sym_LF,
    STATE(327), 1,
      sym_line_continuation,
  [6247] = 3,
    ACTIONS(1024), 1,
      anon_sym_LF,
    ACTIONS(1026), 1,
      anon_sym_BSLASH_LF,
    STATE(328), 1,
      sym_line_continuation,
  [6257] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1028), 1,
      anon_sym_LF,
    STATE(329), 1,
      sym_line_continuation,
  [6267] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1030), 1,
      anon_sym_LF,
    STATE(330), 1,
      sym_line_continuation,
  [6277] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1032), 1,
      anon_sym_EQ,
    STATE(331), 1,
      sym_line_continuation,
  [6287] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      sym_line_continuation,
  [6297] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1036), 1,
      aux_sym_param_token2,
    STATE(333), 1,
      sym_line_continuation,
  [6307] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1038), 1,
      anon_sym_LF,
    STATE(334), 1,
      sym_line_continuation,
  [6317] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1040), 1,
      anon_sym_LF,
    STATE(335), 1,
      sym_line_continuation,
  [6327] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1042), 1,
      aux_sym_expansion_body_token1,
    STATE(336), 1,
      sym_line_continuation,
  [6337] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym_line_continuation,
  [6347] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1046), 1,
      aux_sym_param_token2,
    STATE(338), 1,
      sym_line_continuation,
  [6357] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1048), 1,
      anon_sym_LF,
    STATE(339), 1,
      sym_line_continuation,
  [6367] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1050), 1,
      anon_sym_LF,
    STATE(340), 1,
      sym_line_continuation,
  [6377] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      sym_line_continuation,
  [6387] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1054), 1,
      aux_sym_param_token2,
    STATE(342), 1,
      sym_line_continuation,
  [6397] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1056), 1,
      anon_sym_LF,
    STATE(343), 1,
      sym_line_continuation,
  [6407] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1058), 1,
      anon_sym_EQ,
    STATE(344), 1,
      sym_line_continuation,
  [6417] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      sym_line_continuation,
  [6427] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1062), 1,
      anon_sym_LF,
    STATE(346), 1,
      sym_line_continuation,
  [6437] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1064), 1,
      anon_sym_LF,
    STATE(347), 1,
      sym_line_continuation,
  [6447] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      sym_line_continuation,
  [6457] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1068), 1,
      anon_sym_LF,
    STATE(349), 1,
      sym_line_continuation,
  [6467] = 3,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(1070), 1,
      anon_sym_BSLASH_LF,
    STATE(350), 1,
      sym_line_continuation,
  [6477] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      sym_line_continuation,
  [6487] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1074), 1,
      anon_sym_LF,
    STATE(352), 1,
      sym_line_continuation,
  [6497] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1076), 1,
      anon_sym_LF,
    STATE(353), 1,
      sym_line_continuation,
  [6507] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      sym_line_continuation,
  [6517] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1080), 1,
      anon_sym_EQ,
    STATE(355), 1,
      sym_line_continuation,
  [6527] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      sym_line_continuation,
  [6537] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1084), 1,
      anon_sym_LF,
    STATE(357), 1,
      sym_line_continuation,
  [6547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1086), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      sym_line_continuation,
  [6557] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1088), 1,
      aux_sym_param_token2,
    STATE(359), 1,
      sym_line_continuation,
  [6567] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    STATE(360), 1,
      sym_line_continuation,
  [6577] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      sym_line_continuation,
  [6587] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1094), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      sym_line_continuation,
  [6597] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1096), 1,
      anon_sym_LF,
    STATE(363), 1,
      sym_line_continuation,
  [6607] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      sym_line_continuation,
  [6617] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      sym_line_continuation,
  [6627] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1102), 1,
      aux_sym_expansion_body_token1,
    STATE(366), 1,
      sym_line_continuation,
  [6637] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1104), 1,
      anon_sym_EQ,
    STATE(367), 1,
      sym_line_continuation,
  [6647] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1106), 1,
      aux_sym_expansion_body_token1,
    STATE(368), 1,
      sym_line_continuation,
  [6657] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1108), 1,
      anon_sym_EQ,
    STATE(369), 1,
      sym_line_continuation,
  [6667] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1110), 1,
      aux_sym_expansion_body_token1,
    STATE(370), 1,
      sym_line_continuation,
  [6677] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1112), 1,
      anon_sym_EQ,
    STATE(371), 1,
      sym_line_continuation,
  [6687] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1114), 1,
      aux_sym_expansion_body_token1,
    STATE(372), 1,
      sym_line_continuation,
  [6697] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1116), 1,
      aux_sym_expansion_body_token1,
    STATE(373), 1,
      sym_line_continuation,
  [6707] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1118), 1,
      aux_sym_expansion_body_token1,
    STATE(374), 1,
      sym_line_continuation,
  [6717] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1120), 1,
      aux_sym_expansion_body_token1,
    STATE(375), 1,
      sym_line_continuation,
  [6727] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1122), 1,
      aux_sym_expansion_body_token1,
    STATE(376), 1,
      sym_line_continuation,
  [6737] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1124), 1,
      aux_sym_expansion_body_token1,
    STATE(377), 1,
      sym_line_continuation,
  [6747] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1126), 1,
      aux_sym_expansion_body_token1,
    STATE(378), 1,
      sym_line_continuation,
  [6757] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1128), 1,
      aux_sym_expansion_body_token1,
    STATE(379), 1,
      sym_line_continuation,
  [6767] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1130), 1,
      aux_sym_expansion_body_token1,
    STATE(380), 1,
      sym_line_continuation,
  [6777] = 3,
    ACTIONS(136), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1132), 1,
      aux_sym_expansion_body_token1,
    STATE(381), 1,
      sym_line_continuation,
  [6787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1134), 1,
      aux_sym_param_token1,
    STATE(382), 1,
      sym_line_continuation,
  [6797] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1136), 1,
      aux_sym_param_token1,
    STATE(383), 1,
      sym_line_continuation,
  [6807] = 1,
    ACTIONS(1138), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 292,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 563,
  [SMALL_STATE(12)] = 599,
  [SMALL_STATE(13)] = 624,
  [SMALL_STATE(14)] = 655,
  [SMALL_STATE(15)] = 688,
  [SMALL_STATE(16)] = 718,
  [SMALL_STATE(17)] = 752,
  [SMALL_STATE(18)] = 776,
  [SMALL_STATE(19)] = 798,
  [SMALL_STATE(20)] = 822,
  [SMALL_STATE(21)] = 850,
  [SMALL_STATE(22)] = 882,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 944,
  [SMALL_STATE(25)] = 976,
  [SMALL_STATE(26)] = 1006,
  [SMALL_STATE(27)] = 1038,
  [SMALL_STATE(28)] = 1072,
  [SMALL_STATE(29)] = 1102,
  [SMALL_STATE(30)] = 1134,
  [SMALL_STATE(31)] = 1164,
  [SMALL_STATE(32)] = 1198,
  [SMALL_STATE(33)] = 1229,
  [SMALL_STATE(34)] = 1258,
  [SMALL_STATE(35)] = 1277,
  [SMALL_STATE(36)] = 1296,
  [SMALL_STATE(37)] = 1327,
  [SMALL_STATE(38)] = 1356,
  [SMALL_STATE(39)] = 1385,
  [SMALL_STATE(40)] = 1416,
  [SMALL_STATE(41)] = 1447,
  [SMALL_STATE(42)] = 1476,
  [SMALL_STATE(43)] = 1503,
  [SMALL_STATE(44)] = 1532,
  [SMALL_STATE(45)] = 1559,
  [SMALL_STATE(46)] = 1588,
  [SMALL_STATE(47)] = 1616,
  [SMALL_STATE(48)] = 1642,
  [SMALL_STATE(49)] = 1670,
  [SMALL_STATE(50)] = 1692,
  [SMALL_STATE(51)] = 1710,
  [SMALL_STATE(52)] = 1734,
  [SMALL_STATE(53)] = 1752,
  [SMALL_STATE(54)] = 1780,
  [SMALL_STATE(55)] = 1798,
  [SMALL_STATE(56)] = 1822,
  [SMALL_STATE(57)] = 1848,
  [SMALL_STATE(58)] = 1874,
  [SMALL_STATE(59)] = 1892,
  [SMALL_STATE(60)] = 1920,
  [SMALL_STATE(61)] = 1946,
  [SMALL_STATE(62)] = 1972,
  [SMALL_STATE(63)] = 1998,
  [SMALL_STATE(64)] = 2024,
  [SMALL_STATE(65)] = 2042,
  [SMALL_STATE(66)] = 2070,
  [SMALL_STATE(67)] = 2098,
  [SMALL_STATE(68)] = 2126,
  [SMALL_STATE(69)] = 2144,
  [SMALL_STATE(70)] = 2162,
  [SMALL_STATE(71)] = 2180,
  [SMALL_STATE(72)] = 2206,
  [SMALL_STATE(73)] = 2224,
  [SMALL_STATE(74)] = 2247,
  [SMALL_STATE(75)] = 2272,
  [SMALL_STATE(76)] = 2297,
  [SMALL_STATE(77)] = 2322,
  [SMALL_STATE(78)] = 2345,
  [SMALL_STATE(79)] = 2368,
  [SMALL_STATE(80)] = 2385,
  [SMALL_STATE(81)] = 2410,
  [SMALL_STATE(82)] = 2435,
  [SMALL_STATE(83)] = 2460,
  [SMALL_STATE(84)] = 2485,
  [SMALL_STATE(85)] = 2510,
  [SMALL_STATE(86)] = 2535,
  [SMALL_STATE(87)] = 2560,
  [SMALL_STATE(88)] = 2585,
  [SMALL_STATE(89)] = 2610,
  [SMALL_STATE(90)] = 2635,
  [SMALL_STATE(91)] = 2652,
  [SMALL_STATE(92)] = 2669,
  [SMALL_STATE(93)] = 2694,
  [SMALL_STATE(94)] = 2711,
  [SMALL_STATE(95)] = 2728,
  [SMALL_STATE(96)] = 2753,
  [SMALL_STATE(97)] = 2770,
  [SMALL_STATE(98)] = 2787,
  [SMALL_STATE(99)] = 2804,
  [SMALL_STATE(100)] = 2821,
  [SMALL_STATE(101)] = 2838,
  [SMALL_STATE(102)] = 2857,
  [SMALL_STATE(103)] = 2880,
  [SMALL_STATE(104)] = 2905,
  [SMALL_STATE(105)] = 2928,
  [SMALL_STATE(106)] = 2953,
  [SMALL_STATE(107)] = 2978,
  [SMALL_STATE(108)] = 2995,
  [SMALL_STATE(109)] = 3012,
  [SMALL_STATE(110)] = 3035,
  [SMALL_STATE(111)] = 3060,
  [SMALL_STATE(112)] = 3077,
  [SMALL_STATE(113)] = 3102,
  [SMALL_STATE(114)] = 3125,
  [SMALL_STATE(115)] = 3148,
  [SMALL_STATE(116)] = 3165,
  [SMALL_STATE(117)] = 3190,
  [SMALL_STATE(118)] = 3210,
  [SMALL_STATE(119)] = 3226,
  [SMALL_STATE(120)] = 3248,
  [SMALL_STATE(121)] = 3264,
  [SMALL_STATE(122)] = 3280,
  [SMALL_STATE(123)] = 3300,
  [SMALL_STATE(124)] = 3316,
  [SMALL_STATE(125)] = 3336,
  [SMALL_STATE(126)] = 3358,
  [SMALL_STATE(127)] = 3374,
  [SMALL_STATE(128)] = 3396,
  [SMALL_STATE(129)] = 3412,
  [SMALL_STATE(130)] = 3428,
  [SMALL_STATE(131)] = 3450,
  [SMALL_STATE(132)] = 3472,
  [SMALL_STATE(133)] = 3494,
  [SMALL_STATE(134)] = 3516,
  [SMALL_STATE(135)] = 3536,
  [SMALL_STATE(136)] = 3558,
  [SMALL_STATE(137)] = 3574,
  [SMALL_STATE(138)] = 3590,
  [SMALL_STATE(139)] = 3606,
  [SMALL_STATE(140)] = 3622,
  [SMALL_STATE(141)] = 3638,
  [SMALL_STATE(142)] = 3660,
  [SMALL_STATE(143)] = 3682,
  [SMALL_STATE(144)] = 3704,
  [SMALL_STATE(145)] = 3726,
  [SMALL_STATE(146)] = 3748,
  [SMALL_STATE(147)] = 3770,
  [SMALL_STATE(148)] = 3785,
  [SMALL_STATE(149)] = 3804,
  [SMALL_STATE(150)] = 3819,
  [SMALL_STATE(151)] = 3834,
  [SMALL_STATE(152)] = 3847,
  [SMALL_STATE(153)] = 3860,
  [SMALL_STATE(154)] = 3873,
  [SMALL_STATE(155)] = 3886,
  [SMALL_STATE(156)] = 3905,
  [SMALL_STATE(157)] = 3920,
  [SMALL_STATE(158)] = 3937,
  [SMALL_STATE(159)] = 3950,
  [SMALL_STATE(160)] = 3963,
  [SMALL_STATE(161)] = 3976,
  [SMALL_STATE(162)] = 3991,
  [SMALL_STATE(163)] = 4004,
  [SMALL_STATE(164)] = 4017,
  [SMALL_STATE(165)] = 4032,
  [SMALL_STATE(166)] = 4045,
  [SMALL_STATE(167)] = 4058,
  [SMALL_STATE(168)] = 4073,
  [SMALL_STATE(169)] = 4088,
  [SMALL_STATE(170)] = 4103,
  [SMALL_STATE(171)] = 4116,
  [SMALL_STATE(172)] = 4131,
  [SMALL_STATE(173)] = 4150,
  [SMALL_STATE(174)] = 4163,
  [SMALL_STATE(175)] = 4178,
  [SMALL_STATE(176)] = 4193,
  [SMALL_STATE(177)] = 4208,
  [SMALL_STATE(178)] = 4227,
  [SMALL_STATE(179)] = 4242,
  [SMALL_STATE(180)] = 4257,
  [SMALL_STATE(181)] = 4272,
  [SMALL_STATE(182)] = 4285,
  [SMALL_STATE(183)] = 4298,
  [SMALL_STATE(184)] = 4313,
  [SMALL_STATE(185)] = 4328,
  [SMALL_STATE(186)] = 4341,
  [SMALL_STATE(187)] = 4354,
  [SMALL_STATE(188)] = 4369,
  [SMALL_STATE(189)] = 4384,
  [SMALL_STATE(190)] = 4399,
  [SMALL_STATE(191)] = 4418,
  [SMALL_STATE(192)] = 4433,
  [SMALL_STATE(193)] = 4448,
  [SMALL_STATE(194)] = 4463,
  [SMALL_STATE(195)] = 4476,
  [SMALL_STATE(196)] = 4489,
  [SMALL_STATE(197)] = 4504,
  [SMALL_STATE(198)] = 4519,
  [SMALL_STATE(199)] = 4532,
  [SMALL_STATE(200)] = 4545,
  [SMALL_STATE(201)] = 4564,
  [SMALL_STATE(202)] = 4579,
  [SMALL_STATE(203)] = 4596,
  [SMALL_STATE(204)] = 4615,
  [SMALL_STATE(205)] = 4634,
  [SMALL_STATE(206)] = 4653,
  [SMALL_STATE(207)] = 4669,
  [SMALL_STATE(208)] = 4685,
  [SMALL_STATE(209)] = 4699,
  [SMALL_STATE(210)] = 4711,
  [SMALL_STATE(211)] = 4727,
  [SMALL_STATE(212)] = 4743,
  [SMALL_STATE(213)] = 4759,
  [SMALL_STATE(214)] = 4775,
  [SMALL_STATE(215)] = 4787,
  [SMALL_STATE(216)] = 4799,
  [SMALL_STATE(217)] = 4811,
  [SMALL_STATE(218)] = 4827,
  [SMALL_STATE(219)] = 4843,
  [SMALL_STATE(220)] = 4859,
  [SMALL_STATE(221)] = 4871,
  [SMALL_STATE(222)] = 4883,
  [SMALL_STATE(223)] = 4895,
  [SMALL_STATE(224)] = 4909,
  [SMALL_STATE(225)] = 4921,
  [SMALL_STATE(226)] = 4933,
  [SMALL_STATE(227)] = 4945,
  [SMALL_STATE(228)] = 4957,
  [SMALL_STATE(229)] = 4971,
  [SMALL_STATE(230)] = 4985,
  [SMALL_STATE(231)] = 4997,
  [SMALL_STATE(232)] = 5009,
  [SMALL_STATE(233)] = 5023,
  [SMALL_STATE(234)] = 5039,
  [SMALL_STATE(235)] = 5053,
  [SMALL_STATE(236)] = 5065,
  [SMALL_STATE(237)] = 5081,
  [SMALL_STATE(238)] = 5095,
  [SMALL_STATE(239)] = 5109,
  [SMALL_STATE(240)] = 5123,
  [SMALL_STATE(241)] = 5139,
  [SMALL_STATE(242)] = 5155,
  [SMALL_STATE(243)] = 5171,
  [SMALL_STATE(244)] = 5185,
  [SMALL_STATE(245)] = 5201,
  [SMALL_STATE(246)] = 5217,
  [SMALL_STATE(247)] = 5233,
  [SMALL_STATE(248)] = 5249,
  [SMALL_STATE(249)] = 5265,
  [SMALL_STATE(250)] = 5279,
  [SMALL_STATE(251)] = 5295,
  [SMALL_STATE(252)] = 5311,
  [SMALL_STATE(253)] = 5325,
  [SMALL_STATE(254)] = 5339,
  [SMALL_STATE(255)] = 5353,
  [SMALL_STATE(256)] = 5367,
  [SMALL_STATE(257)] = 5383,
  [SMALL_STATE(258)] = 5399,
  [SMALL_STATE(259)] = 5415,
  [SMALL_STATE(260)] = 5431,
  [SMALL_STATE(261)] = 5447,
  [SMALL_STATE(262)] = 5461,
  [SMALL_STATE(263)] = 5475,
  [SMALL_STATE(264)] = 5489,
  [SMALL_STATE(265)] = 5503,
  [SMALL_STATE(266)] = 5517,
  [SMALL_STATE(267)] = 5531,
  [SMALL_STATE(268)] = 5545,
  [SMALL_STATE(269)] = 5559,
  [SMALL_STATE(270)] = 5573,
  [SMALL_STATE(271)] = 5587,
  [SMALL_STATE(272)] = 5601,
  [SMALL_STATE(273)] = 5617,
  [SMALL_STATE(274)] = 5633,
  [SMALL_STATE(275)] = 5649,
  [SMALL_STATE(276)] = 5662,
  [SMALL_STATE(277)] = 5675,
  [SMALL_STATE(278)] = 5688,
  [SMALL_STATE(279)] = 5699,
  [SMALL_STATE(280)] = 5710,
  [SMALL_STATE(281)] = 5721,
  [SMALL_STATE(282)] = 5732,
  [SMALL_STATE(283)] = 5745,
  [SMALL_STATE(284)] = 5756,
  [SMALL_STATE(285)] = 5769,
  [SMALL_STATE(286)] = 5782,
  [SMALL_STATE(287)] = 5795,
  [SMALL_STATE(288)] = 5808,
  [SMALL_STATE(289)] = 5821,
  [SMALL_STATE(290)] = 5834,
  [SMALL_STATE(291)] = 5847,
  [SMALL_STATE(292)] = 5860,
  [SMALL_STATE(293)] = 5873,
  [SMALL_STATE(294)] = 5886,
  [SMALL_STATE(295)] = 5897,
  [SMALL_STATE(296)] = 5910,
  [SMALL_STATE(297)] = 5921,
  [SMALL_STATE(298)] = 5932,
  [SMALL_STATE(299)] = 5945,
  [SMALL_STATE(300)] = 5958,
  [SMALL_STATE(301)] = 5971,
  [SMALL_STATE(302)] = 5984,
  [SMALL_STATE(303)] = 5997,
  [SMALL_STATE(304)] = 6007,
  [SMALL_STATE(305)] = 6017,
  [SMALL_STATE(306)] = 6027,
  [SMALL_STATE(307)] = 6037,
  [SMALL_STATE(308)] = 6047,
  [SMALL_STATE(309)] = 6057,
  [SMALL_STATE(310)] = 6067,
  [SMALL_STATE(311)] = 6077,
  [SMALL_STATE(312)] = 6087,
  [SMALL_STATE(313)] = 6097,
  [SMALL_STATE(314)] = 6107,
  [SMALL_STATE(315)] = 6117,
  [SMALL_STATE(316)] = 6127,
  [SMALL_STATE(317)] = 6137,
  [SMALL_STATE(318)] = 6147,
  [SMALL_STATE(319)] = 6157,
  [SMALL_STATE(320)] = 6167,
  [SMALL_STATE(321)] = 6177,
  [SMALL_STATE(322)] = 6187,
  [SMALL_STATE(323)] = 6197,
  [SMALL_STATE(324)] = 6207,
  [SMALL_STATE(325)] = 6217,
  [SMALL_STATE(326)] = 6227,
  [SMALL_STATE(327)] = 6237,
  [SMALL_STATE(328)] = 6247,
  [SMALL_STATE(329)] = 6257,
  [SMALL_STATE(330)] = 6267,
  [SMALL_STATE(331)] = 6277,
  [SMALL_STATE(332)] = 6287,
  [SMALL_STATE(333)] = 6297,
  [SMALL_STATE(334)] = 6307,
  [SMALL_STATE(335)] = 6317,
  [SMALL_STATE(336)] = 6327,
  [SMALL_STATE(337)] = 6337,
  [SMALL_STATE(338)] = 6347,
  [SMALL_STATE(339)] = 6357,
  [SMALL_STATE(340)] = 6367,
  [SMALL_STATE(341)] = 6377,
  [SMALL_STATE(342)] = 6387,
  [SMALL_STATE(343)] = 6397,
  [SMALL_STATE(344)] = 6407,
  [SMALL_STATE(345)] = 6417,
  [SMALL_STATE(346)] = 6427,
  [SMALL_STATE(347)] = 6437,
  [SMALL_STATE(348)] = 6447,
  [SMALL_STATE(349)] = 6457,
  [SMALL_STATE(350)] = 6467,
  [SMALL_STATE(351)] = 6477,
  [SMALL_STATE(352)] = 6487,
  [SMALL_STATE(353)] = 6497,
  [SMALL_STATE(354)] = 6507,
  [SMALL_STATE(355)] = 6517,
  [SMALL_STATE(356)] = 6527,
  [SMALL_STATE(357)] = 6537,
  [SMALL_STATE(358)] = 6547,
  [SMALL_STATE(359)] = 6557,
  [SMALL_STATE(360)] = 6567,
  [SMALL_STATE(361)] = 6577,
  [SMALL_STATE(362)] = 6587,
  [SMALL_STATE(363)] = 6597,
  [SMALL_STATE(364)] = 6607,
  [SMALL_STATE(365)] = 6617,
  [SMALL_STATE(366)] = 6627,
  [SMALL_STATE(367)] = 6637,
  [SMALL_STATE(368)] = 6647,
  [SMALL_STATE(369)] = 6657,
  [SMALL_STATE(370)] = 6667,
  [SMALL_STATE(371)] = 6677,
  [SMALL_STATE(372)] = 6687,
  [SMALL_STATE(373)] = 6697,
  [SMALL_STATE(374)] = 6707,
  [SMALL_STATE(375)] = 6717,
  [SMALL_STATE(376)] = 6727,
  [SMALL_STATE(377)] = 6737,
  [SMALL_STATE(378)] = 6747,
  [SMALL_STATE(379)] = 6757,
  [SMALL_STATE(380)] = 6767,
  [SMALL_STATE(381)] = 6777,
  [SMALL_STATE(382)] = 6787,
  [SMALL_STATE(383)] = 6797,
  [SMALL_STATE(384)] = 6807,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 33),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(284),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(207),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(70),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(69),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 64),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(275),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 61),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(218),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(96),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(256),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(90),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, .production_id = 43),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, .production_id = 65),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, .production_id = 65),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 66),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 66),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(211),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, .production_id = 17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(257),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(128),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, .production_id = 17),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(160),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(212),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(307),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 58),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 58),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(184),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(217),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, .production_id = 45),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, .production_id = 57),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(219),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(101),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(179),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, .production_id = 11),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, .production_id = 39),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 14),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 14),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(260),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(168),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 49),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 48),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(245),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(166),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(270),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(248),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 14),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, .production_id = 40),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(244),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(215),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, .production_id = 23),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, .production_id = 23),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 14),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 13),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, .production_id = 40),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 29),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, .production_id = 10),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(222),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(242),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(313),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(255),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, .production_id = 9),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(303),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(308),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(175),
  [580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(268),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(233),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(181),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(185),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(151),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(197),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(196),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(197),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 42),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(88),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(213),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 62),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 62),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 51),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(383),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, .production_id = 37),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, .production_id = 10),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 44),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_line, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 34),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 50),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 63),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 63),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(267),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(261),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 30),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(155),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, .production_id = 59),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, .production_id = 38),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(117),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 52),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, .production_id = 16),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(186),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 47),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 47),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, .production_id = 36),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, .production_id = 12),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 20),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, .production_id = 2),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 46),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 21),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, .production_id = 35),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, .production_id = 36),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, .production_id = 35),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 18),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 31),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, .production_id = 2),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, .production_id = 7),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, .production_id = 8),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, .production_id = 15),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, .production_id = 16),
  [1002] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, .production_id = 19),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, .production_id = 22),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, .production_id = 24),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, .production_id = 25),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, .production_id = 26),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, .production_id = 27),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 60),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, .production_id = 28),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 56),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 55),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 54),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 53),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_comment, 2, .production_id = 32),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, .production_id = 7),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 41),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, .production_id = 25),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
